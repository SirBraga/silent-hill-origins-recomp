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

// Function: sub_0020CD90
// Address: 0x20cd90 - 0x20ce38
void sub_0020CD90_0x20cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CD90_0x20cd90");
#endif

    switch (ctx->pc) {
        case 0x20cd90u: goto label_20cd90;
        case 0x20cd94u: goto label_20cd94;
        case 0x20cd98u: goto label_20cd98;
        case 0x20cd9cu: goto label_20cd9c;
        case 0x20cda0u: goto label_20cda0;
        case 0x20cda4u: goto label_20cda4;
        case 0x20cda8u: goto label_20cda8;
        case 0x20cdacu: goto label_20cdac;
        case 0x20cdb0u: goto label_20cdb0;
        case 0x20cdb4u: goto label_20cdb4;
        case 0x20cdb8u: goto label_20cdb8;
        case 0x20cdbcu: goto label_20cdbc;
        case 0x20cdc0u: goto label_20cdc0;
        case 0x20cdc4u: goto label_20cdc4;
        case 0x20cdc8u: goto label_20cdc8;
        case 0x20cdccu: goto label_20cdcc;
        case 0x20cdd0u: goto label_20cdd0;
        case 0x20cdd4u: goto label_20cdd4;
        case 0x20cdd8u: goto label_20cdd8;
        case 0x20cddcu: goto label_20cddc;
        case 0x20cde0u: goto label_20cde0;
        case 0x20cde4u: goto label_20cde4;
        case 0x20cde8u: goto label_20cde8;
        case 0x20cdecu: goto label_20cdec;
        case 0x20cdf0u: goto label_20cdf0;
        case 0x20cdf4u: goto label_20cdf4;
        case 0x20cdf8u: goto label_20cdf8;
        case 0x20cdfcu: goto label_20cdfc;
        case 0x20ce00u: goto label_20ce00;
        case 0x20ce04u: goto label_20ce04;
        case 0x20ce08u: goto label_20ce08;
        case 0x20ce0cu: goto label_20ce0c;
        case 0x20ce10u: goto label_20ce10;
        case 0x20ce14u: goto label_20ce14;
        case 0x20ce18u: goto label_20ce18;
        case 0x20ce1cu: goto label_20ce1c;
        case 0x20ce20u: goto label_20ce20;
        case 0x20ce24u: goto label_20ce24;
        case 0x20ce28u: goto label_20ce28;
        case 0x20ce2cu: goto label_20ce2c;
        case 0x20ce30u: goto label_20ce30;
        case 0x20ce34u: goto label_20ce34;
        default: break;
    }

    ctx->pc = 0x20cd90u;

label_20cd90:
    // 0x20cd90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20cd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20cd94:
    // 0x20cd94: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x20cd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_20cd98:
    // 0x20cd98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20cd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20cd9c:
    // 0x20cd9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20cd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20cda0:
    // 0x20cda0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x20cda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_20cda4:
    // 0x20cda4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x20cda4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20cda8:
    // 0x20cda8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20cdac:
    // 0x20cdac: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x20cdacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_20cdb0:
    // 0x20cdb0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x20cdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_20cdb4:
    // 0x20cdb4: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x20cdb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20cdb8:
    // 0x20cdb8: 0x8e1101b0  lw          $s1, 0x1B0($s0)
    ctx->pc = 0x20cdb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_20cdbc:
    // 0x20cdbc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20cdc0:
    // 0x20cdc0: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x20cdc0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_20cdc4:
    // 0x20cdc4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20cdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_20cdc8:
    // 0x20cdc8: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x20cdc8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_20cdcc:
    // 0x20cdcc: 0x18a102b  sltu        $v0, $t4, $t2
    ctx->pc = 0x20cdccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_20cdd0:
    // 0x20cdd0: 0x8e0301c4  lw          $v1, 0x1C4($s0)
    ctx->pc = 0x20cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_20cdd4:
    // 0x20cdd4: 0x182500b  movn        $t2, $t4, $v0
    ctx->pc = 0x20cdd4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12));
label_20cdd8:
    // 0x20cdd8: 0x8c6b0004  lw          $t3, 0x4($v1)
    ctx->pc = 0x20cdd8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_20cddc:
    // 0x20cddc: 0x160f809  jalr        $t3
label_20cde0:
    if (ctx->pc == 0x20CDE0u) {
        ctx->pc = 0x20CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDDCu;
        // 0x20cde0: 0x8e28000c  lw          $t0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CDE4u;
        goto label_20cde4;
    }
    ctx->pc = 0x20CDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 11);
        SET_GPR_U32(ctx, 31, 0x20CDE4u);
        ctx->pc = 0x20CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDDCu;
        // 0x20cde0: 0x8e28000c  lw          $t0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CDDCu, 0x20CDE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CDE4u;
label_20cde4:
    // 0x20cde4: 0x8e0201cc  lw          $v0, 0x1CC($s0)
    ctx->pc = 0x20cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_20cde8:
    // 0x20cde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cdec:
    // 0x20cdec: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x20cdecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20cdf0:
    // 0x20cdf0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20cdf4:
    // 0x20cdf4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x20cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20cdf8:
    // 0x20cdf8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x20cdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20cdfc:
    // 0x20cdfc: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x20cdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20ce00:
    // 0x20ce00: 0x60f809  jalr        $v1
label_20ce04:
    if (ctx->pc == 0x20CE04u) {
        ctx->pc = 0x20CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE00u;
        // 0x20ce04: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE08u;
        goto label_20ce08;
    }
    ctx->pc = 0x20CE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20CE08u);
        ctx->pc = 0x20CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE00u;
        // 0x20ce04: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CE00u, 0x20CE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CE08u;
label_20ce08:
    // 0x20ce08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20ce0c:
    // 0x20ce0c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20ce10:
    // 0x20ce10: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x20ce10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20ce14:
    // 0x20ce14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ce18:
    // 0x20ce18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x20ce18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ce1c:
    // 0x20ce1c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x20ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_20ce20:
    // 0x20ce20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20ce20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ce24:
    // 0x20ce24: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x20ce24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ce28:
    // 0x20ce28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20ce28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20ce2c:
    // 0x20ce2c: 0x3e00008  jr          $ra
label_20ce30:
    if (ctx->pc == 0x20CE30u) {
        ctx->pc = 0x20CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE2Cu;
        // 0x20ce30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE34u;
        goto label_20ce34;
    }
    ctx->pc = 0x20CE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE2Cu;
        // 0x20ce30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CE34u;
label_20ce34:
    // 0x20ce34: 0x0  nop
    ctx->pc = 0x20ce34u;
    // NOP
    ctx->pc = 0x20ce38u;
}
