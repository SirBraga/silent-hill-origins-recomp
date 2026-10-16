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

// Function: sub_0024CD58
// Address: 0x24cd58 - 0x24ce00
void sub_0024CD58_0x24cd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CD58_0x24cd58");
#endif

    switch (ctx->pc) {
        case 0x24cd58u: goto label_24cd58;
        case 0x24cd5cu: goto label_24cd5c;
        case 0x24cd60u: goto label_24cd60;
        case 0x24cd64u: goto label_24cd64;
        case 0x24cd68u: goto label_24cd68;
        case 0x24cd6cu: goto label_24cd6c;
        case 0x24cd70u: goto label_24cd70;
        case 0x24cd74u: goto label_24cd74;
        case 0x24cd78u: goto label_24cd78;
        case 0x24cd7cu: goto label_24cd7c;
        case 0x24cd80u: goto label_24cd80;
        case 0x24cd84u: goto label_24cd84;
        case 0x24cd88u: goto label_24cd88;
        case 0x24cd8cu: goto label_24cd8c;
        case 0x24cd90u: goto label_24cd90;
        case 0x24cd94u: goto label_24cd94;
        case 0x24cd98u: goto label_24cd98;
        case 0x24cd9cu: goto label_24cd9c;
        case 0x24cda0u: goto label_24cda0;
        case 0x24cda4u: goto label_24cda4;
        case 0x24cda8u: goto label_24cda8;
        case 0x24cdacu: goto label_24cdac;
        case 0x24cdb0u: goto label_24cdb0;
        case 0x24cdb4u: goto label_24cdb4;
        case 0x24cdb8u: goto label_24cdb8;
        case 0x24cdbcu: goto label_24cdbc;
        case 0x24cdc0u: goto label_24cdc0;
        case 0x24cdc4u: goto label_24cdc4;
        case 0x24cdc8u: goto label_24cdc8;
        case 0x24cdccu: goto label_24cdcc;
        case 0x24cdd0u: goto label_24cdd0;
        case 0x24cdd4u: goto label_24cdd4;
        case 0x24cdd8u: goto label_24cdd8;
        case 0x24cddcu: goto label_24cddc;
        case 0x24cde0u: goto label_24cde0;
        case 0x24cde4u: goto label_24cde4;
        case 0x24cde8u: goto label_24cde8;
        case 0x24cdecu: goto label_24cdec;
        case 0x24cdf0u: goto label_24cdf0;
        case 0x24cdf4u: goto label_24cdf4;
        case 0x24cdf8u: goto label_24cdf8;
        case 0x24cdfcu: goto label_24cdfc;
        default: break;
    }

    ctx->pc = 0x24cd58u;

label_24cd58:
    // 0x24cd58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24cd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24cd5c:
    // 0x24cd5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_24cd60:
    // 0x24cd60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24cd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24cd64:
    // 0x24cd64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24cd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24cd68:
    // 0x24cd68: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24cd6c:
    // 0x24cd6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_24cd70:
    if (ctx->pc == 0x24CD70u) {
        ctx->pc = 0x24CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD6Cu;
        // 0x24cd70: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD74u;
        goto label_24cd74;
    }
    ctx->pc = 0x24CD6Cu;
    {
        const bool branch_taken_0x24cd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd6c) {
            ctx->pc = 0x24CD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CD6Cu;
            // 0x24cd70: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CD80u;
            goto label_24cd80;
        }
    }
    ctx->pc = 0x24CD74u;
label_24cd74:
    // 0x24cd74: 0x40f809  jalr        $v0
label_24cd78:
    if (ctx->pc == 0x24CD78u) {
        ctx->pc = 0x24CD7Cu;
        goto label_24cd7c;
    }
    ctx->pc = 0x24CD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24CD7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CD74u, 0x24CD7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CD7Cu;
label_24cd7c:
    // 0x24cd7c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24cd80:
    // 0x24cd80: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_24cd84:
    if (ctx->pc == 0x24CD84u) {
        ctx->pc = 0x24CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD80u;
        // 0x24cd84: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD88u;
        goto label_24cd88;
    }
    ctx->pc = 0x24CD80u;
    {
        const bool branch_taken_0x24cd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cd80) {
            ctx->pc = 0x24CD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CD80u;
            // 0x24cd84: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CD88u;
            goto label_24cd88;
        }
    }
    ctx->pc = 0x24CD88u;
label_24cd88:
    // 0x24cd88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24cd8c:
    // 0x24cd8c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_24cd90:
    if (ctx->pc == 0x24CD90u) {
        ctx->pc = 0x24CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD8Cu;
        // 0x24cd90: 0x3c060073  lui         $a2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD94u;
        goto label_24cd94;
    }
    ctx->pc = 0x24CD8Cu;
    {
        const bool branch_taken_0x24cd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD8Cu;
        // 0x24cd90: 0x3c060073  lui         $a2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd8c) {
            ctx->pc = 0x24CDD8u;
            goto label_24cdd8;
        }
    }
    ctx->pc = 0x24CD94u;
label_24cd94:
    // 0x24cd94: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24cd98:
    // 0x24cd98: 0x24c60fc8  addiu       $a2, $a2, 0xFC8
    ctx->pc = 0x24cd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4040));
label_24cd9c:
    // 0x24cd9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24cd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24cda0:
    // 0x24cda0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24cda4:
    // 0x24cda4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24cda4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24cda8:
    // 0x24cda8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24cdac:
    // 0x24cdac: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24cdacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_24cdb0:
    // 0x24cdb0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_24cdb4:
    // 0x24cdb4: 0x8c634198  lw          $v1, 0x4198($v1)
    ctx->pc = 0x24cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16792)));
label_24cdb8:
    // 0x24cdb8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x24cdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24cdbc:
    // 0x24cdbc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x24cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_24cdc0:
    // 0x24cdc0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_24cdc4:
    // 0x24cdc4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x24cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_24cdc8:
    // 0x24cdc8: 0xc093b82  jal         func_24EE08
label_24cdcc:
    if (ctx->pc == 0x24CDCCu) {
        ctx->pc = 0x24CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDC8u;
        // 0x24cdcc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CDD0u;
        goto label_24cdd0;
    }
    ctx->pc = 0x24CDC8u;
    SET_GPR_U32(ctx, 31, 0x24CDD0u);
    ctx->pc = 0x24CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CDC8u;
    // 0x24cdcc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EE08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EE08u, 0x24CDC8u, 0x24CDD0u)) {
        return;
    }
    ctx->pc = 0x24CDD0u;
label_24cdd0:
    // 0x24cdd0: 0x10000006  b           . + 4 + (0x6 << 2)
label_24cdd4:
    if (ctx->pc == 0x24CDD4u) {
        ctx->pc = 0x24CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDD0u;
        // 0x24cdd4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CDD8u;
        goto label_24cdd8;
    }
    ctx->pc = 0x24CDD0u;
    {
        const bool branch_taken_0x24cdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDD0u;
        // 0x24cdd4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cdd0) {
            ctx->pc = 0x24CDECu;
            goto label_24cdec;
        }
    }
    ctx->pc = 0x24CDD8u;
label_24cdd8:
    // 0x24cdd8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24cddc:
    // 0x24cddc: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x24cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_24cde0:
    // 0x24cde0: 0x40f809  jalr        $v0
label_24cde4:
    if (ctx->pc == 0x24CDE4u) {
        ctx->pc = 0x24CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDE0u;
        // 0x24cde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CDE8u;
        goto label_24cde8;
    }
    ctx->pc = 0x24CDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24CDE8u);
        ctx->pc = 0x24CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDE0u;
        // 0x24cde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CDE0u, 0x24CDE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CDE8u;
label_24cde8:
    // 0x24cde8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24cde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24cdec:
    // 0x24cdec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24cdf0:
    // 0x24cdf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24cdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24cdf4:
    // 0x24cdf4: 0x3e00008  jr          $ra
label_24cdf8:
    if (ctx->pc == 0x24CDF8u) {
        ctx->pc = 0x24CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDF4u;
        // 0x24cdf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CDFCu;
        goto label_24cdfc;
    }
    ctx->pc = 0x24CDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDF4u;
        // 0x24cdf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CDFCu;
label_24cdfc:
    // 0x24cdfc: 0x0  nop
    ctx->pc = 0x24cdfcu;
    // NOP
    ctx->pc = 0x24ce00u;
}
