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

// Function: sub_001EAC28
// Address: 0x1eac28 - 0x1eae50
void sub_001EAC28_0x1eac28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAC28_0x1eac28");
#endif

    switch (ctx->pc) {
        case 0x1eac28u: goto label_1eac28;
        case 0x1eac2cu: goto label_1eac2c;
        case 0x1eac30u: goto label_1eac30;
        case 0x1eac34u: goto label_1eac34;
        case 0x1eac38u: goto label_1eac38;
        case 0x1eac3cu: goto label_1eac3c;
        case 0x1eac40u: goto label_1eac40;
        case 0x1eac44u: goto label_1eac44;
        case 0x1eac48u: goto label_1eac48;
        case 0x1eac4cu: goto label_1eac4c;
        case 0x1eac50u: goto label_1eac50;
        case 0x1eac54u: goto label_1eac54;
        case 0x1eac58u: goto label_1eac58;
        case 0x1eac5cu: goto label_1eac5c;
        case 0x1eac60u: goto label_1eac60;
        case 0x1eac64u: goto label_1eac64;
        case 0x1eac68u: goto label_1eac68;
        case 0x1eac6cu: goto label_1eac6c;
        case 0x1eac70u: goto label_1eac70;
        case 0x1eac74u: goto label_1eac74;
        case 0x1eac78u: goto label_1eac78;
        case 0x1eac7cu: goto label_1eac7c;
        case 0x1eac80u: goto label_1eac80;
        case 0x1eac84u: goto label_1eac84;
        case 0x1eac88u: goto label_1eac88;
        case 0x1eac8cu: goto label_1eac8c;
        case 0x1eac90u: goto label_1eac90;
        case 0x1eac94u: goto label_1eac94;
        case 0x1eac98u: goto label_1eac98;
        case 0x1eac9cu: goto label_1eac9c;
        case 0x1eaca0u: goto label_1eaca0;
        case 0x1eaca4u: goto label_1eaca4;
        case 0x1eaca8u: goto label_1eaca8;
        case 0x1eacacu: goto label_1eacac;
        case 0x1eacb0u: goto label_1eacb0;
        case 0x1eacb4u: goto label_1eacb4;
        case 0x1eacb8u: goto label_1eacb8;
        case 0x1eacbcu: goto label_1eacbc;
        case 0x1eacc0u: goto label_1eacc0;
        case 0x1eacc4u: goto label_1eacc4;
        case 0x1eacc8u: goto label_1eacc8;
        case 0x1eacccu: goto label_1eaccc;
        case 0x1eacd0u: goto label_1eacd0;
        case 0x1eacd4u: goto label_1eacd4;
        case 0x1eacd8u: goto label_1eacd8;
        case 0x1eacdcu: goto label_1eacdc;
        case 0x1eace0u: goto label_1eace0;
        case 0x1eace4u: goto label_1eace4;
        case 0x1eace8u: goto label_1eace8;
        case 0x1eacecu: goto label_1eacec;
        case 0x1eacf0u: goto label_1eacf0;
        case 0x1eacf4u: goto label_1eacf4;
        case 0x1eacf8u: goto label_1eacf8;
        case 0x1eacfcu: goto label_1eacfc;
        case 0x1ead00u: goto label_1ead00;
        case 0x1ead04u: goto label_1ead04;
        case 0x1ead08u: goto label_1ead08;
        case 0x1ead0cu: goto label_1ead0c;
        case 0x1ead10u: goto label_1ead10;
        case 0x1ead14u: goto label_1ead14;
        case 0x1ead18u: goto label_1ead18;
        case 0x1ead1cu: goto label_1ead1c;
        case 0x1ead20u: goto label_1ead20;
        case 0x1ead24u: goto label_1ead24;
        case 0x1ead28u: goto label_1ead28;
        case 0x1ead2cu: goto label_1ead2c;
        case 0x1ead30u: goto label_1ead30;
        case 0x1ead34u: goto label_1ead34;
        case 0x1ead38u: goto label_1ead38;
        case 0x1ead3cu: goto label_1ead3c;
        case 0x1ead40u: goto label_1ead40;
        case 0x1ead44u: goto label_1ead44;
        case 0x1ead48u: goto label_1ead48;
        case 0x1ead4cu: goto label_1ead4c;
        case 0x1ead50u: goto label_1ead50;
        case 0x1ead54u: goto label_1ead54;
        case 0x1ead58u: goto label_1ead58;
        case 0x1ead5cu: goto label_1ead5c;
        case 0x1ead60u: goto label_1ead60;
        case 0x1ead64u: goto label_1ead64;
        case 0x1ead68u: goto label_1ead68;
        case 0x1ead6cu: goto label_1ead6c;
        case 0x1ead70u: goto label_1ead70;
        case 0x1ead74u: goto label_1ead74;
        case 0x1ead78u: goto label_1ead78;
        case 0x1ead7cu: goto label_1ead7c;
        case 0x1ead80u: goto label_1ead80;
        case 0x1ead84u: goto label_1ead84;
        case 0x1ead88u: goto label_1ead88;
        case 0x1ead8cu: goto label_1ead8c;
        case 0x1ead90u: goto label_1ead90;
        case 0x1ead94u: goto label_1ead94;
        case 0x1ead98u: goto label_1ead98;
        case 0x1ead9cu: goto label_1ead9c;
        case 0x1eada0u: goto label_1eada0;
        case 0x1eada4u: goto label_1eada4;
        case 0x1eada8u: goto label_1eada8;
        case 0x1eadacu: goto label_1eadac;
        case 0x1eadb0u: goto label_1eadb0;
        case 0x1eadb4u: goto label_1eadb4;
        case 0x1eadb8u: goto label_1eadb8;
        case 0x1eadbcu: goto label_1eadbc;
        case 0x1eadc0u: goto label_1eadc0;
        case 0x1eadc4u: goto label_1eadc4;
        case 0x1eadc8u: goto label_1eadc8;
        case 0x1eadccu: goto label_1eadcc;
        case 0x1eadd0u: goto label_1eadd0;
        case 0x1eadd4u: goto label_1eadd4;
        case 0x1eadd8u: goto label_1eadd8;
        case 0x1eaddcu: goto label_1eaddc;
        case 0x1eade0u: goto label_1eade0;
        case 0x1eade4u: goto label_1eade4;
        case 0x1eade8u: goto label_1eade8;
        case 0x1eadecu: goto label_1eadec;
        case 0x1eadf0u: goto label_1eadf0;
        case 0x1eadf4u: goto label_1eadf4;
        case 0x1eadf8u: goto label_1eadf8;
        case 0x1eadfcu: goto label_1eadfc;
        case 0x1eae00u: goto label_1eae00;
        case 0x1eae04u: goto label_1eae04;
        case 0x1eae08u: goto label_1eae08;
        case 0x1eae0cu: goto label_1eae0c;
        case 0x1eae10u: goto label_1eae10;
        case 0x1eae14u: goto label_1eae14;
        case 0x1eae18u: goto label_1eae18;
        case 0x1eae1cu: goto label_1eae1c;
        case 0x1eae20u: goto label_1eae20;
        case 0x1eae24u: goto label_1eae24;
        case 0x1eae28u: goto label_1eae28;
        case 0x1eae2cu: goto label_1eae2c;
        case 0x1eae30u: goto label_1eae30;
        case 0x1eae34u: goto label_1eae34;
        case 0x1eae38u: goto label_1eae38;
        case 0x1eae3cu: goto label_1eae3c;
        case 0x1eae40u: goto label_1eae40;
        case 0x1eae44u: goto label_1eae44;
        case 0x1eae48u: goto label_1eae48;
        case 0x1eae4cu: goto label_1eae4c;
        default: break;
    }

    ctx->pc = 0x1eac28u;

label_1eac28:
    // 0x1eac28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1eac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1eac2c:
    // 0x1eac2c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1eac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1eac30:
    // 0x1eac30: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1eac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1eac34:
    // 0x1eac34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eac34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eac38:
    // 0x1eac38: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1eac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1eac3c:
    // 0x1eac3c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1eac3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eac40:
    // 0x1eac40: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1eac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1eac44:
    // 0x1eac44: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1eac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1eac48:
    // 0x1eac48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1eac4c:
    // 0x1eac4c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1eac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1eac50:
    // 0x1eac50: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1eac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1eac54:
    // 0x1eac54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eac58:
    // 0x1eac58: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1eac58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1eac5c:
    // 0x1eac5c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1eac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eac60:
    // 0x1eac60: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1eac60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1eac64:
    // 0x1eac64: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1eac64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eac68:
    // 0x1eac68: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1eac68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eac6c:
    // 0x1eac6c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_1eac70:
    if (ctx->pc == 0x1EAC70u) {
        ctx->pc = 0x1EAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC6Cu;
        // 0x1eac70: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC74u;
        goto label_1eac74;
    }
    ctx->pc = 0x1EAC6Cu;
    {
        const bool branch_taken_0x1eac6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC6Cu;
        // 0x1eac70: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac6c) {
            ctx->pc = 0x1EAD88u;
            goto label_1ead88;
        }
    }
    ctx->pc = 0x1EAC74u;
label_1eac74:
    // 0x1eac74: 0x24170044  addiu       $s7, $zero, 0x44
    ctx->pc = 0x1eac74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1eac78:
    // 0x1eac78: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1eac78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eac7c:
    // 0x1eac7c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eac7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eac80:
    // 0x1eac80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eac80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eac84:
    // 0x1eac84: 0x2578018  mult        $s0, $s2, $s7
    ctx->pc = 0x1eac84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1eac88:
    // 0x1eac88: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1eac88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eac8c:
    // 0x1eac8c: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1eac8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1eac90:
    // 0x1eac90: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x1eac90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1eac94:
    // 0x1eac94: 0xc0c48d9  jal         func_312364
label_1eac98:
    if (ctx->pc == 0x1EAC98u) {
        ctx->pc = 0x1EAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC94u;
        // 0x1eac98: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC9Cu;
        goto label_1eac9c;
    }
    ctx->pc = 0x1EAC94u;
    SET_GPR_U32(ctx, 31, 0x1EAC9Cu);
    ctx->pc = 0x1EAC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC94u;
    // 0x1eac98: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312364u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312364u, 0x1EAC94u, 0x1EAC9Cu)) {
        return;
    }
    ctx->pc = 0x1EAC9Cu;
label_1eac9c:
    // 0x1eac9c: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x1eac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1eaca0:
    // 0x1eaca0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1eaca4:
    if (ctx->pc == 0x1EACA4u) {
        ctx->pc = 0x1EACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACA0u;
        // 0x1eaca4: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EACA8u;
        goto label_1eaca8;
    }
    ctx->pc = 0x1EACA0u;
    {
        const bool branch_taken_0x1eaca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACA0u;
        // 0x1eaca4: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaca0) {
            ctx->pc = 0x1EAD60u;
            goto label_1ead60;
        }
    }
    ctx->pc = 0x1EACA8u;
label_1eaca8:
    // 0x1eaca8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1eaca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eacac:
    // 0x1eacac: 0x26940044  addiu       $s4, $s4, 0x44
    ctx->pc = 0x1eacacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
label_1eacb0:
    // 0x1eacb0: 0x26b50044  addiu       $s5, $s5, 0x44
    ctx->pc = 0x1eacb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
label_1eacb4:
    // 0x1eacb4: 0x26730044  addiu       $s3, $s3, 0x44
    ctx->pc = 0x1eacb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_1eacb8:
    // 0x1eacb8: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1eacb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1eacbc:
    // 0x1eacbc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1eacbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1eacc0:
    // 0x1eacc0: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1eacc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1eacc4:
    // 0x1eacc4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1eacc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1eacc8:
    // 0x1eacc8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1eaccc:
    if (ctx->pc == 0x1EACCCu) {
        ctx->pc = 0x1EACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACC8u;
        // 0x1eaccc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EACD0u;
        goto label_1eacd0;
    }
    ctx->pc = 0x1EACC8u;
    {
        const bool branch_taken_0x1eacc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACC8u;
        // 0x1eaccc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacc8) {
            ctx->pc = 0x1EAD28u;
            goto label_1ead28;
        }
    }
    ctx->pc = 0x1EACD0u;
label_1eacd0:
    // 0x1eacd0: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x1eacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1eacd4:
    // 0x1eacd4: 0x68870007  ldl         $a3, 0x7($a0)
    ctx->pc = 0x1eacd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1eacd8:
    // 0x1eacd8: 0x6c870000  ldr         $a3, 0x0($a0)
    ctx->pc = 0x1eacd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1eacdc:
    // 0x1eacdc: 0x6888000f  ldl         $t0, 0xF($a0)
    ctx->pc = 0x1eacdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1eace0:
    // 0x1eace0: 0x6c880008  ldr         $t0, 0x8($a0)
    ctx->pc = 0x1eace0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1eace4:
    // 0x1eace4: 0x68890017  ldl         $t1, 0x17($a0)
    ctx->pc = 0x1eace4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1eace8:
    // 0x1eace8: 0x6c890010  ldr         $t1, 0x10($a0)
    ctx->pc = 0x1eace8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1eacec:
    // 0x1eacec: 0x688a001f  ldl         $t2, 0x1F($a0)
    ctx->pc = 0x1eacecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1eacf0:
    // 0x1eacf0: 0x6c8a0018  ldr         $t2, 0x18($a0)
    ctx->pc = 0x1eacf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1eacf4:
    // 0x1eacf4: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x1eacf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eacf8:
    // 0x1eacf8: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x1eacf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eacfc:
    // 0x1eacfc: 0xb068000f  sdl         $t0, 0xF($v1)
    ctx->pc = 0x1eacfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ead00:
    // 0x1ead00: 0xb4680008  sdr         $t0, 0x8($v1)
    ctx->pc = 0x1ead00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ead04:
    // 0x1ead04: 0xb0690017  sdl         $t1, 0x17($v1)
    ctx->pc = 0x1ead04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ead08:
    // 0x1ead08: 0xb4690010  sdr         $t1, 0x10($v1)
    ctx->pc = 0x1ead08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ead0c:
    // 0x1ead0c: 0xb06a001f  sdl         $t2, 0x1F($v1)
    ctx->pc = 0x1ead0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ead10:
    // 0x1ead10: 0xb46a0018  sdr         $t2, 0x18($v1)
    ctx->pc = 0x1ead10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ead14:
    // 0x1ead14: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ead14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1ead18:
    // 0x1ead18: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
label_1ead1c:
    if (ctx->pc == 0x1EAD1Cu) {
        ctx->pc = 0x1EAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD18u;
        // 0x1ead1c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAD20u;
        goto label_1ead20;
    }
    ctx->pc = 0x1EAD18u;
    {
        const bool branch_taken_0x1ead18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD18u;
        // 0x1ead1c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead18) {
            ctx->pc = 0x1EACD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eacd4;
        }
    }
    ctx->pc = 0x1EAD20u;
label_1ead20:
    // 0x1ead20: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ead24:
    if (ctx->pc == 0x1EAD24u) {
        ctx->pc = 0x1EAD28u;
        goto label_1ead28;
    }
    ctx->pc = 0x1EAD20u;
    {
        const bool branch_taken_0x1ead20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ead20) {
            ctx->pc = 0x1EAD58u;
            goto label_1ead58;
        }
    }
    ctx->pc = 0x1EAD28u;
label_1ead28:
    // 0x1ead28: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x1ead28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1ead2c:
    // 0x1ead2c: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x1ead2cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1ead30:
    // 0x1ead30: 0xdc880008  ld          $t0, 0x8($a0)
    ctx->pc = 0x1ead30u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_1ead34:
    // 0x1ead34: 0xdc890010  ld          $t1, 0x10($a0)
    ctx->pc = 0x1ead34u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_1ead38:
    // 0x1ead38: 0xdc8a0018  ld          $t2, 0x18($a0)
    ctx->pc = 0x1ead38u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_1ead3c:
    // 0x1ead3c: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x1ead3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
label_1ead40:
    // 0x1ead40: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x1ead40u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
label_1ead44:
    // 0x1ead44: 0xfc690010  sd          $t1, 0x10($v1)
    ctx->pc = 0x1ead44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 9));
label_1ead48:
    // 0x1ead48: 0xfc6a0018  sd          $t2, 0x18($v1)
    ctx->pc = 0x1ead48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 10));
label_1ead4c:
    // 0x1ead4c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ead4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1ead50:
    // 0x1ead50: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
label_1ead54:
    if (ctx->pc == 0x1EAD54u) {
        ctx->pc = 0x1EAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD50u;
        // 0x1ead54: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAD58u;
        goto label_1ead58;
    }
    ctx->pc = 0x1EAD50u;
    {
        const bool branch_taken_0x1ead50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD50u;
        // 0x1ead54: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead50) {
            ctx->pc = 0x1EAD2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ead2c;
        }
    }
    ctx->pc = 0x1EAD58u;
label_1ead58:
    // 0x1ead58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ead58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ead5c:
    // 0x1ead5c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ead5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ead60:
    // 0x1ead60: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1ead60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1ead64:
    // 0x1ead64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ead64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ead68:
    // 0x1ead68: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1ead68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1ead6c:
    // 0x1ead6c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1ead6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1ead70:
    // 0x1ead70: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1ead70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1ead74:
    // 0x1ead74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ead74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1ead78:
    // 0x1ead78: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ead78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ead7c:
    // 0x1ead7c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1ead7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ead80:
    // 0x1ead80: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_1ead84:
    if (ctx->pc == 0x1EAD84u) {
        ctx->pc = 0x1EAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD80u;
        // 0x1ead84: 0x2578018  mult        $s0, $s2, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAD88u;
        goto label_1ead88;
    }
    ctx->pc = 0x1EAD80u;
    {
        const bool branch_taken_0x1ead80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD80u;
        // 0x1ead84: 0x2578018  mult        $s0, $s2, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead80) {
            ctx->pc = 0x1EAC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eac88;
        }
    }
    ctx->pc = 0x1EAD88u;
label_1ead88:
    // 0x1ead88: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ead88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ead8c:
    // 0x1ead8c: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x1ead8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1ead90:
    // 0x1ead90: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
label_1ead94:
    if (ctx->pc == 0x1EAD94u) {
        ctx->pc = 0x1EAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD90u;
        // 0x1ead94: 0x24100044  addiu       $s0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAD98u;
        goto label_1ead98;
    }
    ctx->pc = 0x1EAD90u;
    {
        const bool branch_taken_0x1ead90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD90u;
        // 0x1ead94: 0x24100044  addiu       $s0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead90) {
            ctx->pc = 0x1EAE24u;
            goto label_1eae24;
        }
    }
    ctx->pc = 0x1EAD98u;
label_1ead98:
    // 0x1ead98: 0x8e330014  lw          $s3, 0x14($s1)
    ctx->pc = 0x1ead98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1ead9c:
    // 0x1ead9c: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x1ead9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1eada0:
    // 0x1eada0: 0xc0932d4  jal         func_24CB50
label_1eada4:
    if (ctx->pc == 0x1EADA4u) {
        ctx->pc = 0x1EADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADA0u;
        // 0x1eada4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EADA8u;
        goto label_1eada8;
    }
    ctx->pc = 0x1EADA0u;
    SET_GPR_U32(ctx, 31, 0x1EADA8u);
    ctx->pc = 0x1EADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EADA0u;
    // 0x1eada4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EADA0u, 0x1EADA8u)) {
        return;
    }
    ctx->pc = 0x1EADA8u;
label_1eada8:
    // 0x1eada8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eadac:
    // 0x1eadac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eadacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eadb0:
    // 0x1eadb0: 0x40f809  jalr        $v0
label_1eadb4:
    if (ctx->pc == 0x1EADB4u) {
        ctx->pc = 0x1EADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADB0u;
        // 0x1eadb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EADB8u;
        goto label_1eadb8;
    }
    ctx->pc = 0x1EADB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EADB8u);
        ctx->pc = 0x1EADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADB0u;
        // 0x1eadb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EADB0u, 0x1EADB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EADB8u;
label_1eadb8:
    // 0x1eadb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1eadb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eadbc:
    // 0x1eadbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eadbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eadc0:
    // 0x1eadc0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1eadc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1eadc4:
    // 0x1eadc4: 0xc075fdc  jal         func_1D7F70
label_1eadc8:
    if (ctx->pc == 0x1EADC8u) {
        ctx->pc = 0x1EADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADC4u;
        // 0x1eadc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EADCCu;
        goto label_1eadcc;
    }
    ctx->pc = 0x1EADC4u;
    SET_GPR_U32(ctx, 31, 0x1EADCCu);
    ctx->pc = 0x1EADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EADC4u;
    // 0x1eadc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1EADC4u, 0x1EADCCu)) {
        return;
    }
    ctx->pc = 0x1EADCCu;
label_1eadcc:
    // 0x1eadcc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1eadccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eadd0:
    // 0x1eadd0: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_1eadd4:
    if (ctx->pc == 0x1EADD4u) {
        ctx->pc = 0x1EADD8u;
        goto label_1eadd8;
    }
    ctx->pc = 0x1EADD0u;
    {
        const bool branch_taken_0x1eadd0 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x1eadd0) {
            ctx->pc = 0x1EAE10u;
            goto label_1eae10;
        }
    }
    ctx->pc = 0x1EADD8u;
label_1eadd8:
    // 0x1eadd8: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x1eadd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1eaddc:
    // 0x1eaddc: 0x0  nop
    ctx->pc = 0x1eaddcu;
    // NOP
label_1eade0:
    // 0x1eade0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1eade0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1eade4:
    // 0x1eade4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1eade4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eade8:
    // 0x1eade8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1eade8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1eadec:
    // 0x1eadec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1eadecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1eadf0:
    // 0x1eadf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1eadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1eadf4:
    // 0x1eadf4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1eadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1eadf8:
    // 0x1eadf8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1eadf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1eadfc:
    // 0x1eadfc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1eadfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1eae00:
    // 0x1eae00: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1eae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eae04:
    // 0x1eae04: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1eae04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eae08:
    // 0x1eae08: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_1eae0c:
    if (ctx->pc == 0x1EAE0Cu) {
        ctx->pc = 0x1EAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE08u;
        // 0x1eae0c: 0x8e250018  lw          $a1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAE10u;
        goto label_1eae10;
    }
    ctx->pc = 0x1EAE08u;
    {
        const bool branch_taken_0x1eae08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eae08) {
            ctx->pc = 0x1EAE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAE08u;
            // 0x1eae0c: 0x8e250018  lw          $a1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EADE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eade0;
        }
    }
    ctx->pc = 0x1EAE10u;
label_1eae10:
    // 0x1eae10: 0xc0932d4  jal         func_24CB50
label_1eae14:
    if (ctx->pc == 0x1EAE14u) {
        ctx->pc = 0x1EAE18u;
        goto label_1eae18;
    }
    ctx->pc = 0x1EAE10u;
    SET_GPR_U32(ctx, 31, 0x1EAE18u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EAE10u, 0x1EAE18u)) {
        return;
    }
    ctx->pc = 0x1EAE18u;
label_1eae18:
    // 0x1eae18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1eae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1eae1c:
    // 0x1eae1c: 0x60f809  jalr        $v1
label_1eae20:
    if (ctx->pc == 0x1EAE20u) {
        ctx->pc = 0x1EAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE1Cu;
        // 0x1eae20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAE24u;
        goto label_1eae24;
    }
    ctx->pc = 0x1EAE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EAE24u);
        ctx->pc = 0x1EAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE1Cu;
        // 0x1eae20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAE1Cu, 0x1EAE24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAE24u;
label_1eae24:
    // 0x1eae24: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1eae24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1eae28:
    // 0x1eae28: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1eae28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1eae2c:
    // 0x1eae2c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1eae2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1eae30:
    // 0x1eae30: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1eae30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1eae34:
    // 0x1eae34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eae34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1eae38:
    // 0x1eae38: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1eae38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1eae3c:
    // 0x1eae3c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1eae3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eae40:
    // 0x1eae40: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1eae40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eae44:
    // 0x1eae44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eae44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eae48:
    // 0x1eae48: 0x3e00008  jr          $ra
label_1eae4c:
    if (ctx->pc == 0x1EAE4Cu) {
        ctx->pc = 0x1EAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE48u;
        // 0x1eae4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAE50u;
        goto label_fallthrough_0x1eae48;
    }
    ctx->pc = 0x1EAE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE48u;
        // 0x1eae4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eae48:
    ctx->pc = 0x1EAE50u;
}
