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

// Function: sub_00237A80
// Address: 0x237a80 - 0x237da8
void sub_00237A80_0x237a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237A80_0x237a80");
#endif

    switch (ctx->pc) {
        case 0x237ab8u: goto label_237ab8;
        case 0x237ae4u: goto label_237ae4;
        case 0x237af4u: goto label_237af4;
        case 0x237b38u: goto label_237b38;
        case 0x237c00u: goto label_237c00;
        case 0x237c1cu: goto label_237c1c;
        case 0x237c3cu: goto label_237c3c;
        case 0x237c4cu: goto label_237c4c;
        case 0x237c8cu: goto label_237c8c;
        case 0x237ca4u: goto label_237ca4;
        case 0x237cb8u: goto label_237cb8;
        case 0x237cd8u: goto label_237cd8;
        case 0x237cecu: goto label_237cec;
        case 0x237d08u: goto label_237d08;
        case 0x237d1cu: goto label_237d1c;
        case 0x237d40u: goto label_237d40;
        case 0x237d50u: goto label_237d50;
        case 0x237d74u: goto label_237d74;
        case 0x237d80u: goto label_237d80;
        default: break;
    }

    ctx->pc = 0x237a80u;

    // 0x237a80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x237a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x237a84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x237a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237a88: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x237a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x237a8c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x237a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x237a90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x237a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a94: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x237a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x237a98: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x237a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x237a9c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x237a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x237aa0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x237aa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237aa4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x237aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x237aa8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x237aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x237aac: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x237aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x237ab0: 0xc09270a  jal         func_249C28
    ctx->pc = 0x237AB0u;
    SET_GPR_U32(ctx, 31, 0x237AB8u);
    ctx->pc = 0x237AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237AB0u;
    // 0x237ab4: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x237AB0u, 0x237AB8u)) {
        return;
    }
    ctx->pc = 0x237AB8u;
label_237ab8:
    // 0x237ab8: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x237AB8u;
    {
        const bool branch_taken_0x237ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AB8u;
        // 0x237abc: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ab8) {
            ctx->pc = 0x237D80u;
            goto label_237d80;
        }
    }
    ctx->pc = 0x237AC0u;
    // 0x237ac0: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x237ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x237ac4: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x237ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x237ac8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237acc: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x237accu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x237ad0: 0x106000a3  beqz        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x237AD0u;
    {
        const bool branch_taken_0x237ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AD0u;
        // 0x237ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ad0) {
            ctx->pc = 0x237D60u;
            goto label_237d60;
        }
    }
    ctx->pc = 0x237AD8u;
    // 0x237ad8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x237ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237adc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x237ADCu;
    SET_GPR_U32(ctx, 31, 0x237AE4u);
    ctx->pc = 0x237AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237ADCu;
    // 0x237ae0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x237ADCu, 0x237AE4u)) {
        return;
    }
    ctx->pc = 0x237AE4u;
label_237ae4:
    // 0x237ae4: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x237ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237ae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x237ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237aec: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x237AECu;
    SET_GPR_U32(ctx, 31, 0x237AF4u);
    ctx->pc = 0x237AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237AECu;
    // 0x237af0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x237AECu, 0x237AF4u)) {
        return;
    }
    ctx->pc = 0x237AF4u;
label_237af4:
    // 0x237af4: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x237AF4u;
    {
        const bool branch_taken_0x237af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AF4u;
        // 0x237af8: 0x97a2000e  lhu         $v0, 0xE($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237af4) {
            ctx->pc = 0x237D80u;
            goto label_237d80;
        }
    }
    ctx->pc = 0x237AFCu;
    // 0x237afc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x237afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x237b00: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x237B00u;
    {
        const bool branch_taken_0x237b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b00) {
            ctx->pc = 0x237B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237B00u;
            // 0x237b04: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237B14u;
            goto label_237b14;
        }
    }
    ctx->pc = 0x237B08u;
    // 0x237b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237b0c: 0xaf828438  sw          $v0, -0x7BC8($gp)
    ctx->pc = 0x237b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935608), GPR_U32(ctx, 2));
    // 0x237b10: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x237b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_237b14:
    // 0x237b14: 0x8f9084b0  lw          $s0, -0x7B50($gp)
    ctx->pc = 0x237b14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
    // 0x237b18: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x237b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x237b1c: 0x97a7000c  lhu         $a3, 0xC($sp)
    ctx->pc = 0x237b1cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x237b20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x237b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x237b24: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x237b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237b28: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x237b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x237b2c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x237b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237b30: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x237B30u;
    SET_GPR_U32(ctx, 31, 0x237B38u);
    ctx->pc = 0x237B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B30u;
    // 0x237b34: 0xaf8284b0  sw          $v0, -0x7B50($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x237B30u, 0x237B38u)) {
        return;
    }
    ctx->pc = 0x237B38u;
label_237b38:
    // 0x237b38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x237b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b3c: 0xaf9084b0  sw          $s0, -0x7B50($gp)
    ctx->pc = 0x237b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935728), GPR_U32(ctx, 16));
    // 0x237b40: 0xaf808438  sw          $zero, -0x7BC8($gp)
    ctx->pc = 0x237b40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935608), GPR_U32(ctx, 0));
    // 0x237b44: 0x1220008f  beqz        $s1, . + 4 + (0x8F << 2)
    ctx->pc = 0x237B44u;
    {
        const bool branch_taken_0x237b44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B44u;
        // 0x237b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b44) {
            ctx->pc = 0x237D84u;
            goto label_237d84;
        }
    }
    ctx->pc = 0x237B4Cu;
    // 0x237b4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x237b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x237b50: 0x8c42416c  lw          $v0, 0x416C($v0)
    ctx->pc = 0x237b50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x237b54: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x237b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237b58: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x237b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x237b5c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x237b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x237b60: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x237b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x237b64: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x237b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x237b68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x237b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x237b6c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x237b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x237b70: 0x93a2001c  lbu         $v0, 0x1C($sp)
    ctx->pc = 0x237b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x237b74: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x237b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x237b78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x237b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237b7c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x237b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x237b80: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x237b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x237b84: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x237b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x237b88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x237b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237b8c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x237b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x237b90: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x237b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x237b94: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x237b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x237b98: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x237b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237b9c: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x237b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x237ba0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x237ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x237ba4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x237ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x237ba8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x237ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x237bac: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x237bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x237bb0: 0x97a4003c  lhu         $a0, 0x3C($sp)
    ctx->pc = 0x237bb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x237bb4: 0xa6040014  sh          $a0, 0x14($s0)
    ctx->pc = 0x237bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x237bb8: 0x97a2000e  lhu         $v0, 0xE($sp)
    ctx->pc = 0x237bb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x237bbc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x237bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x237bc0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x237BC0u;
    {
        const bool branch_taken_0x237bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BC0u;
        // 0x237bc4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bc0) {
            ctx->pc = 0x237C2Cu;
            goto label_237c2c;
        }
    }
    ctx->pc = 0x237BC8u;
    // 0x237bc8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x237bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x237bcc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x237bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x237bd0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x237bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x237bd4: 0x97a3000e  lhu         $v1, 0xE($sp)
    ctx->pc = 0x237bd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x237bd8: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x237bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x237bdc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x237BDCu;
    {
        const bool branch_taken_0x237bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BDCu;
        // 0x237be0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bdc) {
            ctx->pc = 0x237C2Cu;
            goto label_237c2c;
        }
    }
    ctx->pc = 0x237BE4u;
    // 0x237be4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x237BE4u;
    {
        const bool branch_taken_0x237be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BE4u;
        // 0x237be8: 0x92030036  lbu         $v1, 0x36($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237be4) {
            ctx->pc = 0x237C08u;
            goto label_237c08;
        }
    }
    ctx->pc = 0x237BECu;
    // 0x237bec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x237becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x237bf0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x237BF0u;
    {
        const bool branch_taken_0x237bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BF0u;
        // 0x237bf4: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bf0) {
            ctx->pc = 0x237C24u;
            goto label_237c24;
        }
    }
    ctx->pc = 0x237BF8u;
    // 0x237bf8: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x237BF8u;
    SET_GPR_U32(ctx, 31, 0x237C00u);
    ctx->pc = 0x237BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237BF8u;
    // 0x237bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x237BF8u, 0x237C00u)) {
        return;
    }
    ctx->pc = 0x237C00u;
label_237c00:
    // 0x237c00: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x237C00u;
    {
        const bool branch_taken_0x237c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C00u;
        // 0x237c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c00) {
            ctx->pc = 0x237D84u;
            goto label_237d84;
        }
    }
    ctx->pc = 0x237C08u;
label_237c08:
    // 0x237c08: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x237c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x237c0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237C0Cu;
    {
        const bool branch_taken_0x237c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C0Cu;
        // 0x237c10: 0x306200fd  andi        $v0, $v1, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c0c) {
            ctx->pc = 0x237C24u;
            goto label_237c24;
        }
    }
    ctx->pc = 0x237C14u;
    // 0x237c14: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x237C14u;
    SET_GPR_U32(ctx, 31, 0x237C1Cu);
    ctx->pc = 0x237C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C14u;
    // 0x237c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x237C14u, 0x237C1Cu)) {
        return;
    }
    ctx->pc = 0x237C1Cu;
label_237c1c:
    // 0x237c1c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x237C1Cu;
    {
        const bool branch_taken_0x237c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C1Cu;
        // 0x237c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c1c) {
            ctx->pc = 0x237D84u;
            goto label_237d84;
        }
    }
    ctx->pc = 0x237C24u;
label_237c24:
    // 0x237c24: 0xa2020036  sb          $v0, 0x36($s0)
    ctx->pc = 0x237c24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 2));
    // 0x237c28: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x237c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237c2c:
    // 0x237c2c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x237c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x237c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c34: 0xc09270a  jal         func_249C28
    ctx->pc = 0x237C34u;
    SET_GPR_U32(ctx, 31, 0x237C3Cu);
    ctx->pc = 0x237C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C34u;
    // 0x237c38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x237C34u, 0x237C3Cu)) {
        return;
    }
    ctx->pc = 0x237C3Cu;
label_237c3c:
    // 0x237c3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237C3Cu;
    {
        const bool branch_taken_0x237c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C3Cu;
        // 0x237c40: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c3c) {
            ctx->pc = 0x237C54u;
            goto label_237c54;
        }
    }
    ctx->pc = 0x237C44u;
    // 0x237c44: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x237C44u;
    SET_GPR_U32(ctx, 31, 0x237C4Cu);
    ctx->pc = 0x237C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C44u;
    // 0x237c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x237C44u, 0x237C4Cu)) {
        return;
    }
    ctx->pc = 0x237C4Cu;
label_237c4c:
    // 0x237c4c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x237C4Cu;
    {
        const bool branch_taken_0x237c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C4Cu;
        // 0x237c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c4c) {
            ctx->pc = 0x237D84u;
            goto label_237d84;
        }
    }
    ctx->pc = 0x237C54u;
label_237c54:
    // 0x237c54: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x237c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x237c58: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x237c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x237c5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237c60: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x237c60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x237c64: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x237C64u;
    {
        const bool branch_taken_0x237c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C64u;
        // 0x237c68: 0x97a2000e  lhu         $v0, 0xE($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c64) {
            ctx->pc = 0x237D60u;
            goto label_237d60;
        }
    }
    ctx->pc = 0x237C6Cu;
    // 0x237c6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c70: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x237c70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x237c74: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x237C74u;
    {
        const bool branch_taken_0x237c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C74u;
        // 0x237c78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c74) {
            ctx->pc = 0x237CC0u;
            goto label_237cc0;
        }
    }
    ctx->pc = 0x237C7Cu;
    // 0x237c7c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x237c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x237c80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x237c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c84: 0xc093546  jal         func_24D518
    ctx->pc = 0x237C84u;
    SET_GPR_U32(ctx, 31, 0x237C8Cu);
    ctx->pc = 0x237C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C84u;
    // 0x237c88: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x237C84u, 0x237C8Cu)) {
        return;
    }
    ctx->pc = 0x237C8Cu;
label_237c8c:
    // 0x237c8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x237c8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x237c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237c94: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237C94u;
    {
        const bool branch_taken_0x237c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x237c94) {
            ctx->pc = 0x237C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C94u;
            // 0x237c98: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237CACu;
            goto label_237cac;
        }
    }
    ctx->pc = 0x237C9Cu;
    // 0x237c9c: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x237C9Cu;
    SET_GPR_U32(ctx, 31, 0x237CA4u);
    ctx->pc = 0x237CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C9Cu;
    // 0x237ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x237C9Cu, 0x237CA4u)) {
        return;
    }
    ctx->pc = 0x237CA4u;
label_237ca4:
    // 0x237ca4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x237CA4u;
    {
        const bool branch_taken_0x237ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CA4u;
        // 0x237ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ca4) {
            ctx->pc = 0x237D84u;
            goto label_237d84;
        }
    }
    ctx->pc = 0x237CACu;
label_237cac:
    // 0x237cac: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x237cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x237cb0: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x237CB0u;
    SET_GPR_U32(ctx, 31, 0x237CB8u);
    ctx->pc = 0x237CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237CB0u;
    // 0x237cb4: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x237CB0u, 0x237CB8u)) {
        return;
    }
    ctx->pc = 0x237CB8u;
label_237cb8:
    // 0x237cb8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x237CB8u;
    {
        const bool branch_taken_0x237cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CB8u;
        // 0x237cbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cb8) {
            ctx->pc = 0x237D84u;
            goto label_237d84;
        }
    }
    ctx->pc = 0x237CC0u;
label_237cc0:
    // 0x237cc0: 0x14820021  bne         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x237CC0u;
    {
        const bool branch_taken_0x237cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x237CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CC0u;
        // 0x237cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cc0) {
            ctx->pc = 0x237D48u;
            goto label_237d48;
        }
    }
    ctx->pc = 0x237CC8u;
    // 0x237cc8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x237cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x237ccc: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x237cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x237cd0: 0xc093546  jal         func_24D518
    ctx->pc = 0x237CD0u;
    SET_GPR_U32(ctx, 31, 0x237CD8u);
    ctx->pc = 0x237CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237CD0u;
    // 0x237cd4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x237CD0u, 0x237CD8u)) {
        return;
    }
    ctx->pc = 0x237CD8u;
label_237cd8:
    // 0x237cd8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x237cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x237cdc: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x237CDCu;
    {
        const bool branch_taken_0x237cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x237cdc) {
            ctx->pc = 0x237CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237CDCu;
            // 0x237ce0: 0x8e06002c  lw          $a2, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237CF4u;
            goto label_237cf4;
        }
    }
    ctx->pc = 0x237CE4u;
    // 0x237ce4: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x237CE4u;
    SET_GPR_U32(ctx, 31, 0x237CECu);
    ctx->pc = 0x237CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237CE4u;
    // 0x237ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x237CE4u, 0x237CECu)) {
        return;
    }
    ctx->pc = 0x237CECu;
label_237cec:
    // 0x237cec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x237CECu;
    {
        const bool branch_taken_0x237cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CECu;
        // 0x237cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cec) {
            ctx->pc = 0x237D84u;
            goto label_237d84;
        }
    }
    ctx->pc = 0x237CF4u;
label_237cf4:
    // 0x237cf4: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x237CF4u;
    {
        const bool branch_taken_0x237cf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CF4u;
        // 0x237cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cf4) {
            ctx->pc = 0x237D24u;
            goto label_237d24;
        }
    }
    ctx->pc = 0x237CFCu;
    // 0x237cfc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x237cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x237d00: 0xc093546  jal         func_24D518
    ctx->pc = 0x237D00u;
    SET_GPR_U32(ctx, 31, 0x237D08u);
    ctx->pc = 0x237D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D00u;
    // 0x237d04: 0x24a5ffb0  addiu       $a1, $a1, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x237D00u, 0x237D08u)) {
        return;
    }
    ctx->pc = 0x237D08u;
label_237d08:
    // 0x237d08: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x237d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x237d0c: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x237D0Cu;
    {
        const bool branch_taken_0x237d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x237d0c) {
            ctx->pc = 0x237D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237D0Cu;
            // 0x237d10: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237D28u;
            goto label_237d28;
        }
    }
    ctx->pc = 0x237D14u;
    // 0x237d14: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x237D14u;
    SET_GPR_U32(ctx, 31, 0x237D1Cu);
    ctx->pc = 0x237D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D14u;
    // 0x237d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x237D14u, 0x237D1Cu)) {
        return;
    }
    ctx->pc = 0x237D1Cu;
label_237d1c:
    // 0x237d1c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x237D1Cu;
    {
        const bool branch_taken_0x237d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D1Cu;
        // 0x237d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d1c) {
            ctx->pc = 0x237D84u;
            goto label_237d84;
        }
    }
    ctx->pc = 0x237D24u;
label_237d24:
    // 0x237d24: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x237d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_237d28:
    // 0x237d28: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x237d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x237d2c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x237d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x237d30: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x237d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x237d34: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x237d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x237d38: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x237D38u;
    SET_GPR_U32(ctx, 31, 0x237D40u);
    ctx->pc = 0x237D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D38u;
    // 0x237d3c: 0x24a5002f  addiu       $a1, $a1, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x237D38u, 0x237D40u)) {
        return;
    }
    ctx->pc = 0x237D40u;
label_237d40:
    // 0x237d40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x237D40u;
    {
        const bool branch_taken_0x237d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D40u;
        // 0x237d44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d40) {
            ctx->pc = 0x237D58u;
            goto label_237d58;
        }
    }
    ctx->pc = 0x237D48u;
label_237d48:
    // 0x237d48: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x237D48u;
    SET_GPR_U32(ctx, 31, 0x237D50u);
    ctx->pc = 0x237D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D48u;
    // 0x237d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x237D48u, 0x237D50u)) {
        return;
    }
    ctx->pc = 0x237D50u;
label_237d50:
    // 0x237d50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x237D50u;
    {
        const bool branch_taken_0x237d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D50u;
        // 0x237d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d50) {
            ctx->pc = 0x237D84u;
            goto label_237d84;
        }
    }
    ctx->pc = 0x237D58u;
label_237d58:
    // 0x237d58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x237D58u;
    {
        const bool branch_taken_0x237d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D58u;
        // 0x237d5c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d58) {
            ctx->pc = 0x237D88u;
            goto label_237d88;
        }
    }
    ctx->pc = 0x237D60u;
label_237d60:
    // 0x237d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237d64: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x237d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x237d68: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x237d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x237d6c: 0xc092848  jal         func_24A120
    ctx->pc = 0x237D6Cu;
    SET_GPR_U32(ctx, 31, 0x237D74u);
    ctx->pc = 0x237D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D6Cu;
    // 0x237d70: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x237D6Cu, 0x237D74u)) {
        return;
    }
    ctx->pc = 0x237D74u;
label_237d74:
    // 0x237d74: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x237d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x237d78: 0xc09281a  jal         func_24A068
    ctx->pc = 0x237D78u;
    SET_GPR_U32(ctx, 31, 0x237D80u);
    ctx->pc = 0x237D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D78u;
    // 0x237d7c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x237D78u, 0x237D80u)) {
        return;
    }
    ctx->pc = 0x237D80u;
label_237d80:
    // 0x237d80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x237d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237d84:
    // 0x237d84: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x237d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_237d88:
    // 0x237d88: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x237d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x237d8c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x237d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x237d90: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x237d90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x237d94: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x237d94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x237d98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x237d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x237d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x237D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D9Cu;
        // 0x237da0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237DA4u;
    // 0x237da4: 0x0  nop
    ctx->pc = 0x237da4u;
    // NOP
    ctx->pc = 0x237da8u;
}
