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

// Function: sub_00136A08
// Address: 0x136a08 - 0x136cc8
void sub_00136A08_0x136a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136A08_0x136a08");
#endif

    switch (ctx->pc) {
        case 0x136a30u: goto label_136a30;
        case 0x136a3cu: goto label_136a3c;
        case 0x136a48u: goto label_136a48;
        case 0x136a54u: goto label_136a54;
        case 0x136a60u: goto label_136a60;
        case 0x136a6cu: goto label_136a6c;
        case 0x136a78u: goto label_136a78;
        case 0x136a84u: goto label_136a84;
        case 0x136a90u: goto label_136a90;
        case 0x136a9cu: goto label_136a9c;
        case 0x136aa8u: goto label_136aa8;
        case 0x136ab4u: goto label_136ab4;
        case 0x136ac0u: goto label_136ac0;
        case 0x136accu: goto label_136acc;
        case 0x136ad8u: goto label_136ad8;
        case 0x136ae4u: goto label_136ae4;
        case 0x136af0u: goto label_136af0;
        case 0x136afcu: goto label_136afc;
        case 0x136b08u: goto label_136b08;
        case 0x136b14u: goto label_136b14;
        case 0x136b20u: goto label_136b20;
        case 0x136b30u: goto label_136b30;
        case 0x136b54u: goto label_136b54;
        case 0x136b68u: goto label_136b68;
        case 0x136b78u: goto label_136b78;
        case 0x136b88u: goto label_136b88;
        case 0x136b98u: goto label_136b98;
        case 0x136ba8u: goto label_136ba8;
        case 0x136bb8u: goto label_136bb8;
        case 0x136bc8u: goto label_136bc8;
        case 0x136bd8u: goto label_136bd8;
        case 0x136be8u: goto label_136be8;
        case 0x136bf8u: goto label_136bf8;
        case 0x136c08u: goto label_136c08;
        case 0x136c18u: goto label_136c18;
        case 0x136c28u: goto label_136c28;
        case 0x136c38u: goto label_136c38;
        case 0x136c48u: goto label_136c48;
        case 0x136c58u: goto label_136c58;
        case 0x136c68u: goto label_136c68;
        case 0x136c78u: goto label_136c78;
        case 0x136c88u: goto label_136c88;
        case 0x136c98u: goto label_136c98;
        case 0x136ca8u: goto label_136ca8;
        case 0x136cb8u: goto label_136cb8;
        default: break;
    }

    ctx->pc = 0x136a08u;

    // 0x136a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136a0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x136a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x136a10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x136a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x136a14: 0x14a200a8  bne         $a1, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x136A14u;
    {
        const bool branch_taken_0x136a14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x136A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A14u;
        // 0x136a18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a14) {
            ctx->pc = 0x136CB8u;
            goto label_136cb8;
        }
    }
    ctx->pc = 0x136A1Cu;
    // 0x136a1c: 0x5080004f  beql        $a0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x136A1Cu;
    {
        const bool branch_taken_0x136a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a1c) {
            ctx->pc = 0x136A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136A1Cu;
            // 0x136a20: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136B5Cu;
            goto label_136b5c;
        }
    }
    ctx->pc = 0x136A24u;
    // 0x136a24: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136a28: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136A28u;
    SET_GPR_U32(ctx, 31, 0x136A30u);
    ctx->pc = 0x136A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A28u;
    // 0x136a2c: 0x248446a0  addiu       $a0, $a0, 0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136A28u, 0x136A30u)) {
        return;
    }
    ctx->pc = 0x136A30u;
label_136a30:
    // 0x136a30: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136a34: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136A34u;
    SET_GPR_U32(ctx, 31, 0x136A3Cu);
    ctx->pc = 0x136A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A34u;
    // 0x136a38: 0x248446a8  addiu       $a0, $a0, 0x46A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136A34u, 0x136A3Cu)) {
        return;
    }
    ctx->pc = 0x136A3Cu;
label_136a3c:
    // 0x136a3c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136a40: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136A40u;
    SET_GPR_U32(ctx, 31, 0x136A48u);
    ctx->pc = 0x136A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A40u;
    // 0x136a44: 0x248446b0  addiu       $a0, $a0, 0x46B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136A40u, 0x136A48u)) {
        return;
    }
    ctx->pc = 0x136A48u;
label_136a48:
    // 0x136a48: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136a4c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136A4Cu;
    SET_GPR_U32(ctx, 31, 0x136A54u);
    ctx->pc = 0x136A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A4Cu;
    // 0x136a50: 0x248446b8  addiu       $a0, $a0, 0x46B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136A4Cu, 0x136A54u)) {
        return;
    }
    ctx->pc = 0x136A54u;
label_136a54:
    // 0x136a54: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136a58: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136A58u;
    SET_GPR_U32(ctx, 31, 0x136A60u);
    ctx->pc = 0x136A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A58u;
    // 0x136a5c: 0x248446c0  addiu       $a0, $a0, 0x46C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136A58u, 0x136A60u)) {
        return;
    }
    ctx->pc = 0x136A60u;
label_136a60:
    // 0x136a60: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136a64: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136A64u;
    SET_GPR_U32(ctx, 31, 0x136A6Cu);
    ctx->pc = 0x136A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A64u;
    // 0x136a68: 0x248446c8  addiu       $a0, $a0, 0x46C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136A64u, 0x136A6Cu)) {
        return;
    }
    ctx->pc = 0x136A6Cu;
label_136a6c:
    // 0x136a6c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136a70: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136A70u;
    SET_GPR_U32(ctx, 31, 0x136A78u);
    ctx->pc = 0x136A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A70u;
    // 0x136a74: 0x248446d0  addiu       $a0, $a0, 0x46D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136A70u, 0x136A78u)) {
        return;
    }
    ctx->pc = 0x136A78u;
label_136a78:
    // 0x136a78: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136a7c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136A7Cu;
    SET_GPR_U32(ctx, 31, 0x136A84u);
    ctx->pc = 0x136A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A7Cu;
    // 0x136a80: 0x248446d8  addiu       $a0, $a0, 0x46D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136A7Cu, 0x136A84u)) {
        return;
    }
    ctx->pc = 0x136A84u;
label_136a84:
    // 0x136a84: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136a88: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136A88u;
    SET_GPR_U32(ctx, 31, 0x136A90u);
    ctx->pc = 0x136A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A88u;
    // 0x136a8c: 0x248446e0  addiu       $a0, $a0, 0x46E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136A88u, 0x136A90u)) {
        return;
    }
    ctx->pc = 0x136A90u;
label_136a90:
    // 0x136a90: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136a94: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136A94u;
    SET_GPR_U32(ctx, 31, 0x136A9Cu);
    ctx->pc = 0x136A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A94u;
    // 0x136a98: 0x248446e8  addiu       $a0, $a0, 0x46E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136A94u, 0x136A9Cu)) {
        return;
    }
    ctx->pc = 0x136A9Cu;
label_136a9c:
    // 0x136a9c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136aa0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136AA0u;
    SET_GPR_U32(ctx, 31, 0x136AA8u);
    ctx->pc = 0x136AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AA0u;
    // 0x136aa4: 0x248446f0  addiu       $a0, $a0, 0x46F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136AA0u, 0x136AA8u)) {
        return;
    }
    ctx->pc = 0x136AA8u;
label_136aa8:
    // 0x136aa8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136aac: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136AACu;
    SET_GPR_U32(ctx, 31, 0x136AB4u);
    ctx->pc = 0x136AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AACu;
    // 0x136ab0: 0x248446f8  addiu       $a0, $a0, 0x46F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136AACu, 0x136AB4u)) {
        return;
    }
    ctx->pc = 0x136AB4u;
label_136ab4:
    // 0x136ab4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136ab8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136AB8u;
    SET_GPR_U32(ctx, 31, 0x136AC0u);
    ctx->pc = 0x136ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AB8u;
    // 0x136abc: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136AB8u, 0x136AC0u)) {
        return;
    }
    ctx->pc = 0x136AC0u;
label_136ac0:
    // 0x136ac0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136ac4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136AC4u;
    SET_GPR_U32(ctx, 31, 0x136ACCu);
    ctx->pc = 0x136AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AC4u;
    // 0x136ac8: 0x24844708  addiu       $a0, $a0, 0x4708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136AC4u, 0x136ACCu)) {
        return;
    }
    ctx->pc = 0x136ACCu;
label_136acc:
    // 0x136acc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136ad0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136AD0u;
    SET_GPR_U32(ctx, 31, 0x136AD8u);
    ctx->pc = 0x136AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AD0u;
    // 0x136ad4: 0x24844710  addiu       $a0, $a0, 0x4710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136AD0u, 0x136AD8u)) {
        return;
    }
    ctx->pc = 0x136AD8u;
label_136ad8:
    // 0x136ad8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136adc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136ADCu;
    SET_GPR_U32(ctx, 31, 0x136AE4u);
    ctx->pc = 0x136AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136ADCu;
    // 0x136ae0: 0x24844718  addiu       $a0, $a0, 0x4718 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136ADCu, 0x136AE4u)) {
        return;
    }
    ctx->pc = 0x136AE4u;
label_136ae4:
    // 0x136ae4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136ae8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136AE8u;
    SET_GPR_U32(ctx, 31, 0x136AF0u);
    ctx->pc = 0x136AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AE8u;
    // 0x136aec: 0x24844720  addiu       $a0, $a0, 0x4720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136AE8u, 0x136AF0u)) {
        return;
    }
    ctx->pc = 0x136AF0u;
label_136af0:
    // 0x136af0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136af4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136AF4u;
    SET_GPR_U32(ctx, 31, 0x136AFCu);
    ctx->pc = 0x136AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AF4u;
    // 0x136af8: 0x24844728  addiu       $a0, $a0, 0x4728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136AF4u, 0x136AFCu)) {
        return;
    }
    ctx->pc = 0x136AFCu;
label_136afc:
    // 0x136afc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136b00: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136B00u;
    SET_GPR_U32(ctx, 31, 0x136B08u);
    ctx->pc = 0x136B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B00u;
    // 0x136b04: 0x24844730  addiu       $a0, $a0, 0x4730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136B00u, 0x136B08u)) {
        return;
    }
    ctx->pc = 0x136B08u;
label_136b08:
    // 0x136b08: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136b0c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136B0Cu;
    SET_GPR_U32(ctx, 31, 0x136B14u);
    ctx->pc = 0x136B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B0Cu;
    // 0x136b10: 0x24844738  addiu       $a0, $a0, 0x4738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136B0Cu, 0x136B14u)) {
        return;
    }
    ctx->pc = 0x136B14u;
label_136b14:
    // 0x136b14: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136b18: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x136B18u;
    SET_GPR_U32(ctx, 31, 0x136B20u);
    ctx->pc = 0x136B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B18u;
    // 0x136b1c: 0x24844740  addiu       $a0, $a0, 0x4740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x136B18u, 0x136B20u)) {
        return;
    }
    ctx->pc = 0x136B20u;
label_136b20:
    // 0x136b20: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x136b20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x136b24: 0x2610e418  addiu       $s0, $s0, -0x1BE8
    ctx->pc = 0x136b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960152));
    // 0x136b28: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x136B28u;
    SET_GPR_U32(ctx, 31, 0x136B30u);
    ctx->pc = 0x136B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B28u;
    // 0x136b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x136B28u, 0x136B30u)) {
        return;
    }
    ctx->pc = 0x136B30u;
label_136b30:
    // 0x136b30: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x136b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x136b34: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136b38: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x136b38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x136b3c: 0xac624748  sw          $v0, 0x4748($v1)
    ctx->pc = 0x136b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4748u, _value); } while (0);
    // 0x136b40: 0x24844750  addiu       $a0, $a0, 0x4750
    ctx->pc = 0x136b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18256));
    // 0x136b44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b48: 0x24c66cc8  addiu       $a2, $a2, 0x6CC8
    ctx->pc = 0x136b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27848));
    // 0x136b4c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x136B4Cu;
    SET_GPR_U32(ctx, 31, 0x136B54u);
    ctx->pc = 0x136B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B4Cu;
    // 0x136b50: 0x24071bf0  addiu       $a3, $zero, 0x1BF0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x136B4Cu, 0x136B54u)) {
        return;
    }
    ctx->pc = 0x136B54u;
label_136b54:
    // 0x136b54: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x136B54u;
    {
        const bool branch_taken_0x136b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B54u;
        // 0x136b58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b54) {
            ctx->pc = 0x136CBCu;
            goto label_136cbc;
        }
    }
    ctx->pc = 0x136B5Cu;
label_136b5c:
    // 0x136b5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136b60: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x136B60u;
    SET_GPR_U32(ctx, 31, 0x136B68u);
    ctx->pc = 0x136B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B60u;
    // 0x136b64: 0x24844750  addiu       $a0, $a0, 0x4750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x136B60u, 0x136B68u)) {
        return;
    }
    ctx->pc = 0x136B68u;
label_136b68:
    // 0x136b68: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136b6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136b70: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136B70u;
    SET_GPR_U32(ctx, 31, 0x136B78u);
    ctx->pc = 0x136B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B70u;
    // 0x136b74: 0x24844740  addiu       $a0, $a0, 0x4740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136B70u, 0x136B78u)) {
        return;
    }
    ctx->pc = 0x136B78u;
label_136b78:
    // 0x136b78: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136b7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136b80: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136B80u;
    SET_GPR_U32(ctx, 31, 0x136B88u);
    ctx->pc = 0x136B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B80u;
    // 0x136b84: 0x24844738  addiu       $a0, $a0, 0x4738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136B80u, 0x136B88u)) {
        return;
    }
    ctx->pc = 0x136B88u;
label_136b88:
    // 0x136b88: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136b8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136b90: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136B90u;
    SET_GPR_U32(ctx, 31, 0x136B98u);
    ctx->pc = 0x136B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B90u;
    // 0x136b94: 0x24844730  addiu       $a0, $a0, 0x4730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136B90u, 0x136B98u)) {
        return;
    }
    ctx->pc = 0x136B98u;
label_136b98:
    // 0x136b98: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136b9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136ba0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136BA0u;
    SET_GPR_U32(ctx, 31, 0x136BA8u);
    ctx->pc = 0x136BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BA0u;
    // 0x136ba4: 0x24844728  addiu       $a0, $a0, 0x4728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136BA0u, 0x136BA8u)) {
        return;
    }
    ctx->pc = 0x136BA8u;
label_136ba8:
    // 0x136ba8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136bac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136bb0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136BB0u;
    SET_GPR_U32(ctx, 31, 0x136BB8u);
    ctx->pc = 0x136BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BB0u;
    // 0x136bb4: 0x24844720  addiu       $a0, $a0, 0x4720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136BB0u, 0x136BB8u)) {
        return;
    }
    ctx->pc = 0x136BB8u;
label_136bb8:
    // 0x136bb8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136bbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136bc0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136BC0u;
    SET_GPR_U32(ctx, 31, 0x136BC8u);
    ctx->pc = 0x136BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BC0u;
    // 0x136bc4: 0x24844718  addiu       $a0, $a0, 0x4718 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136BC0u, 0x136BC8u)) {
        return;
    }
    ctx->pc = 0x136BC8u;
label_136bc8:
    // 0x136bc8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136bcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136bd0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136BD0u;
    SET_GPR_U32(ctx, 31, 0x136BD8u);
    ctx->pc = 0x136BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BD0u;
    // 0x136bd4: 0x24844710  addiu       $a0, $a0, 0x4710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136BD0u, 0x136BD8u)) {
        return;
    }
    ctx->pc = 0x136BD8u;
label_136bd8:
    // 0x136bd8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136bdc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136be0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136BE0u;
    SET_GPR_U32(ctx, 31, 0x136BE8u);
    ctx->pc = 0x136BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BE0u;
    // 0x136be4: 0x24844708  addiu       $a0, $a0, 0x4708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136BE0u, 0x136BE8u)) {
        return;
    }
    ctx->pc = 0x136BE8u;
label_136be8:
    // 0x136be8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136bec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136bf0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136BF0u;
    SET_GPR_U32(ctx, 31, 0x136BF8u);
    ctx->pc = 0x136BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BF0u;
    // 0x136bf4: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136BF0u, 0x136BF8u)) {
        return;
    }
    ctx->pc = 0x136BF8u;
label_136bf8:
    // 0x136bf8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136bfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136c00: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136C00u;
    SET_GPR_U32(ctx, 31, 0x136C08u);
    ctx->pc = 0x136C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C00u;
    // 0x136c04: 0x248446f8  addiu       $a0, $a0, 0x46F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136C00u, 0x136C08u)) {
        return;
    }
    ctx->pc = 0x136C08u;
label_136c08:
    // 0x136c08: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136c0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136c10: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136C10u;
    SET_GPR_U32(ctx, 31, 0x136C18u);
    ctx->pc = 0x136C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C10u;
    // 0x136c14: 0x248446f0  addiu       $a0, $a0, 0x46F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136C10u, 0x136C18u)) {
        return;
    }
    ctx->pc = 0x136C18u;
label_136c18:
    // 0x136c18: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136c1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136c20: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136C20u;
    SET_GPR_U32(ctx, 31, 0x136C28u);
    ctx->pc = 0x136C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C20u;
    // 0x136c24: 0x248446e8  addiu       $a0, $a0, 0x46E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136C20u, 0x136C28u)) {
        return;
    }
    ctx->pc = 0x136C28u;
label_136c28:
    // 0x136c28: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136c2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136c30: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136C30u;
    SET_GPR_U32(ctx, 31, 0x136C38u);
    ctx->pc = 0x136C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C30u;
    // 0x136c34: 0x248446e0  addiu       $a0, $a0, 0x46E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136C30u, 0x136C38u)) {
        return;
    }
    ctx->pc = 0x136C38u;
label_136c38:
    // 0x136c38: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136c3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136c40: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136C40u;
    SET_GPR_U32(ctx, 31, 0x136C48u);
    ctx->pc = 0x136C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C40u;
    // 0x136c44: 0x248446d8  addiu       $a0, $a0, 0x46D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136C40u, 0x136C48u)) {
        return;
    }
    ctx->pc = 0x136C48u;
label_136c48:
    // 0x136c48: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136c4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136c50: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136C50u;
    SET_GPR_U32(ctx, 31, 0x136C58u);
    ctx->pc = 0x136C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C50u;
    // 0x136c54: 0x248446d0  addiu       $a0, $a0, 0x46D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136C50u, 0x136C58u)) {
        return;
    }
    ctx->pc = 0x136C58u;
label_136c58:
    // 0x136c58: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136c5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136c60: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136C60u;
    SET_GPR_U32(ctx, 31, 0x136C68u);
    ctx->pc = 0x136C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C60u;
    // 0x136c64: 0x248446c8  addiu       $a0, $a0, 0x46C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136C60u, 0x136C68u)) {
        return;
    }
    ctx->pc = 0x136C68u;
label_136c68:
    // 0x136c68: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136c6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136c70: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136C70u;
    SET_GPR_U32(ctx, 31, 0x136C78u);
    ctx->pc = 0x136C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C70u;
    // 0x136c74: 0x248446c0  addiu       $a0, $a0, 0x46C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136C70u, 0x136C78u)) {
        return;
    }
    ctx->pc = 0x136C78u;
label_136c78:
    // 0x136c78: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136c7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136c80: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136C80u;
    SET_GPR_U32(ctx, 31, 0x136C88u);
    ctx->pc = 0x136C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C80u;
    // 0x136c84: 0x248446b8  addiu       $a0, $a0, 0x46B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136C80u, 0x136C88u)) {
        return;
    }
    ctx->pc = 0x136C88u;
label_136c88:
    // 0x136c88: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136c8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136c90: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136C90u;
    SET_GPR_U32(ctx, 31, 0x136C98u);
    ctx->pc = 0x136C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C90u;
    // 0x136c94: 0x248446b0  addiu       $a0, $a0, 0x46B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136C90u, 0x136C98u)) {
        return;
    }
    ctx->pc = 0x136C98u;
label_136c98:
    // 0x136c98: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136c9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136ca0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136CA0u;
    SET_GPR_U32(ctx, 31, 0x136CA8u);
    ctx->pc = 0x136CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CA0u;
    // 0x136ca4: 0x248446a8  addiu       $a0, $a0, 0x46A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136CA0u, 0x136CA8u)) {
        return;
    }
    ctx->pc = 0x136CA8u;
label_136ca8:
    // 0x136ca8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136cac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136cb0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x136CB0u;
    SET_GPR_U32(ctx, 31, 0x136CB8u);
    ctx->pc = 0x136CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CB0u;
    // 0x136cb4: 0x248446a0  addiu       $a0, $a0, 0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x136CB0u, 0x136CB8u)) {
        return;
    }
    ctx->pc = 0x136CB8u;
label_136cb8:
    // 0x136cb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x136cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_136cbc:
    // 0x136cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x136CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CC0u;
        // 0x136cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136CC8u;
}
