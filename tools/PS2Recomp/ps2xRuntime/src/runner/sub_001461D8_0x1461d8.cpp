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

// Function: sub_001461D8
// Address: 0x1461d8 - 0x146310
void sub_001461D8_0x1461d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001461D8_0x1461d8");
#endif

    switch (ctx->pc) {
        case 0x146200u: goto label_146200;
        case 0x146220u: goto label_146220;
        case 0x146238u: goto label_146238;
        case 0x146260u: goto label_146260;
        case 0x14626cu: goto label_14626c;
        case 0x146274u: goto label_146274;
        case 0x14628cu: goto label_14628c;
        case 0x1462a8u: goto label_1462a8;
        case 0x1462c0u: goto label_1462c0;
        case 0x1462e8u: goto label_1462e8;
        case 0x1462f0u: goto label_1462f0;
        default: break;
    }

    ctx->pc = 0x1461d8u;

    // 0x1461d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1461d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1461dc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1461dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1461e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1461e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1461e4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1461e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1461e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1461e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1461ec: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1461ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1461f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1461f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1461f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1461f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1461f8: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x1461F8u;
    SET_GPR_U32(ctx, 31, 0x146200u);
    ctx->pc = 0x1461FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461F8u;
    // 0x1461fc: 0x24072505  addiu       $a3, $zero, 0x2505 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9477));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x1461F8u, 0x146200u)) {
        return;
    }
    ctx->pc = 0x146200u;
label_146200:
    // 0x146200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146204: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x146204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x146208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x146208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14620c: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x14620Cu;
    {
        const bool branch_taken_0x14620c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x146210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14620Cu;
        // 0x146210: 0xac44848c  sw          $a0, -0x7B74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294935692), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14620c) {
            ctx->pc = 0x1462F4u;
            goto label_1462f4;
        }
    }
    ctx->pc = 0x146214u;
    // 0x146214: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x146214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146218: 0xc08a130  jal         func_2284C0
    ctx->pc = 0x146218u;
    SET_GPR_U32(ctx, 31, 0x146220u);
    ctx->pc = 0x14621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146218u;
    // 0x14621c: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2284C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2284C0u, 0x146218u, 0x146220u)) {
        return;
    }
    ctx->pc = 0x146220u;
label_146220:
    // 0x146220: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x146220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146224: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x146224u;
    {
        const bool branch_taken_0x146224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146224u;
        // 0x146228: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146224) {
            ctx->pc = 0x146260u;
            goto label_146260;
        }
    }
    ctx->pc = 0x14622Cu;
    // 0x14622c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14622cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146230: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x146230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x146234: 0x0  nop
    ctx->pc = 0x146234u;
    // NOP
label_146238:
    // 0x146238: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x146238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14623c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x14623cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x146240: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x146240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x146244: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x146244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x146248: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14624c: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x14624cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x146250: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x146250u;
    {
        const bool branch_taken_0x146250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146250u;
        // 0x146254: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146250) {
            ctx->pc = 0x146238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146238;
        }
    }
    ctx->pc = 0x146258u;
    // 0x146258: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x146258u;
    SET_GPR_U32(ctx, 31, 0x146260u);
    ctx->pc = 0x14625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146258u;
    // 0x14625c: 0x8e04848c  lw          $a0, -0x7B74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228340u, 0x146258u, 0x146260u)) {
        return;
    }
    ctx->pc = 0x146260u;
label_146260:
    // 0x146260: 0x8e04848c  lw          $a0, -0x7B74($s0)
    ctx->pc = 0x146260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935692)));
    // 0x146264: 0xc091c52  jal         func_247148
    ctx->pc = 0x146264u;
    SET_GPR_U32(ctx, 31, 0x14626Cu);
    ctx->pc = 0x146268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146264u;
    // 0x146268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247148u, 0x146264u, 0x14626Cu)) {
        return;
    }
    ctx->pc = 0x14626Cu;
label_14626c:
    // 0x14626c: 0xc08ab50  jal         func_22AD40
    ctx->pc = 0x14626Cu;
    SET_GPR_U32(ctx, 31, 0x146274u);
    ctx->pc = 0x146270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14626Cu;
    // 0x146270: 0x8e04848c  lw          $a0, -0x7B74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x14626Cu, 0x146274u)) {
        return;
    }
    ctx->pc = 0x146274u;
label_146274:
    // 0x146274: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x146274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x146278: 0xae228490  sw          $v0, -0x7B70($s1)
    ctx->pc = 0x146278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294935696), GPR_U32(ctx, 2));
    // 0x14627c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14627cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146280: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x146280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x146284: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x146284u;
    SET_GPR_U32(ctx, 31, 0x14628Cu);
    ctx->pc = 0x146288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146284u;
    // 0x146288: 0x24070504  addiu       $a3, $zero, 0x504 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x146284u, 0x14628Cu)) {
        return;
    }
    ctx->pc = 0x14628Cu;
label_14628c:
    // 0x14628c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14628cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146290: 0x8e02848c  lw          $v0, -0x7B74($s0)
    ctx->pc = 0x146290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935692)));
    // 0x146294: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x146294u;
    {
        const bool branch_taken_0x146294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146294u;
        // 0x146298: 0xae448494  sw          $a0, -0x7B6C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294935700), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146294) {
            ctx->pc = 0x1462F4u;
            goto label_1462f4;
        }
    }
    ctx->pc = 0x14629Cu;
    // 0x14629c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14629cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462a0: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1462A0u;
    SET_GPR_U32(ctx, 31, 0x1462A8u);
    ctx->pc = 0x1462A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1462A0u;
    // 0x1462a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x1462A0u, 0x1462A8u)) {
        return;
    }
    ctx->pc = 0x1462A8u;
label_1462a8:
    // 0x1462a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1462a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1462ACu;
    {
        const bool branch_taken_0x1462ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1462B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462ACu;
        // 0x1462b0: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462ac) {
            ctx->pc = 0x1462E8u;
            goto label_1462e8;
        }
    }
    ctx->pc = 0x1462B4u;
    // 0x1462b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1462b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462b8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1462b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1462bc: 0x0  nop
    ctx->pc = 0x1462bcu;
    // NOP
label_1462c0:
    // 0x1462c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1462c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1462c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1462c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1462c8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1462c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1462cc: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x1462ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1462d0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1462d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1462d4: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x1462d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1462d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1462D8u;
    {
        const bool branch_taken_0x1462d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1462DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462D8u;
        // 0x1462dc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462d8) {
            ctx->pc = 0x1462C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1462c0;
        }
    }
    ctx->pc = 0x1462E0u;
    // 0x1462e0: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x1462E0u;
    SET_GPR_U32(ctx, 31, 0x1462E8u);
    ctx->pc = 0x1462E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1462E0u;
    // 0x1462e4: 0x8e448494  lw          $a0, -0x7B6C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x1462E0u, 0x1462E8u)) {
        return;
    }
    ctx->pc = 0x1462E8u;
label_1462e8:
    // 0x1462e8: 0xc08ab50  jal         func_22AD40
    ctx->pc = 0x1462E8u;
    SET_GPR_U32(ctx, 31, 0x1462F0u);
    ctx->pc = 0x1462ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1462E8u;
    // 0x1462ec: 0x8e448494  lw          $a0, -0x7B6C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x1462E8u, 0x1462F0u)) {
        return;
    }
    ctx->pc = 0x1462F0u;
label_1462f0:
    // 0x1462f0: 0xae028498  sw          $v0, -0x7B68($s0)
    ctx->pc = 0x1462f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294935704), GPR_U32(ctx, 2));
label_1462f4:
    // 0x1462f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1462f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1462f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1462f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1462fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1462fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146304: 0x3e00008  jr          $ra
    ctx->pc = 0x146304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146304u;
        // 0x146308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14630Cu;
    // 0x14630c: 0x0  nop
    ctx->pc = 0x14630cu;
    // NOP
    ctx->pc = 0x146310u;
}
