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

// Function: sub_0029CCC8
// Address: 0x29ccc8 - 0x29ce00
void sub_0029CCC8_0x29ccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CCC8_0x29ccc8");
#endif

    switch (ctx->pc) {
        case 0x29cd08u: goto label_29cd08;
        case 0x29cd54u: goto label_29cd54;
        case 0x29cd88u: goto label_29cd88;
        case 0x29cdccu: goto label_29cdcc;
        default: break;
    }

    ctx->pc = 0x29ccc8u;

    // 0x29ccc8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29ccc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29cccc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29ccccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29ccd0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29ccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29ccd4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29ccd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ccd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29ccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29ccdc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29ccdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cce0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29cce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29cce4: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x29cce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cce8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29cce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29ccec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29ccecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ccf0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29ccf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29ccf4: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CCF4u;
    {
        const bool branch_taken_0x29ccf4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCF4u;
        // 0x29ccf8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccf4) {
            ctx->pc = 0x29CD04u;
            goto label_29cd04;
        }
    }
    ctx->pc = 0x29CCFCu;
    // 0x29ccfc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x29CCFCu;
    {
        const bool branch_taken_0x29ccfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCFCu;
        // 0x29cd00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccfc) {
            ctx->pc = 0x29CDD8u;
            goto label_29cdd8;
        }
    }
    ctx->pc = 0x29CD04u;
label_29cd04:
    // 0x29cd04: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x29cd04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29cd08:
    // 0x29cd08: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x29cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x29cd0c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x29cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x29cd10: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x29cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29cd14: 0x18600028  blez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x29CD14u;
    {
        const bool branch_taken_0x29cd14 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x29cd14) {
            ctx->pc = 0x29CDB8u;
            goto label_29cdb8;
        }
    }
    ctx->pc = 0x29CD1Cu;
    // 0x29cd1c: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x29cd1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29cd20: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29cd20u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x29cd24: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x29cd24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x29cd28: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29CD28u;
    {
        const bool branch_taken_0x29cd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD28u;
        // 0x29cd2c: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd28) {
            ctx->pc = 0x29CD34u;
            goto label_29cd34;
        }
    }
    ctx->pc = 0x29CD30u;
    // 0x29cd30: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x29cd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
label_29cd34:
    // 0x29cd34: 0x28620015  slti        $v0, $v1, 0x15
    ctx->pc = 0x29cd34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x29cd38: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29CD38u;
    {
        const bool branch_taken_0x29cd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD38u;
        // 0x29cd3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd38) {
            ctx->pc = 0x29CD64u;
            goto label_29cd64;
        }
    }
    ctx->pc = 0x29CD40u;
    // 0x29cd40: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x29cd40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29cd44: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29cd44u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x29cd48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29cd48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd4c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x29CD4Cu;
    SET_GPR_U32(ctx, 31, 0x29CD54u);
    ctx->pc = 0x29CD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD4Cu;
    // 0x29cd50: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x29CD4Cu, 0x29CD54u)) {
        return;
    }
    ctx->pc = 0x29CD54u;
label_29cd54:
    // 0x29cd54: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x29cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x29cd58: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29cd5c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29CD5Cu;
    {
        const bool branch_taken_0x29cd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD5Cu;
        // 0x29cd60: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd5c) {
            ctx->pc = 0x29CDB4u;
            goto label_29cdb4;
        }
    }
    ctx->pc = 0x29CD64u;
label_29cd64:
    // 0x29cd64: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CD64u;
    {
        const bool branch_taken_0x29cd64 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x29CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD64u;
        // 0x29cd68: 0x6465ffff  daddiu      $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd64) {
            ctx->pc = 0x29CD74u;
            goto label_29cd74;
        }
    }
    ctx->pc = 0x29CD6Cu;
    // 0x29cd6c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29CD6Cu;
    {
        const bool branch_taken_0x29cd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD6Cu;
        // 0x29cd70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd6c) {
            ctx->pc = 0x29CDB4u;
            goto label_29cdb4;
        }
    }
    ctx->pc = 0x29CD74u;
label_29cd74:
    // 0x29cd74: 0x4a2000d  bltzl       $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x29CD74u;
    {
        const bool branch_taken_0x29cd74 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x29cd74) {
            ctx->pc = 0x29CD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CD74u;
            // 0x29cd78: 0xae640014  sw          $a0, 0x14($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CDACu;
            goto label_29cdac;
        }
    }
    ctx->pc = 0x29CD7Cu;
    // 0x29cd7c: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x29cd7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29cd80: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29cd80u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x29cd84: 0x0  nop
    ctx->pc = 0x29cd84u;
    // NOP
label_29cd88:
    // 0x29cd88: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x29cd88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29cd8c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x29cd8cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x29cd90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29cd90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29cd94: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x29cd94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x29cd98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29cd9c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29CD9Cu;
    {
        const bool branch_taken_0x29cd9c = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x29cd9c) {
            ctx->pc = 0x29CD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cd88;
        }
    }
    ctx->pc = 0x29CDA4u;
    // 0x29cda4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29CDA4u;
    {
        const bool branch_taken_0x29cda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDA4u;
        // 0x29cda8: 0xae640014  sw          $a0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cda4) {
            ctx->pc = 0x29CDB4u;
            goto label_29cdb4;
        }
    }
    ctx->pc = 0x29CDACu;
label_29cdac:
    // 0x29cdac: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x29cdacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29cdb0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29cdb0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_29cdb4:
    // 0x29cdb4: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x29cdb4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_29cdb8:
    // 0x29cdb8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x29CDB8u;
    {
        const bool branch_taken_0x29cdb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDB8u;
        // 0x29cdbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cdb8) {
            ctx->pc = 0x29CDD4u;
            goto label_29cdd4;
        }
    }
    ctx->pc = 0x29CDC0u;
    // 0x29cdc0: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x29cdc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29cdc4: 0xc0a7202  jal         func_29C808
    ctx->pc = 0x29CDC4u;
    SET_GPR_U32(ctx, 31, 0x29CDCCu);
    ctx->pc = 0x29CDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CDC4u;
    // 0x29cdc8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C808u, 0x29CDC4u, 0x29CDCCu)) {
        return;
    }
    ctx->pc = 0x29CDCCu;
label_29cdcc:
    // 0x29cdcc: 0x5455ffce  bnel        $v0, $s5, . + 4 + (-0x32 << 2)
    ctx->pc = 0x29CDCCu;
    {
        const bool branch_taken_0x29cdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x29cdcc) {
            ctx->pc = 0x29CDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CDCCu;
            // 0x29cdd0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cd08;
        }
    }
    ctx->pc = 0x29CDD4u;
label_29cdd4:
    // 0x29cdd4: 0x2921023  subu        $v0, $s4, $s2
    ctx->pc = 0x29cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_29cdd8:
    // 0x29cdd8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29cdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29cddc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29cddcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29cde0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29cde0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29cde4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29cde4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29cde8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29cde8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cdec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29cdecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cdf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29cdf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x29CDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDF4u;
        // 0x29cdf8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CDFCu;
    // 0x29cdfc: 0x0  nop
    ctx->pc = 0x29cdfcu;
    // NOP
    ctx->pc = 0x29ce00u;
}
