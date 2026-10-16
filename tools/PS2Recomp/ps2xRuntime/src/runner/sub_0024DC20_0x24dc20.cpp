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

// Function: sub_0024DC20
// Address: 0x24dc20 - 0x24ddb0
void sub_0024DC20_0x24dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DC20_0x24dc20");
#endif

    switch (ctx->pc) {
        case 0x24dc20u: goto label_24dc20;
        case 0x24dc24u: goto label_24dc24;
        case 0x24dc28u: goto label_24dc28;
        case 0x24dc2cu: goto label_24dc2c;
        case 0x24dc30u: goto label_24dc30;
        case 0x24dc34u: goto label_24dc34;
        case 0x24dc38u: goto label_24dc38;
        case 0x24dc3cu: goto label_24dc3c;
        case 0x24dc40u: goto label_24dc40;
        case 0x24dc44u: goto label_24dc44;
        case 0x24dc48u: goto label_24dc48;
        case 0x24dc4cu: goto label_24dc4c;
        case 0x24dc50u: goto label_24dc50;
        case 0x24dc54u: goto label_24dc54;
        case 0x24dc58u: goto label_24dc58;
        case 0x24dc5cu: goto label_24dc5c;
        case 0x24dc60u: goto label_24dc60;
        case 0x24dc64u: goto label_24dc64;
        case 0x24dc68u: goto label_24dc68;
        case 0x24dc6cu: goto label_24dc6c;
        case 0x24dc70u: goto label_24dc70;
        case 0x24dc74u: goto label_24dc74;
        case 0x24dc78u: goto label_24dc78;
        case 0x24dc7cu: goto label_24dc7c;
        case 0x24dc80u: goto label_24dc80;
        case 0x24dc84u: goto label_24dc84;
        case 0x24dc88u: goto label_24dc88;
        case 0x24dc8cu: goto label_24dc8c;
        case 0x24dc90u: goto label_24dc90;
        case 0x24dc94u: goto label_24dc94;
        case 0x24dc98u: goto label_24dc98;
        case 0x24dc9cu: goto label_24dc9c;
        case 0x24dca0u: goto label_24dca0;
        case 0x24dca4u: goto label_24dca4;
        case 0x24dca8u: goto label_24dca8;
        case 0x24dcacu: goto label_24dcac;
        case 0x24dcb0u: goto label_24dcb0;
        case 0x24dcb4u: goto label_24dcb4;
        case 0x24dcb8u: goto label_24dcb8;
        case 0x24dcbcu: goto label_24dcbc;
        case 0x24dcc0u: goto label_24dcc0;
        case 0x24dcc4u: goto label_24dcc4;
        case 0x24dcc8u: goto label_24dcc8;
        case 0x24dcccu: goto label_24dccc;
        case 0x24dcd0u: goto label_24dcd0;
        case 0x24dcd4u: goto label_24dcd4;
        case 0x24dcd8u: goto label_24dcd8;
        case 0x24dcdcu: goto label_24dcdc;
        case 0x24dce0u: goto label_24dce0;
        case 0x24dce4u: goto label_24dce4;
        case 0x24dce8u: goto label_24dce8;
        case 0x24dcecu: goto label_24dcec;
        case 0x24dcf0u: goto label_24dcf0;
        case 0x24dcf4u: goto label_24dcf4;
        case 0x24dcf8u: goto label_24dcf8;
        case 0x24dcfcu: goto label_24dcfc;
        case 0x24dd00u: goto label_24dd00;
        case 0x24dd04u: goto label_24dd04;
        case 0x24dd08u: goto label_24dd08;
        case 0x24dd0cu: goto label_24dd0c;
        case 0x24dd10u: goto label_24dd10;
        case 0x24dd14u: goto label_24dd14;
        case 0x24dd18u: goto label_24dd18;
        case 0x24dd1cu: goto label_24dd1c;
        case 0x24dd20u: goto label_24dd20;
        case 0x24dd24u: goto label_24dd24;
        case 0x24dd28u: goto label_24dd28;
        case 0x24dd2cu: goto label_24dd2c;
        case 0x24dd30u: goto label_24dd30;
        case 0x24dd34u: goto label_24dd34;
        case 0x24dd38u: goto label_24dd38;
        case 0x24dd3cu: goto label_24dd3c;
        case 0x24dd40u: goto label_24dd40;
        case 0x24dd44u: goto label_24dd44;
        case 0x24dd48u: goto label_24dd48;
        case 0x24dd4cu: goto label_24dd4c;
        case 0x24dd50u: goto label_24dd50;
        case 0x24dd54u: goto label_24dd54;
        case 0x24dd58u: goto label_24dd58;
        case 0x24dd5cu: goto label_24dd5c;
        case 0x24dd60u: goto label_24dd60;
        case 0x24dd64u: goto label_24dd64;
        case 0x24dd68u: goto label_24dd68;
        case 0x24dd6cu: goto label_24dd6c;
        case 0x24dd70u: goto label_24dd70;
        case 0x24dd74u: goto label_24dd74;
        case 0x24dd78u: goto label_24dd78;
        case 0x24dd7cu: goto label_24dd7c;
        case 0x24dd80u: goto label_24dd80;
        case 0x24dd84u: goto label_24dd84;
        case 0x24dd88u: goto label_24dd88;
        case 0x24dd8cu: goto label_24dd8c;
        case 0x24dd90u: goto label_24dd90;
        case 0x24dd94u: goto label_24dd94;
        case 0x24dd98u: goto label_24dd98;
        case 0x24dd9cu: goto label_24dd9c;
        case 0x24dda0u: goto label_24dda0;
        case 0x24dda4u: goto label_24dda4;
        case 0x24dda8u: goto label_24dda8;
        case 0x24ddacu: goto label_24ddac;
        default: break;
    }

    ctx->pc = 0x24dc20u;

label_24dc20:
    // 0x24dc20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_24dc24:
    // 0x24dc24: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x24dc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_24dc28:
    // 0x24dc28: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x24dc28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_24dc2c:
    // 0x24dc2c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x24dc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_24dc30:
    // 0x24dc30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24dc30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24dc34:
    // 0x24dc34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24dc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24dc38:
    // 0x24dc38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24dc38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24dc3c:
    // 0x24dc3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24dc3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24dc40:
    // 0x24dc40: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x24dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_24dc44:
    // 0x24dc44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_24dc48:
    // 0x24dc48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24dc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24dc4c:
    // 0x24dc4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24dc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24dc50:
    // 0x24dc50: 0xc09270a  jal         func_249C28
label_24dc54:
    if (ctx->pc == 0x24DC54u) {
        ctx->pc = 0x24DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC50u;
        // 0x24dc54: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC58u;
        goto label_24dc58;
    }
    ctx->pc = 0x24DC50u;
    SET_GPR_U32(ctx, 31, 0x24DC58u);
    ctx->pc = 0x24DC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DC50u;
    // 0x24dc54: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x24DC50u, 0x24DC58u)) {
        return;
    }
    ctx->pc = 0x24DC58u;
label_24dc58:
    // 0x24dc58: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_24dc5c:
    if (ctx->pc == 0x24DC5Cu) {
        ctx->pc = 0x24DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC58u;
        // 0x24dc5c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC60u;
        goto label_24dc60;
    }
    ctx->pc = 0x24DC58u;
    {
        const bool branch_taken_0x24dc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC58u;
        // 0x24dc5c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc58) {
            ctx->pc = 0x24DD90u;
            goto label_24dd90;
        }
    }
    ctx->pc = 0x24DC60u;
label_24dc60:
    // 0x24dc60: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x24dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_24dc64:
    // 0x24dc64: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x24dc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_24dc68:
    // 0x24dc68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24dc6c:
    // 0x24dc6c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x24dc6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_24dc70:
    // 0x24dc70: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_24dc74:
    if (ctx->pc == 0x24DC74u) {
        ctx->pc = 0x24DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC70u;
        // 0x24dc74: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC78u;
        goto label_24dc78;
    }
    ctx->pc = 0x24DC70u;
    {
        const bool branch_taken_0x24dc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC70u;
        // 0x24dc74: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc70) {
            ctx->pc = 0x24DD70u;
            goto label_24dd70;
        }
    }
    ctx->pc = 0x24DC78u;
label_24dc78:
    // 0x24dc78: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_24dc7c:
    if (ctx->pc == 0x24DC7Cu) {
        ctx->pc = 0x24DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC78u;
        // 0x24dc7c: 0x8e700010  lw          $s0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC80u;
        goto label_24dc80;
    }
    ctx->pc = 0x24DC78u;
    {
        const bool branch_taken_0x24dc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dc78) {
            ctx->pc = 0x24DC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DC78u;
            // 0x24dc7c: 0x8e700010  lw          $s0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DD34u;
            goto label_24dd34;
        }
    }
    ctx->pc = 0x24DC80u;
label_24dc80:
    // 0x24dc80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24dc84:
    // 0x24dc84: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x24dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_24dc88:
    // 0x24dc88: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x24dc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_24dc8c:
    // 0x24dc8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24dc8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24dc90:
    // 0x24dc90: 0xc0926aa  jal         func_249AA8
label_24dc94:
    if (ctx->pc == 0x24DC94u) {
        ctx->pc = 0x24DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC90u;
        // 0x24dc94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC98u;
        goto label_24dc98;
    }
    ctx->pc = 0x24DC90u;
    SET_GPR_U32(ctx, 31, 0x24DC98u);
    ctx->pc = 0x24DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DC90u;
    // 0x24dc94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249AA8u, 0x24DC90u, 0x24DC98u)) {
        return;
    }
    ctx->pc = 0x24DC98u;
label_24dc98:
    // 0x24dc98: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_24dc9c:
    if (ctx->pc == 0x24DC9Cu) {
        ctx->pc = 0x24DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC98u;
        // 0x24dc9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCA0u;
        goto label_24dca0;
    }
    ctx->pc = 0x24DC98u;
    {
        const bool branch_taken_0x24dc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC98u;
        // 0x24dc9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc98) {
            ctx->pc = 0x24DD94u;
            goto label_24dd94;
        }
    }
    ctx->pc = 0x24DCA0u;
label_24dca0:
    // 0x24dca0: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x24dca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_24dca4:
    // 0x24dca4: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_24dca8:
    if (ctx->pc == 0x24DCA8u) {
        ctx->pc = 0x24DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCA4u;
        // 0x24dca8: 0x8fa5001c  lw          $a1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCACu;
        goto label_24dcac;
    }
    ctx->pc = 0x24DCA4u;
    {
        const bool branch_taken_0x24dca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCA4u;
        // 0x24dca8: 0x8fa5001c  lw          $a1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dca4) {
            ctx->pc = 0x24DD0Cu;
            goto label_24dd0c;
        }
    }
    ctx->pc = 0x24DCACu;
label_24dcac:
    // 0x24dcac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24dcb0:
    // 0x24dcb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24dcb4:
    // 0x24dcb4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_24dcb8:
    if (ctx->pc == 0x24DCB8u) {
        ctx->pc = 0x24DCBCu;
        goto label_24dcbc;
    }
    ctx->pc = 0x24DCB4u;
    {
        const bool branch_taken_0x24dcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24dcb4) {
            ctx->pc = 0x24DCD8u;
            goto label_24dcd8;
        }
    }
    ctx->pc = 0x24DCBCu;
label_24dcbc:
    // 0x24dcbc: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x24dcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_24dcc0:
    // 0x24dcc0: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_24dcc4:
    if (ctx->pc == 0x24DCC4u) {
        ctx->pc = 0x24DCC8u;
        goto label_24dcc8;
    }
    ctx->pc = 0x24DCC0u;
    {
        const bool branch_taken_0x24dcc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dcc0) {
            ctx->pc = 0x24DD0Cu;
            goto label_24dd0c;
        }
    }
    ctx->pc = 0x24DCC8u;
label_24dcc8:
    // 0x24dcc8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24dccc:
    // 0x24dccc: 0x0  nop
    ctx->pc = 0x24dcccu;
    // NOP
label_24dcd0:
    // 0x24dcd0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
label_24dcd4:
    if (ctx->pc == 0x24DCD4u) {
        ctx->pc = 0x24DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCD0u;
        // 0x24dcd4: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCD8u;
        goto label_24dcd8;
    }
    ctx->pc = 0x24DCD0u;
    {
        const bool branch_taken_0x24dcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24dcd0) {
            ctx->pc = 0x24DCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DCD0u;
            // 0x24dcd4: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dcc0;
        }
    }
    ctx->pc = 0x24DCD8u;
label_24dcd8:
    // 0x24dcd8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_24dcdc:
    if (ctx->pc == 0x24DCDCu) {
        ctx->pc = 0x24DCE0u;
        goto label_24dce0;
    }
    ctx->pc = 0x24DCD8u;
    {
        const bool branch_taken_0x24dcd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dcd8) {
            ctx->pc = 0x24DD0Cu;
            goto label_24dd0c;
        }
    }
    ctx->pc = 0x24DCE0u;
label_24dce0:
    // 0x24dce0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24dce4:
    // 0x24dce4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_24dce8:
    if (ctx->pc == 0x24DCE8u) {
        ctx->pc = 0x24DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCE4u;
        // 0x24dce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCECu;
        goto label_24dcec;
    }
    ctx->pc = 0x24DCE4u;
    {
        const bool branch_taken_0x24dce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCE4u;
        // 0x24dce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dce4) {
            ctx->pc = 0x24DD0Cu;
            goto label_24dd0c;
        }
    }
    ctx->pc = 0x24DCECu;
label_24dcec:
    // 0x24dcec: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x24dcecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24dcf0:
    // 0x24dcf0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x24dcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24dcf4:
    // 0x24dcf4: 0x40f809  jalr        $v0
label_24dcf8:
    if (ctx->pc == 0x24DCF8u) {
        ctx->pc = 0x24DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCF4u;
        // 0x24dcf8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCFCu;
        goto label_24dcfc;
    }
    ctx->pc = 0x24DCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DCFCu);
        ctx->pc = 0x24DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCF4u;
        // 0x24dcf8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DCF4u, 0x24DCFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DCFCu;
label_24dcfc:
    // 0x24dcfc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_24dd00:
    if (ctx->pc == 0x24DD00u) {
        ctx->pc = 0x24DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCFCu;
        // 0x24dd00: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD04u;
        goto label_24dd04;
    }
    ctx->pc = 0x24DCFCu;
    {
        const bool branch_taken_0x24dcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCFCu;
        // 0x24dd00: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcfc) {
            ctx->pc = 0x24DD1Cu;
            goto label_24dd1c;
        }
    }
    ctx->pc = 0x24DD04u;
label_24dd04:
    // 0x24dd04: 0x10000023  b           . + 4 + (0x23 << 2)
label_24dd08:
    if (ctx->pc == 0x24DD08u) {
        ctx->pc = 0x24DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD04u;
        // 0x24dd08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD0Cu;
        goto label_24dd0c;
    }
    ctx->pc = 0x24DD04u;
    {
        const bool branch_taken_0x24dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD04u;
        // 0x24dd08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd04) {
            ctx->pc = 0x24DD94u;
            goto label_24dd94;
        }
    }
    ctx->pc = 0x24DD0Cu;
label_24dd0c:
    // 0x24dd0c: 0xc093620  jal         func_24D880
label_24dd10:
    if (ctx->pc == 0x24DD10u) {
        ctx->pc = 0x24DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD0Cu;
        // 0x24dd10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD14u;
        goto label_24dd14;
    }
    ctx->pc = 0x24DD0Cu;
    SET_GPR_U32(ctx, 31, 0x24DD14u);
    ctx->pc = 0x24DD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD0Cu;
    // 0x24dd10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x24DD0Cu, 0x24DD14u)) {
        return;
    }
    ctx->pc = 0x24DD14u;
label_24dd14:
    // 0x24dd14: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_24dd18:
    if (ctx->pc == 0x24DD18u) {
        ctx->pc = 0x24DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD14u;
        // 0x24dd18: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD1Cu;
        goto label_24dd1c;
    }
    ctx->pc = 0x24DD14u;
    {
        const bool branch_taken_0x24dd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD14u;
        // 0x24dd18: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd14) {
            ctx->pc = 0x24DD90u;
            goto label_24dd90;
        }
    }
    ctx->pc = 0x24DD1Cu;
label_24dd1c:
    // 0x24dd1c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x24dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_24dd20:
    // 0x24dd20: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x24dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_24dd24:
    // 0x24dd24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x24dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24dd28:
    // 0x24dd28: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_24dd2c:
    if (ctx->pc == 0x24DD2Cu) {
        ctx->pc = 0x24DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD28u;
        // 0x24dd2c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD30u;
        goto label_24dd30;
    }
    ctx->pc = 0x24DD28u;
    {
        const bool branch_taken_0x24dd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD28u;
        // 0x24dd2c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd28) {
            ctx->pc = 0x24DC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dc80;
        }
    }
    ctx->pc = 0x24DD30u;
label_24dd30:
    // 0x24dd30: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x24dd30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_24dd34:
    // 0x24dd34: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_24dd38:
    if (ctx->pc == 0x24DD38u) {
        ctx->pc = 0x24DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD34u;
        // 0x24dd38: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD3Cu;
        goto label_24dd3c;
    }
    ctx->pc = 0x24DD34u;
    {
        const bool branch_taken_0x24dd34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD34u;
        // 0x24dd38: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd34) {
            ctx->pc = 0x24DD94u;
            goto label_24dd94;
        }
    }
    ctx->pc = 0x24DD3Cu;
label_24dd3c:
    // 0x24dd3c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x24dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_24dd40:
    // 0x24dd40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24dd44:
    if (ctx->pc == 0x24DD44u) {
        ctx->pc = 0x24DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD40u;
        // 0x24dd44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD48u;
        goto label_24dd48;
    }
    ctx->pc = 0x24DD40u;
    {
        const bool branch_taken_0x24dd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD40u;
        // 0x24dd44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd40) {
            ctx->pc = 0x24DD5Cu;
            goto label_24dd5c;
        }
    }
    ctx->pc = 0x24DD48u;
label_24dd48:
    // 0x24dd48: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24dd4c:
    // 0x24dd4c: 0x40f809  jalr        $v0
label_24dd50:
    if (ctx->pc == 0x24DD50u) {
        ctx->pc = 0x24DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD4Cu;
        // 0x24dd50: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD54u;
        goto label_24dd54;
    }
    ctx->pc = 0x24DD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DD54u);
        ctx->pc = 0x24DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD4Cu;
        // 0x24dd50: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DD4Cu, 0x24DD54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DD54u;
label_24dd54:
    // 0x24dd54: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_24dd58:
    if (ctx->pc == 0x24DD58u) {
        ctx->pc = 0x24DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD54u;
        // 0x24dd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD5Cu;
        goto label_24dd5c;
    }
    ctx->pc = 0x24DD54u;
    {
        const bool branch_taken_0x24dd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD54u;
        // 0x24dd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd54) {
            ctx->pc = 0x24DD94u;
            goto label_24dd94;
        }
    }
    ctx->pc = 0x24DD5Cu;
label_24dd5c:
    // 0x24dd5c: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x24dd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_24dd60:
    // 0x24dd60: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
label_24dd64:
    if (ctx->pc == 0x24DD64u) {
        ctx->pc = 0x24DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD60u;
        // 0x24dd64: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD68u;
        goto label_24dd68;
    }
    ctx->pc = 0x24DD60u;
    {
        const bool branch_taken_0x24dd60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dd60) {
            ctx->pc = 0x24DD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DD60u;
            // 0x24dd64: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dd40;
        }
    }
    ctx->pc = 0x24DD68u;
label_24dd68:
    // 0x24dd68: 0x1000000a  b           . + 4 + (0xA << 2)
label_24dd6c:
    if (ctx->pc == 0x24DD6Cu) {
        ctx->pc = 0x24DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD68u;
        // 0x24dd6c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD70u;
        goto label_24dd70;
    }
    ctx->pc = 0x24DD68u;
    {
        const bool branch_taken_0x24dd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD68u;
        // 0x24dd6c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd68) {
            ctx->pc = 0x24DD94u;
            goto label_24dd94;
        }
    }
    ctx->pc = 0x24DD70u;
label_24dd70:
    // 0x24dd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24dd74:
    // 0x24dd74: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24dd78:
    // 0x24dd78: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24dd7c:
    // 0x24dd7c: 0xc092848  jal         func_24A120
label_24dd80:
    if (ctx->pc == 0x24DD80u) {
        ctx->pc = 0x24DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD7Cu;
        // 0x24dd80: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD84u;
        goto label_24dd84;
    }
    ctx->pc = 0x24DD7Cu;
    SET_GPR_U32(ctx, 31, 0x24DD84u);
    ctx->pc = 0x24DD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD7Cu;
    // 0x24dd80: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24DD7Cu, 0x24DD84u)) {
        return;
    }
    ctx->pc = 0x24DD84u;
label_24dd84:
    // 0x24dd84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24dd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24dd88:
    // 0x24dd88: 0xc09281a  jal         func_24A068
label_24dd8c:
    if (ctx->pc == 0x24DD8Cu) {
        ctx->pc = 0x24DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD88u;
        // 0x24dd8c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD90u;
        goto label_24dd90;
    }
    ctx->pc = 0x24DD88u;
    SET_GPR_U32(ctx, 31, 0x24DD90u);
    ctx->pc = 0x24DD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD88u;
    // 0x24dd8c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24DD88u, 0x24DD90u)) {
        return;
    }
    ctx->pc = 0x24DD90u;
label_24dd90:
    // 0x24dd90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24dd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24dd94:
    // 0x24dd94: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x24dd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24dd98:
    // 0x24dd98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x24dd98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24dd9c:
    // 0x24dd9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x24dd9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24dda0:
    // 0x24dda0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24dda0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24dda4:
    // 0x24dda4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24dda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24dda8:
    // 0x24dda8: 0x3e00008  jr          $ra
label_24ddac:
    if (ctx->pc == 0x24DDACu) {
        ctx->pc = 0x24DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDA8u;
        // 0x24ddac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDB0u;
        goto label_fallthrough_0x24dda8;
    }
    ctx->pc = 0x24DDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDA8u;
        // 0x24ddac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24dda8:
    ctx->pc = 0x24DDB0u;
}
