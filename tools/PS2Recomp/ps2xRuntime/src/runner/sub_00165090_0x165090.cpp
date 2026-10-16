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

// Function: sub_00165090
// Address: 0x165090 - 0x165188
void sub_00165090_0x165090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165090_0x165090");
#endif

    switch (ctx->pc) {
        case 0x1650c0u: goto label_1650c0;
        case 0x1650e4u: goto label_1650e4;
        case 0x165108u: goto label_165108;
        case 0x165130u: goto label_165130;
        case 0x165148u: goto label_165148;
        case 0x16515cu: goto label_16515c;
        default: break;
    }

    ctx->pc = 0x165090u;

    // 0x165090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165094: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x165094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x165098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x165098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16509c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1650a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1650a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1650a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1650a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1650a8: 0x8c438888  lw          $v1, -0x7778($v0)
    ctx->pc = 0x1650a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8888u));
    // 0x1650ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1650acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1650b0: 0x14a3000e  bne         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1650B0u;
    {
        const bool branch_taken_0x1650b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1650B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650B0u;
        // 0x1650b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650b0) {
            ctx->pc = 0x1650ECu;
            goto label_1650ec;
        }
    }
    ctx->pc = 0x1650B8u;
    // 0x1650b8: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1650B8u;
    SET_GPR_U32(ctx, 31, 0x1650C0u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1650B8u, 0x1650C0u)) {
        return;
    }
    ctx->pc = 0x1650C0u;
label_1650c0:
    // 0x1650c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1650c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650c4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1650c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1650c8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1650C8u;
    {
        const bool branch_taken_0x1650c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650C8u;
        // 0x1650cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650c8) {
            ctx->pc = 0x165174u;
            goto label_165174;
        }
    }
    ctx->pc = 0x1650D0u;
    // 0x1650d0: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1650d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1650d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1650d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650d8: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x1650d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1650dc: 0xc0592dc  jal         func_164B70
    ctx->pc = 0x1650DCu;
    SET_GPR_U32(ctx, 31, 0x1650E4u);
    ctx->pc = 0x1650E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650DCu;
    // 0x1650e0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164B70u, 0x1650DCu, 0x1650E4u)) {
        return;
    }
    ctx->pc = 0x1650E4u;
label_1650e4:
    // 0x1650e4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1650E4u;
    {
        const bool branch_taken_0x1650e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650E4u;
        // 0x1650e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650e4) {
            ctx->pc = 0x165174u;
            goto label_165174;
        }
    }
    ctx->pc = 0x1650ECu;
label_1650ec:
    // 0x1650ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1650ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1650f0: 0x8c43f888  lw          $v1, -0x778($v0)
    ctx->pc = 0x1650f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BF888u));
    // 0x1650f4: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1650F4u;
    {
        const bool branch_taken_0x1650f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1650F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650F4u;
        // 0x1650f8: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650f4) {
            ctx->pc = 0x165110u;
            goto label_165110;
        }
    }
    ctx->pc = 0x1650FCu;
    // 0x1650fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1650fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165100: 0xc059462  jal         func_165188
    ctx->pc = 0x165100u;
    SET_GPR_U32(ctx, 31, 0x165108u);
    ctx->pc = 0x165104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165100u;
    // 0x165104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165188u, 0x165100u, 0x165108u)) {
        return;
    }
    ctx->pc = 0x165108u;
label_165108:
    // 0x165108: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x165108u;
    {
        const bool branch_taken_0x165108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165108u;
        // 0x16510c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165108) {
            ctx->pc = 0x165174u;
            goto label_165174;
        }
    }
    ctx->pc = 0x165110u;
label_165110:
    // 0x165110: 0x8c43f880  lw          $v1, -0x780($v0)
    ctx->pc = 0x165110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965376)));
    // 0x165114: 0x14a30017  bne         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x165114u;
    {
        const bool branch_taken_0x165114 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x165118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165114u;
        // 0x165118: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165114) {
            ctx->pc = 0x165174u;
            goto label_165174;
        }
    }
    ctx->pc = 0x16511Cu;
    // 0x16511c: 0x8e22648c  lw          $v0, 0x648C($s1)
    ctx->pc = 0x16511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25740)));
    // 0x165120: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x165120u;
    {
        const bool branch_taken_0x165120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165120u;
        // 0x165124: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165120) {
            ctx->pc = 0x165174u;
            goto label_165174;
        }
    }
    ctx->pc = 0x165128u;
    // 0x165128: 0x2630100c  addiu       $s0, $s1, 0x100C
    ctx->pc = 0x165128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4108));
    // 0x16512c: 0x0  nop
    ctx->pc = 0x16512cu;
    // NOP
label_165130:
    // 0x165130: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x165130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165134: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x165134u;
    {
        const bool branch_taken_0x165134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x165138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165134u;
        // 0x165138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165134) {
            ctx->pc = 0x16515Cu;
            goto label_16515c;
        }
    }
    ctx->pc = 0x16513Cu;
    // 0x16513c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16513cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165140: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x165140u;
    SET_GPR_U32(ctx, 31, 0x165148u);
    ctx->pc = 0x165144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165140u;
    // 0x165144: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x165140u, 0x165148u)) {
        return;
    }
    ctx->pc = 0x165148u;
label_165148:
    // 0x165148: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x165148u;
    {
        const bool branch_taken_0x165148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165148) {
            ctx->pc = 0x16514Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165148u;
            // 0x16514c: 0x8e22648c  lw          $v0, 0x648C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165160u;
            goto label_165160;
        }
    }
    ctx->pc = 0x165150u;
    // 0x165150: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x165150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165154: 0xc058bd4  jal         func_162F50
    ctx->pc = 0x165154u;
    SET_GPR_U32(ctx, 31, 0x16515Cu);
    ctx->pc = 0x165158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165154u;
    // 0x165158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162F50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x162F50u, 0x165154u, 0x16515Cu)) {
        return;
    }
    ctx->pc = 0x16515Cu;
label_16515c:
    // 0x16515c: 0x8e22648c  lw          $v0, 0x648C($s1)
    ctx->pc = 0x16515cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25740)));
label_165160:
    // 0x165160: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x165160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x165164: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x165164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x165168: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x165168u;
    {
        const bool branch_taken_0x165168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165168u;
        // 0x16516c: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165168) {
            ctx->pc = 0x165130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165130;
        }
    }
    ctx->pc = 0x165170u;
    // 0x165170: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x165170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_165174:
    // 0x165174: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x165174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165178: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x165178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16517c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16517cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165180: 0x3e00008  jr          $ra
    ctx->pc = 0x165180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165180u;
        // 0x165184: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165188u;
}
