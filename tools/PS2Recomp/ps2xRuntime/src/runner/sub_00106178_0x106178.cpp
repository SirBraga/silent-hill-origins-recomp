#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106178
// Address: 0x106178 - 0x1062f0
void sub_00106178_0x106178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106178_0x106178");
#endif

    switch (ctx->pc) {
        case 0x106210u: goto label_106210;
        case 0x106238u: goto label_106238;
        case 0x106244u: goto label_106244;
        case 0x106270u: goto label_106270;
        case 0x10627cu: goto label_10627c;
        case 0x106288u: goto label_106288;
        case 0x1062b4u: goto label_1062b4;
        case 0x1062c0u: goto label_1062c0;
        default: break;
    }

    ctx->pc = 0x106178u;

    // 0x106178: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x106178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10617c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10617cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x106180: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x106180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x106184: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x106184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x106188: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x106188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10618c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x106190: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x106190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x106194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x106194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x106198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10619c: 0x8e6304bc  lw          $v1, 0x4BC($s3)
    ctx->pc = 0x10619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1212)));
    // 0x1061a0: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1061A0u;
    {
        const bool branch_taken_0x1061a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1061A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061A0u;
        // 0x1061a4: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061a0) {
            ctx->pc = 0x1062C4u;
            goto label_1062c4;
        }
    }
    ctx->pc = 0x1061A8u;
    // 0x1061a8: 0x8e6504b8  lw          $a1, 0x4B8($s3)
    ctx->pc = 0x1061a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1208)));
    // 0x1061ac: 0x10a00045  beqz        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1061ACu;
    {
        const bool branch_taken_0x1061ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1061B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061ACu;
        // 0x1061b0: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061ac) {
            ctx->pc = 0x1062C4u;
            goto label_1062c4;
        }
    }
    ctx->pc = 0x1061B4u;
    // 0x1061b4: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x1061b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1061b8: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x1061b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1061bc: 0x8c640070  lw          $a0, 0x70($v1)
    ctx->pc = 0x1061bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1061c0: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1061C0u;
    {
        const bool branch_taken_0x1061c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1061C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061C0u;
        // 0x1061c4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061c0) {
            ctx->pc = 0x1062C4u;
            goto label_1062c4;
        }
    }
    ctx->pc = 0x1061C8u;
    // 0x1061c8: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1061C8u;
    {
        const bool branch_taken_0x1061c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1061CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061C8u;
        // 0x1061cc: 0x28a20003  slti        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061c8) {
            ctx->pc = 0x106204u;
            goto label_106204;
        }
    }
    ctx->pc = 0x1061D0u;
    // 0x1061d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1061D0u;
    {
        const bool branch_taken_0x1061d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1061D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061D0u;
        // 0x1061d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061d0) {
            ctx->pc = 0x1061E8u;
            goto label_1061e8;
        }
    }
    ctx->pc = 0x1061D8u;
    // 0x1061d8: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1061D8u;
    {
        const bool branch_taken_0x1061d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1061DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061D8u;
        // 0x1061dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061d8) {
            ctx->pc = 0x1061FCu;
            goto label_1061fc;
        }
    }
    ctx->pc = 0x1061E0u;
    // 0x1061e0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1061E0u;
    {
        const bool branch_taken_0x1061e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1061E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061E0u;
        // 0x1061e4: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061e0) {
            ctx->pc = 0x1062CCu;
            goto label_1062cc;
        }
    }
    ctx->pc = 0x1061E8u;
label_1061e8:
    // 0x1061e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1061e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1061ec: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1061ECu;
    {
        const bool branch_taken_0x1061ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1061F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061ECu;
        // 0x1061f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061ec) {
            ctx->pc = 0x106218u;
            goto label_106218;
        }
    }
    ctx->pc = 0x1061F4u;
    // 0x1061f4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1061F4u;
    {
        const bool branch_taken_0x1061f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1061F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061F4u;
        // 0x1061f8: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061f4) {
            ctx->pc = 0x1062CCu;
            goto label_1062cc;
        }
    }
    ctx->pc = 0x1061FCu;
label_1061fc:
    // 0x1061fc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1061FCu;
    {
        const bool branch_taken_0x1061fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061FCu;
        // 0x106200: 0xae6304b8  sw          $v1, 0x4B8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061fc) {
            ctx->pc = 0x1062C4u;
            goto label_1062c4;
        }
    }
    ctx->pc = 0x106204u;
label_106204:
    // 0x106204: 0xc66c04c0  lwc1        $f12, 0x4C0($s3)
    ctx->pc = 0x106204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x106208: 0xc09fba2  jal         func_27EE88
    ctx->pc = 0x106208u;
    SET_GPR_U32(ctx, 31, 0x106210u);
    ctx->pc = 0x10620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106208u;
    // 0x10620c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EE88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27EE88u, 0x106208u, 0x106210u)) {
        return;
    }
    ctx->pc = 0x106210u;
label_106210:
    // 0x106210: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x106210u;
    {
        const bool branch_taken_0x106210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106210u;
        // 0x106214: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106210) {
            ctx->pc = 0x1062C8u;
            goto label_1062c8;
        }
    }
    ctx->pc = 0x106218u;
label_106218:
    // 0x106218: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x106218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x10621c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x10621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x106220: 0x8c50006c  lw          $s0, 0x6C($v0)
    ctx->pc = 0x106220u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x106224: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x106224u;
    {
        const bool branch_taken_0x106224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106224u;
        // 0x106228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106224) {
            ctx->pc = 0x1062C0u;
            goto label_1062c0;
        }
    }
    ctx->pc = 0x10622Cu;
    // 0x10622c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10622cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106230: 0xc09fc70  jal         func_27F1C0
    ctx->pc = 0x106230u;
    SET_GPR_U32(ctx, 31, 0x106238u);
    ctx->pc = 0x106234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106230u;
    // 0x106234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F1C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F1C0u, 0x106230u, 0x106238u)) {
        return;
    }
    ctx->pc = 0x106238u;
label_106238:
    // 0x106238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10623c: 0xc09fafc  jal         func_27EBF0
    ctx->pc = 0x10623Cu;
    SET_GPR_U32(ctx, 31, 0x106244u);
    ctx->pc = 0x106240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10623Cu;
    // 0x106240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EBF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27EBF0u, 0x10623Cu, 0x106244u)) {
        return;
    }
    ctx->pc = 0x106244u;
label_106244:
    // 0x106244: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x106244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x106248: 0x8c62386c  lw          $v0, 0x386C($v1)
    ctx->pc = 0x106248u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B386Cu));
    // 0x10624c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x106250: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x106250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x106254: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x106254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x106258: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x106258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10625c: 0x8e120018  lw          $s2, 0x18($s0)
    ctx->pc = 0x10625cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x106260: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x106260u;
    {
        const bool branch_taken_0x106260 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x106260) {
            ctx->pc = 0x1062B8u;
            goto label_1062b8;
        }
    }
    ctx->pc = 0x106268u;
    // 0x106268: 0xc09f90a  jal         func_27E428
    ctx->pc = 0x106268u;
    SET_GPR_U32(ctx, 31, 0x106270u);
    ctx->pc = 0x10626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106268u;
    // 0x10626c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E428u, 0x106268u, 0x106270u)) {
        return;
    }
    ctx->pc = 0x106270u;
label_106270:
    // 0x106270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106274: 0xc09fc42  jal         func_27F108
    ctx->pc = 0x106274u;
    SET_GPR_U32(ctx, 31, 0x10627Cu);
    ctx->pc = 0x106278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106274u;
    // 0x106278: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F108u, 0x106274u, 0x10627Cu)) {
        return;
    }
    ctx->pc = 0x10627Cu;
label_10627c:
    // 0x10627c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10627Cu;
    {
        const bool branch_taken_0x10627c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10627Cu;
        // 0x106280: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10627c) {
            ctx->pc = 0x1062A0u;
            goto label_1062a0;
        }
    }
    ctx->pc = 0x106284u;
    // 0x106284: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x106284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106288:
    // 0x106288: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x106288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x10628c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10628cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x106290: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x106290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x106294: 0x0  nop
    ctx->pc = 0x106294u;
    // NOP
    // 0x106298: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x106298u;
    {
        const bool branch_taken_0x106298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106298u;
        // 0x10629c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106298) {
            ctx->pc = 0x106288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106288;
        }
    }
    ctx->pc = 0x1062A0u;
label_1062a0:
    // 0x1062a0: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x1062a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1062a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1062A4u;
    {
        const bool branch_taken_0x1062a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1062a4) {
            ctx->pc = 0x1062B8u;
            goto label_1062b8;
        }
    }
    ctx->pc = 0x1062ACu;
    // 0x1062ac: 0xc093356  jal         func_24CD58
    ctx->pc = 0x1062ACu;
    SET_GPR_U32(ctx, 31, 0x1062B4u);
    ctx->pc = 0x24CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CD58u, 0x1062ACu, 0x1062B4u)) {
        return;
    }
    ctx->pc = 0x1062B4u;
label_1062b4:
    // 0x1062b4: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x1062b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_1062b8:
    // 0x1062b8: 0xc0416d2  jal         func_105B48
    ctx->pc = 0x1062B8u;
    SET_GPR_U32(ctx, 31, 0x1062C0u);
    ctx->pc = 0x1062BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062B8u;
    // 0x1062bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105B48u, 0x1062B8u, 0x1062C0u)) {
        return;
    }
    ctx->pc = 0x1062C0u;
label_1062c0:
    // 0x1062c0: 0xae6004b8  sw          $zero, 0x4B8($s3)
    ctx->pc = 0x1062c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1208), GPR_U32(ctx, 0));
label_1062c4:
    // 0x1062c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1062c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1062c8:
    // 0x1062c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1062c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1062cc:
    // 0x1062cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1062ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1062d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1062d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1062d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1062d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1062d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1062D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1062DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062D8u;
        // 0x1062dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1062D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1062E0u;
    // 0x1062e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1062e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062e4: 0x0  nop
    ctx->pc = 0x1062e4u;
    // NOP
    // 0x1062e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1062e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1062ec: 0x0  nop
    ctx->pc = 0x1062ecu;
    // NOP
    ctx->pc = 0x1062f0u;
}
