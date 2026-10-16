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

// Function: sub_0018FAE8
// Address: 0x18fae8 - 0x18fc10
void sub_0018FAE8_0x18fae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FAE8_0x18fae8");
#endif

    switch (ctx->pc) {
        case 0x18fb20u: goto label_18fb20;
        case 0x18fb40u: goto label_18fb40;
        case 0x18fbbcu: goto label_18fbbc;
        case 0x18fbf4u: goto label_18fbf4;
        default: break;
    }

    ctx->pc = 0x18fae8u;

    // 0x18fae8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18fae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18faec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18faecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18faf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18faf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18faf4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18faf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18faf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18fafc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x18fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x18fb00: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18FB00u;
    {
        const bool branch_taken_0x18fb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB00u;
        // 0x18fb04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb00) {
            ctx->pc = 0x18FB48u;
            goto label_18fb48;
        }
    }
    ctx->pc = 0x18FB08u;
    // 0x18fb08: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x18fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x18fb0c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18fb10: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18FB10u;
    {
        const bool branch_taken_0x18fb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18fb10) {
            ctx->pc = 0x18FB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FB10u;
            // 0x18fb14: 0x8c8200d4  lw          $v0, 0xD4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FB4Cu;
            goto label_18fb4c;
        }
    }
    ctx->pc = 0x18FB18u;
    // 0x18fb18: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x18FB18u;
    SET_GPR_U32(ctx, 31, 0x18FB20u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x18FB18u, 0x18FB20u)) {
        return;
    }
    ctx->pc = 0x18FB20u;
label_18fb20:
    // 0x18fb20: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x18fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x18fb24: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x18FB24u;
    {
        const bool branch_taken_0x18fb24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB24u;
        // 0x18fb28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb24) {
            ctx->pc = 0x18FBFCu;
            goto label_18fbfc;
        }
    }
    ctx->pc = 0x18FB2Cu;
    // 0x18fb2c: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x18fb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x18fb30: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18fb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fb34: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x18fb34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x18fb38: 0xc04deb2  jal         func_137AC8
    ctx->pc = 0x18FB38u;
    SET_GPR_U32(ctx, 31, 0x18FB40u);
    ctx->pc = 0x18FB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB38u;
    // 0x18fb3c: 0xae050068  sw          $a1, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137AC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137AC8u, 0x18FB38u, 0x18FB40u)) {
        return;
    }
    ctx->pc = 0x18FB40u;
label_18fb40:
    // 0x18fb40: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x18FB40u;
    {
        const bool branch_taken_0x18fb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB40u;
        // 0x18fb44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb40) {
            ctx->pc = 0x18FBFCu;
            goto label_18fbfc;
        }
    }
    ctx->pc = 0x18FB48u;
label_18fb48:
    // 0x18fb48: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x18fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_18fb4c:
    // 0x18fb4c: 0x5602000b  bnel        $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18FB4Cu;
    {
        const bool branch_taken_0x18fb4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18fb4c) {
            ctx->pc = 0x18FB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FB4Cu;
            // 0x18fb50: 0x8c8200d8  lw          $v0, 0xD8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FB7Cu;
            goto label_18fb7c;
        }
    }
    ctx->pc = 0x18FB54u;
    // 0x18fb54: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x18fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x18fb58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FB58u;
    {
        const bool branch_taken_0x18fb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB58u;
        // 0x18fb5c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb58) {
            ctx->pc = 0x18FB6Cu;
            goto label_18fb6c;
        }
    }
    ctx->pc = 0x18FB60u;
    // 0x18fb60: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x18fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x18fb64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18FB64u;
    {
        const bool branch_taken_0x18fb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB64u;
        // 0x18fb68: 0x8c454700  lw          $a1, 0x4700($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb64) {
            ctx->pc = 0x18FB98u;
            goto label_18fb98;
        }
    }
    ctx->pc = 0x18FB6Cu;
label_18fb6c:
    // 0x18fb6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x18fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x18fb70: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x18fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x18fb74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18FB74u;
    {
        const bool branch_taken_0x18fb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB74u;
        // 0x18fb78: 0x8c4546f8  lw          $a1, 0x46F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb74) {
            ctx->pc = 0x18FBD0u;
            goto label_18fbd0;
        }
    }
    ctx->pc = 0x18FB7Cu;
label_18fb7c:
    // 0x18fb7c: 0x1602001f  bne         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x18FB7Cu;
    {
        const bool branch_taken_0x18fb7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x18FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB7Cu;
        // 0x18fb80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb7c) {
            ctx->pc = 0x18FBFCu;
            goto label_18fbfc;
        }
    }
    ctx->pc = 0x18FB84u;
    // 0x18fb84: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x18fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x18fb88: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18FB88u;
    {
        const bool branch_taken_0x18fb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB88u;
        // 0x18fb8c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb88) {
            ctx->pc = 0x18FBC4u;
            goto label_18fbc4;
        }
    }
    ctx->pc = 0x18FB90u;
    // 0x18fb90: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x18fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x18fb94: 0x8c454728  lw          $a1, 0x4728($v0)
    ctx->pc = 0x18fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
label_18fb98:
    // 0x18fb98: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x18fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
    // 0x18fb9c: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18FB9Cu;
    {
        const bool branch_taken_0x18fb9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x18FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB9Cu;
        // 0x18fba0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb9c) {
            ctx->pc = 0x18FBF8u;
            goto label_18fbf8;
        }
    }
    ctx->pc = 0x18FBA4u;
    // 0x18fba4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18fba8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18FBA8u;
    {
        const bool branch_taken_0x18fba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBA8u;
        // 0x18fbac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fba8) {
            ctx->pc = 0x18FBF8u;
            goto label_18fbf8;
        }
    }
    ctx->pc = 0x18FBB0u;
    // 0x18fbb0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x18fbb4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x18FBB4u;
    SET_GPR_U32(ctx, 31, 0x18FBBCu);
    ctx->pc = 0x18FBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FBB4u;
    // 0x18fbb8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x18FBB4u, 0x18FBBCu)) {
        return;
    }
    ctx->pc = 0x18FBBCu;
label_18fbbc:
    // 0x18fbbc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18FBBCu;
    {
        const bool branch_taken_0x18fbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBBCu;
        // 0x18fbc0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fbbc) {
            ctx->pc = 0x18FBF8u;
            goto label_18fbf8;
        }
    }
    ctx->pc = 0x18FBC4u;
label_18fbc4:
    // 0x18fbc4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x18fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x18fbc8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x18fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x18fbcc: 0x8c454720  lw          $a1, 0x4720($v0)
    ctx->pc = 0x18fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4720u));
label_18fbd0:
    // 0x18fbd0: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x18fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
    // 0x18fbd4: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FBD4u;
    {
        const bool branch_taken_0x18fbd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x18FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBD4u;
        // 0x18fbd8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fbd4) {
            ctx->pc = 0x18FBF8u;
            goto label_18fbf8;
        }
    }
    ctx->pc = 0x18FBDCu;
    // 0x18fbdc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18fbe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FBE0u;
    {
        const bool branch_taken_0x18fbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBE0u;
        // 0x18fbe4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fbe0) {
            ctx->pc = 0x18FBF8u;
            goto label_18fbf8;
        }
    }
    ctx->pc = 0x18FBE8u;
    // 0x18fbe8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x18fbec: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x18FBECu;
    SET_GPR_U32(ctx, 31, 0x18FBF4u);
    ctx->pc = 0x18FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FBECu;
    // 0x18fbf0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x18FBECu, 0x18FBF4u)) {
        return;
    }
    ctx->pc = 0x18FBF4u;
label_18fbf4:
    // 0x18fbf4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18fbf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18fbf8:
    // 0x18fbf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18fbf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18fbfc:
    // 0x18fbfc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18fbfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18fc00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18fc00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fc04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18fc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fc08: 0x3e00008  jr          $ra
    ctx->pc = 0x18FC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC08u;
        // 0x18fc0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FC10u;
}
