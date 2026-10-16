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

// Function: sub_00198C60
// Address: 0x198c60 - 0x198db8
void sub_00198C60_0x198c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198C60_0x198c60");
#endif

    ctx->pc = 0x198c60u;

    // 0x198c60: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x198c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x198c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198c68: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x198C68u;
    {
        const bool branch_taken_0x198c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x198C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C68u;
        // 0x198c6c: 0x8c870018  lw          $a3, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c68) {
            ctx->pc = 0x198CF0u;
            goto label_198cf0;
        }
    }
    ctx->pc = 0x198C70u;
    // 0x198c70: 0x10e0004a  beqz        $a3, . + 4 + (0x4A << 2)
    ctx->pc = 0x198C70u;
    {
        const bool branch_taken_0x198c70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C70u;
        // 0x198c74: 0x24880018  addiu       $t0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c70) {
            ctx->pc = 0x198D9Cu;
            goto label_198d9c;
        }
    }
    ctx->pc = 0x198C78u;
    // 0x198c78: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x198c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x198c7c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x198C7Cu;
    {
        const bool branch_taken_0x198c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198c7c) {
            ctx->pc = 0x198C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198C7Cu;
            // 0x198c80: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198C90u;
            goto label_198c90;
        }
    }
    ctx->pc = 0x198C84u;
    // 0x198c84: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x198c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x198c88: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x198c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x198c8c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x198c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_198c90:
    // 0x198c90: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x198C90u;
    {
        const bool branch_taken_0x198c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198c90) {
            ctx->pc = 0x198C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198C90u;
            // 0x198c94: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198CA4u;
            goto label_198ca4;
        }
    }
    ctx->pc = 0x198C98u;
    // 0x198c98: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x198c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x198c9c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x198c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x198ca0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x198ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_198ca4:
    // 0x198ca4: 0x54470004  bnel        $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x198CA4u;
    {
        const bool branch_taken_0x198ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x198ca4) {
            ctx->pc = 0x198CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198CA4u;
            // 0x198ca8: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198CB8u;
            goto label_198cb8;
        }
    }
    ctx->pc = 0x198CACu;
    // 0x198cac: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x198cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x198cb0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x198cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x198cb4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x198cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_198cb8:
    // 0x198cb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x198cbc: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x198cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x198cc0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x198cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x198cc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198CC4u;
    {
        const bool branch_taken_0x198cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CC4u;
        // 0x198cc8: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cc4) {
            ctx->pc = 0x198CD4u;
            goto label_198cd4;
        }
    }
    ctx->pc = 0x198CCCu;
    // 0x198ccc: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x198cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x198cd0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x198cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_198cd4:
    // 0x198cd4: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x198cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x198cd8: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x198cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x198cdc: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x198cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x198ce0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x198ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x198ce4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198ce8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x198CE8u;
    {
        const bool branch_taken_0x198ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CE8u;
        // 0x198cec: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ce8) {
            ctx->pc = 0x198D90u;
            goto label_198d90;
        }
    }
    ctx->pc = 0x198CF0u;
label_198cf0:
    // 0x198cf0: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x198CF0u;
    {
        const bool branch_taken_0x198cf0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x198CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CF0u;
        // 0x198cf4: 0x24880018  addiu       $t0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cf0) {
            ctx->pc = 0x198D9Cu;
            goto label_198d9c;
        }
    }
    ctx->pc = 0x198CF8u;
    // 0x198cf8: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x198cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x198cfc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x198CFCu;
    {
        const bool branch_taken_0x198cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198cfc) {
            ctx->pc = 0x198D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198CFCu;
            // 0x198d00: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198D10u;
            goto label_198d10;
        }
    }
    ctx->pc = 0x198D04u;
    // 0x198d04: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x198d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x198d08: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x198d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x198d0c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_198d10:
    // 0x198d10: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x198D10u;
    {
        const bool branch_taken_0x198d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198d10) {
            ctx->pc = 0x198D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198D10u;
            // 0x198d14: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198D24u;
            goto label_198d24;
        }
    }
    ctx->pc = 0x198D18u;
    // 0x198d18: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x198d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x198d1c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x198d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x198d20: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x198d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_198d24:
    // 0x198d24: 0x54470004  bnel        $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x198D24u;
    {
        const bool branch_taken_0x198d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x198d24) {
            ctx->pc = 0x198D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198D24u;
            // 0x198d28: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198D38u;
            goto label_198d38;
        }
    }
    ctx->pc = 0x198D2Cu;
    // 0x198d2c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x198d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x198d30: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x198d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x198d34: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x198d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_198d38:
    // 0x198d38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x198d3c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x198d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x198d40: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x198d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x198d44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x198D44u;
    {
        const bool branch_taken_0x198d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D44u;
        // 0x198d48: 0x24890020  addiu       $t1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d44) {
            ctx->pc = 0x198D78u;
            goto label_198d78;
        }
    }
    ctx->pc = 0x198D4Cu;
    // 0x198d4c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x198d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x198d50: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x198d50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x198d54: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x198d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x198d58: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x198d58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x198d5c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x198d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x198d60: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x198d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x198d64: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x198D64u;
    {
        const bool branch_taken_0x198d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198d64) {
            ctx->pc = 0x198D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198D64u;
            // 0x198d68: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198D6Cu;
            goto label_198d6c;
        }
    }
    ctx->pc = 0x198D6Cu;
label_198d6c:
    // 0x198d6c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x198d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x198d70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x198D70u;
    {
        const bool branch_taken_0x198d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D70u;
        // 0x198d74: 0xac470008  sw          $a3, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d70) {
            ctx->pc = 0x198D84u;
            goto label_198d84;
        }
    }
    ctx->pc = 0x198D78u;
label_198d78:
    // 0x198d78: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x198d78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x198d7c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x198d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x198d80: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x198d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
label_198d84:
    // 0x198d84: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x198d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x198d88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198d8c: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x198d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
label_198d90:
    // 0x198d90: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x198d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x198d94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x198d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x198d98: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x198d98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
label_198d9c:
    // 0x198d9c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x198d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198da0: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x198da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x198da4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x198da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x198da8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x198da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x198dac: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x198dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x198db0: 0x3e00008  jr          $ra
    ctx->pc = 0x198DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DB0u;
        // 0x198db4: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198DB8u;
}
