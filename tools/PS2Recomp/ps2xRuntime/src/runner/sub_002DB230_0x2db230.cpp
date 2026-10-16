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

// Function: sub_002DB230
// Address: 0x2db230 - 0x2db348
void sub_002DB230_0x2db230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB230_0x2db230");
#endif

    switch (ctx->pc) {
        case 0x2db230u: goto label_2db230;
        case 0x2db234u: goto label_2db234;
        case 0x2db238u: goto label_2db238;
        case 0x2db23cu: goto label_2db23c;
        case 0x2db240u: goto label_2db240;
        case 0x2db244u: goto label_2db244;
        case 0x2db248u: goto label_2db248;
        case 0x2db24cu: goto label_2db24c;
        case 0x2db250u: goto label_2db250;
        case 0x2db254u: goto label_2db254;
        case 0x2db258u: goto label_2db258;
        case 0x2db25cu: goto label_2db25c;
        case 0x2db260u: goto label_2db260;
        case 0x2db264u: goto label_2db264;
        case 0x2db268u: goto label_2db268;
        case 0x2db26cu: goto label_2db26c;
        case 0x2db270u: goto label_2db270;
        case 0x2db274u: goto label_2db274;
        case 0x2db278u: goto label_2db278;
        case 0x2db27cu: goto label_2db27c;
        case 0x2db280u: goto label_2db280;
        case 0x2db284u: goto label_2db284;
        case 0x2db288u: goto label_2db288;
        case 0x2db28cu: goto label_2db28c;
        case 0x2db290u: goto label_2db290;
        case 0x2db294u: goto label_2db294;
        case 0x2db298u: goto label_2db298;
        case 0x2db29cu: goto label_2db29c;
        case 0x2db2a0u: goto label_2db2a0;
        case 0x2db2a4u: goto label_2db2a4;
        case 0x2db2a8u: goto label_2db2a8;
        case 0x2db2acu: goto label_2db2ac;
        case 0x2db2b0u: goto label_2db2b0;
        case 0x2db2b4u: goto label_2db2b4;
        case 0x2db2b8u: goto label_2db2b8;
        case 0x2db2bcu: goto label_2db2bc;
        case 0x2db2c0u: goto label_2db2c0;
        case 0x2db2c4u: goto label_2db2c4;
        case 0x2db2c8u: goto label_2db2c8;
        case 0x2db2ccu: goto label_2db2cc;
        case 0x2db2d0u: goto label_2db2d0;
        case 0x2db2d4u: goto label_2db2d4;
        case 0x2db2d8u: goto label_2db2d8;
        case 0x2db2dcu: goto label_2db2dc;
        case 0x2db2e0u: goto label_2db2e0;
        case 0x2db2e4u: goto label_2db2e4;
        case 0x2db2e8u: goto label_2db2e8;
        case 0x2db2ecu: goto label_2db2ec;
        case 0x2db2f0u: goto label_2db2f0;
        case 0x2db2f4u: goto label_2db2f4;
        case 0x2db2f8u: goto label_2db2f8;
        case 0x2db2fcu: goto label_2db2fc;
        case 0x2db300u: goto label_2db300;
        case 0x2db304u: goto label_2db304;
        case 0x2db308u: goto label_2db308;
        case 0x2db30cu: goto label_2db30c;
        case 0x2db310u: goto label_2db310;
        case 0x2db314u: goto label_2db314;
        case 0x2db318u: goto label_2db318;
        case 0x2db31cu: goto label_2db31c;
        case 0x2db320u: goto label_2db320;
        case 0x2db324u: goto label_2db324;
        case 0x2db328u: goto label_2db328;
        case 0x2db32cu: goto label_2db32c;
        case 0x2db330u: goto label_2db330;
        case 0x2db334u: goto label_2db334;
        case 0x2db338u: goto label_2db338;
        case 0x2db33cu: goto label_2db33c;
        case 0x2db340u: goto label_2db340;
        case 0x2db344u: goto label_2db344;
        default: break;
    }

    ctx->pc = 0x2db230u;

label_2db230:
    // 0x2db230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2db230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2db234:
    // 0x2db234: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2db234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2db238:
    // 0x2db238: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2db238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2db23c:
    // 0x2db23c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2db23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2db240:
    // 0x2db240: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2db240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2db244:
    // 0x2db244: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2db244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2db248:
    // 0x2db248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2db24c:
    // 0x2db24c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2db24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2db250:
    // 0x2db250: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2db254:
    if (ctx->pc == 0x2DB254u) {
        ctx->pc = 0x2DB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB250u;
        // 0x2db254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB258u;
        goto label_2db258;
    }
    ctx->pc = 0x2DB250u;
    {
        const bool branch_taken_0x2db250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db250) {
            ctx->pc = 0x2DB254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB250u;
            // 0x2db254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB264u;
            goto label_2db264;
        }
    }
    ctx->pc = 0x2DB258u;
label_2db258:
    // 0x2db258: 0x40f809  jalr        $v0
label_2db25c:
    if (ctx->pc == 0x2DB25Cu) {
        ctx->pc = 0x2DB260u;
        goto label_2db260;
    }
    ctx->pc = 0x2DB258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DB260u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB258u, 0x2DB260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DB260u;
label_2db260:
    // 0x2db260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2db260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db264:
    // 0x2db264: 0xc0b7d76  jal         func_2DF5D8
label_2db268:
    if (ctx->pc == 0x2DB268u) {
        ctx->pc = 0x2DB268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB264u;
        // 0x2db268: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB26Cu;
        goto label_2db26c;
    }
    ctx->pc = 0x2DB264u;
    SET_GPR_U32(ctx, 31, 0x2DB26Cu);
    ctx->pc = 0x2DB268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB264u;
    // 0x2db268: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF5D8u, 0x2DB264u, 0x2DB26Cu)) {
        return;
    }
    ctx->pc = 0x2DB26Cu;
label_2db26c:
    // 0x2db26c: 0x96320014  lhu         $s2, 0x14($s1)
    ctx->pc = 0x2db26cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_2db270:
    // 0x2db270: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
label_2db274:
    if (ctx->pc == 0x2DB274u) {
        ctx->pc = 0x2DB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB270u;
        // 0x2db274: 0x96320016  lhu         $s2, 0x16($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB278u;
        goto label_2db278;
    }
    ctx->pc = 0x2DB270u;
    {
        const bool branch_taken_0x2db270 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db270) {
            ctx->pc = 0x2DB274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB270u;
            // 0x2db274: 0x96320016  lhu         $s2, 0x16($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB2A0u;
            goto label_2db2a0;
        }
    }
    ctx->pc = 0x2DB278u;
label_2db278:
    // 0x2db278: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2db278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db27c:
    // 0x2db27c: 0x0  nop
    ctx->pc = 0x2db27cu;
    // NOP
label_2db280:
    // 0x2db280: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2db280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2db284:
    // 0x2db284: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2db284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2db288:
    // 0x2db288: 0xc0b7d76  jal         func_2DF5D8
label_2db28c:
    if (ctx->pc == 0x2DB28Cu) {
        ctx->pc = 0x2DB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB288u;
        // 0x2db28c: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB290u;
        goto label_2db290;
    }
    ctx->pc = 0x2DB288u;
    SET_GPR_U32(ctx, 31, 0x2DB290u);
    ctx->pc = 0x2DB28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB288u;
    // 0x2db28c: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF5D8u, 0x2DB288u, 0x2DB290u)) {
        return;
    }
    ctx->pc = 0x2DB290u;
label_2db290:
    // 0x2db290: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x2db290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2db294:
    // 0x2db294: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2db298:
    if (ctx->pc == 0x2DB298u) {
        ctx->pc = 0x2DB298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB294u;
        // 0x2db298: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB29Cu;
        goto label_2db29c;
    }
    ctx->pc = 0x2DB294u;
    {
        const bool branch_taken_0x2db294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB294u;
        // 0x2db298: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db294) {
            ctx->pc = 0x2DB280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DB29Cu;
label_2db29c:
    // 0x2db29c: 0x96320016  lhu         $s2, 0x16($s1)
    ctx->pc = 0x2db29cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
label_2db2a0:
    // 0x2db2a0: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_2db2a4:
    if (ctx->pc == 0x2DB2A4u) {
        ctx->pc = 0x2DB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2A0u;
        // 0x2db2a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB2A8u;
        goto label_2db2a8;
    }
    ctx->pc = 0x2DB2A0u;
    {
        const bool branch_taken_0x2db2a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2A0u;
        // 0x2db2a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2a0) {
            ctx->pc = 0x2DB2CCu;
            goto label_2db2cc;
        }
    }
    ctx->pc = 0x2DB2A8u;
label_2db2a8:
    // 0x2db2a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2db2a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db2ac:
    // 0x2db2ac: 0x0  nop
    ctx->pc = 0x2db2acu;
    // NOP
label_2db2b0:
    // 0x2db2b0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2db2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2db2b4:
    // 0x2db2b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2db2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2db2b8:
    // 0x2db2b8: 0xc0b7d76  jal         func_2DF5D8
label_2db2bc:
    if (ctx->pc == 0x2DB2BCu) {
        ctx->pc = 0x2DB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2B8u;
        // 0x2db2bc: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB2C0u;
        goto label_2db2c0;
    }
    ctx->pc = 0x2DB2B8u;
    SET_GPR_U32(ctx, 31, 0x2DB2C0u);
    ctx->pc = 0x2DB2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB2B8u;
    // 0x2db2bc: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF5D8u, 0x2DB2B8u, 0x2DB2C0u)) {
        return;
    }
    ctx->pc = 0x2DB2C0u;
label_2db2c0:
    // 0x2db2c0: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x2db2c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2db2c4:
    // 0x2db2c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2db2c8:
    if (ctx->pc == 0x2DB2C8u) {
        ctx->pc = 0x2DB2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2C4u;
        // 0x2db2c8: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB2CCu;
        goto label_2db2cc;
    }
    ctx->pc = 0x2DB2C4u;
    {
        const bool branch_taken_0x2db2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2C4u;
        // 0x2db2c8: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2c4) {
            ctx->pc = 0x2DB2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db2b0;
        }
    }
    ctx->pc = 0x2DB2CCu;
label_2db2cc:
    // 0x2db2cc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2db2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2db2d0:
    // 0x2db2d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2db2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2db2d4:
    // 0x2db2d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2db2d8:
    if (ctx->pc == 0x2DB2D8u) {
        ctx->pc = 0x2DB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2D4u;
        // 0x2db2d8: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB2DCu;
        goto label_2db2dc;
    }
    ctx->pc = 0x2DB2D4u;
    {
        const bool branch_taken_0x2db2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db2d4) {
            ctx->pc = 0x2DB2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB2D4u;
            // 0x2db2d8: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB2E8u;
            goto label_2db2e8;
        }
    }
    ctx->pc = 0x2DB2DCu;
label_2db2dc:
    // 0x2db2dc: 0xc0b7080  jal         func_2DC200
label_2db2e0:
    if (ctx->pc == 0x2DB2E0u) {
        ctx->pc = 0x2DB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2DCu;
        // 0x2db2e0: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB2E4u;
        goto label_2db2e4;
    }
    ctx->pc = 0x2DB2DCu;
    SET_GPR_U32(ctx, 31, 0x2DB2E4u);
    ctx->pc = 0x2DB2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB2DCu;
    // 0x2db2e0: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DB2DCu, 0x2DB2E4u)) {
        return;
    }
    ctx->pc = 0x2DB2E4u;
label_2db2e4:
    // 0x2db2e4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2db2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2db2e8:
    // 0x2db2e8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2db2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2db2ec:
    // 0x2db2ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2db2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2db2f0:
    // 0x2db2f0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2db2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2db2f4:
    // 0x2db2f4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2db2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2db2f8:
    // 0x2db2f8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2db2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2db2fc:
    // 0x2db2fc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2db2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2db300:
    // 0x2db300: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2db300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2db304:
    // 0x2db304: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2db308:
    if (ctx->pc == 0x2DB308u) {
        ctx->pc = 0x2DB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB304u;
        // 0x2db308: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB30Cu;
        goto label_2db30c;
    }
    ctx->pc = 0x2DB304u;
    {
        const bool branch_taken_0x2db304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB304u;
        // 0x2db308: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db304) {
            ctx->pc = 0x2DB320u;
            goto label_2db320;
        }
    }
    ctx->pc = 0x2DB30Cu;
label_2db30c:
    // 0x2db30c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2db30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_2db310:
    // 0x2db310: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db314:
    // 0x2db314: 0xc0b81ea  jal         func_2E07A8
label_2db318:
    if (ctx->pc == 0x2DB318u) {
        ctx->pc = 0x2DB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB314u;
        // 0x2db318: 0x24847c70  addiu       $a0, $a0, 0x7C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB31Cu;
        goto label_2db31c;
    }
    ctx->pc = 0x2DB314u;
    SET_GPR_U32(ctx, 31, 0x2DB31Cu);
    ctx->pc = 0x2DB318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB314u;
    // 0x2db318: 0x24847c70  addiu       $a0, $a0, 0x7C70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DB314u, 0x2DB31Cu)) {
        return;
    }
    ctx->pc = 0x2DB31Cu;
label_2db31c:
    // 0x2db31c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2db31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2db320:
    // 0x2db320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db324:
    // 0x2db324: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2db324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2db328:
    // 0x2db328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2db328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2db32c:
    // 0x2db32c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2db32cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2db330:
    // 0x2db330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2db334:
    // 0x2db334: 0x3e00008  jr          $ra
label_2db338:
    if (ctx->pc == 0x2DB338u) {
        ctx->pc = 0x2DB338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB334u;
        // 0x2db338: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB33Cu;
        goto label_2db33c;
    }
    ctx->pc = 0x2DB334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB334u;
        // 0x2db338: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB33Cu;
label_2db33c:
    // 0x2db33c: 0x0  nop
    ctx->pc = 0x2db33cu;
    // NOP
label_2db340:
    // 0x2db340: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2db340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2db344:
    // 0x2db344: 0x0  nop
    ctx->pc = 0x2db344u;
    // NOP
    ctx->pc = 0x2db348u;
}
