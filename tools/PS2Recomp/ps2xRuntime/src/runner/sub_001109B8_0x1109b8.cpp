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

// Function: sub_001109B8
// Address: 0x1109b8 - 0x110d58
void sub_001109B8_0x1109b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001109B8_0x1109b8");
#endif

    switch (ctx->pc) {
        case 0x1109d4u: goto label_1109d4;
        case 0x1109f8u: goto label_1109f8;
        case 0x110a10u: goto label_110a10;
        case 0x110a44u: goto label_110a44;
        case 0x110a5cu: goto label_110a5c;
        case 0x110a74u: goto label_110a74;
        case 0x110a8cu: goto label_110a8c;
        case 0x110aa4u: goto label_110aa4;
        case 0x110abcu: goto label_110abc;
        case 0x110ad4u: goto label_110ad4;
        case 0x110aecu: goto label_110aec;
        case 0x110b04u: goto label_110b04;
        case 0x110b1cu: goto label_110b1c;
        case 0x110b34u: goto label_110b34;
        case 0x110b4cu: goto label_110b4c;
        case 0x110b64u: goto label_110b64;
        case 0x110b7cu: goto label_110b7c;
        case 0x110b94u: goto label_110b94;
        case 0x110bacu: goto label_110bac;
        case 0x110bc4u: goto label_110bc4;
        case 0x110bdcu: goto label_110bdc;
        case 0x110bf4u: goto label_110bf4;
        case 0x110c0cu: goto label_110c0c;
        case 0x110c24u: goto label_110c24;
        case 0x110c3cu: goto label_110c3c;
        case 0x110c54u: goto label_110c54;
        case 0x110c6cu: goto label_110c6c;
        case 0x110c84u: goto label_110c84;
        case 0x110c9cu: goto label_110c9c;
        case 0x110cb4u: goto label_110cb4;
        case 0x110cccu: goto label_110ccc;
        case 0x110ce4u: goto label_110ce4;
        case 0x110cfcu: goto label_110cfc;
        case 0x110d14u: goto label_110d14;
        case 0x110d34u: goto label_110d34;
        default: break;
    }

    ctx->pc = 0x1109b8u;

    // 0x1109b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1109b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1109bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1109bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1109c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1109c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1109c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1109c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1109c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1109cc: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x1109CCu;
    SET_GPR_U32(ctx, 31, 0x1109D4u);
    ctx->pc = 0x1109D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1109CCu;
    // 0x1109d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x1109CCu, 0x1109D4u)) {
        return;
    }
    ctx->pc = 0x1109D4u;
label_1109d4:
    // 0x1109d4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1109d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1109d8: 0x8c438304  lw          $v1, -0x7CFC($v0)
    ctx->pc = 0x1109d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338304u));
    // 0x1109dc: 0x547000da  bnel        $v1, $s0, . + 4 + (0xDA << 2)
    ctx->pc = 0x1109DCu;
    {
        const bool branch_taken_0x1109dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1109dc) {
            ctx->pc = 0x1109E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1109DCu;
            // 0x1109e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110D48u;
            goto label_110d48;
        }
    }
    ctx->pc = 0x1109E4u;
    // 0x1109e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1109e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1109e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1109e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109ec: 0x8c464498  lw          $a2, 0x4498($v0)
    ctx->pc = 0x1109ecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4498u));
    // 0x1109f0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1109F0u;
    SET_GPR_U32(ctx, 31, 0x1109F8u);
    ctx->pc = 0x1109F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1109F0u;
    // 0x1109f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1109F0u, 0x1109F8u)) {
        return;
    }
    ctx->pc = 0x1109F8u;
label_1109f8:
    // 0x1109f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1109f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1109fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1109fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110a00: 0x504000d1  beql        $v0, $zero, . + 4 + (0xD1 << 2)
    ctx->pc = 0x110A00u;
    {
        const bool branch_taken_0x110a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110a00) {
            ctx->pc = 0x110A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110A00u;
            // 0x110a04: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110D48u;
            goto label_110d48;
        }
    }
    ctx->pc = 0x110A08u;
    // 0x110a08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x110a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110a0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x110a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_110a10:
    // 0x110a10: 0x2c83001f  sltiu       $v1, $a0, 0x1F
    ctx->pc = 0x110a10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x110a14: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x110A14u;
    {
        const bool branch_taken_0x110a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A14u;
        // 0x110a18: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a14) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110A1Cu;
    // 0x110a1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x110a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x110a20: 0x2442a630  addiu       $v0, $v0, -0x59D0
    ctx->pc = 0x110a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x110a24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x110a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x110a28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x110a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110a2c: 0x800008  jr          $a0
    ctx->pc = 0x110A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110A34u: goto label_110a34;
            case 0x110A4Cu: goto label_110a4c;
            case 0x110A64u: goto label_110a64;
            case 0x110A7Cu: goto label_110a7c;
            case 0x110A94u: goto label_110a94;
            case 0x110AACu: goto label_110aac;
            case 0x110AC4u: goto label_110ac4;
            case 0x110ADCu: goto label_110adc;
            case 0x110AF4u: goto label_110af4;
            case 0x110B0Cu: goto label_110b0c;
            case 0x110B24u: goto label_110b24;
            case 0x110B3Cu: goto label_110b3c;
            case 0x110B54u: goto label_110b54;
            case 0x110B6Cu: goto label_110b6c;
            case 0x110B84u: goto label_110b84;
            case 0x110B9Cu: goto label_110b9c;
            case 0x110BB4u: goto label_110bb4;
            case 0x110BCCu: goto label_110bcc;
            case 0x110BE4u: goto label_110be4;
            case 0x110BFCu: goto label_110bfc;
            case 0x110C14u: goto label_110c14;
            case 0x110C2Cu: goto label_110c2c;
            case 0x110C44u: goto label_110c44;
            case 0x110C5Cu: goto label_110c5c;
            case 0x110C74u: goto label_110c74;
            case 0x110C8Cu: goto label_110c8c;
            case 0x110CA4u: goto label_110ca4;
            case 0x110CBCu: goto label_110cbc;
            case 0x110CD4u: goto label_110cd4;
            case 0x110CECu: goto label_110cec;
            case 0x110D04u: goto label_110d04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x110A34u;
label_110a34:
    // 0x110a34: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110a38: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110a3c: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110A3Cu;
    SET_GPR_U32(ctx, 31, 0x110A44u);
    ctx->pc = 0x110A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A3Cu;
    // 0x110a40: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110A3Cu, 0x110A44u)) {
        return;
    }
    ctx->pc = 0x110A44u;
label_110a44:
    // 0x110a44: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x110A44u;
    {
        const bool branch_taken_0x110a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A44u;
        // 0x110a48: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a44) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110A4Cu;
label_110a4c:
    // 0x110a4c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110a50: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110a54: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110A54u;
    SET_GPR_U32(ctx, 31, 0x110A5Cu);
    ctx->pc = 0x110A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A54u;
    // 0x110a58: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110A54u, 0x110A5Cu)) {
        return;
    }
    ctx->pc = 0x110A5Cu;
label_110a5c:
    // 0x110a5c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x110A5Cu;
    {
        const bool branch_taken_0x110a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A5Cu;
        // 0x110a60: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a5c) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110A64u;
label_110a64:
    // 0x110a64: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110a68: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110a6c: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110A6Cu;
    SET_GPR_U32(ctx, 31, 0x110A74u);
    ctx->pc = 0x110A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A6Cu;
    // 0x110a70: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110A6Cu, 0x110A74u)) {
        return;
    }
    ctx->pc = 0x110A74u;
label_110a74:
    // 0x110a74: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x110A74u;
    {
        const bool branch_taken_0x110a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A74u;
        // 0x110a78: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a74) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110A7Cu;
label_110a7c:
    // 0x110a7c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110a80: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110a84: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110A84u;
    SET_GPR_U32(ctx, 31, 0x110A8Cu);
    ctx->pc = 0x110A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A84u;
    // 0x110a88: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110A84u, 0x110A8Cu)) {
        return;
    }
    ctx->pc = 0x110A8Cu;
label_110a8c:
    // 0x110a8c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x110A8Cu;
    {
        const bool branch_taken_0x110a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A8Cu;
        // 0x110a90: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a8c) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110A94u;
label_110a94:
    // 0x110a94: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110a98: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110a9c: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110A9Cu;
    SET_GPR_U32(ctx, 31, 0x110AA4u);
    ctx->pc = 0x110AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A9Cu;
    // 0x110aa0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110A9Cu, 0x110AA4u)) {
        return;
    }
    ctx->pc = 0x110AA4u;
label_110aa4:
    // 0x110aa4: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x110AA4u;
    {
        const bool branch_taken_0x110aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AA4u;
        // 0x110aa8: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110aa4) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110AACu;
label_110aac:
    // 0x110aac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110ab0: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110ab4: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110AB4u;
    SET_GPR_U32(ctx, 31, 0x110ABCu);
    ctx->pc = 0x110AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110AB4u;
    // 0x110ab8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110AB4u, 0x110ABCu)) {
        return;
    }
    ctx->pc = 0x110ABCu;
label_110abc:
    // 0x110abc: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x110ABCu;
    {
        const bool branch_taken_0x110abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ABCu;
        // 0x110ac0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110abc) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110AC4u;
label_110ac4:
    // 0x110ac4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110ac8: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110acc: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110ACCu;
    SET_GPR_U32(ctx, 31, 0x110AD4u);
    ctx->pc = 0x110AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110ACCu;
    // 0x110ad0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110ACCu, 0x110AD4u)) {
        return;
    }
    ctx->pc = 0x110AD4u;
label_110ad4:
    // 0x110ad4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x110AD4u;
    {
        const bool branch_taken_0x110ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AD4u;
        // 0x110ad8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ad4) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110ADCu;
label_110adc:
    // 0x110adc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110ae0: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110ae4: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110AE4u;
    SET_GPR_U32(ctx, 31, 0x110AECu);
    ctx->pc = 0x110AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110AE4u;
    // 0x110ae8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110AE4u, 0x110AECu)) {
        return;
    }
    ctx->pc = 0x110AECu;
label_110aec:
    // 0x110aec: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x110AECu;
    {
        const bool branch_taken_0x110aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AECu;
        // 0x110af0: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110aec) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110AF4u;
label_110af4:
    // 0x110af4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110af8: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110afc: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110AFCu;
    SET_GPR_U32(ctx, 31, 0x110B04u);
    ctx->pc = 0x110B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110AFCu;
    // 0x110b00: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110AFCu, 0x110B04u)) {
        return;
    }
    ctx->pc = 0x110B04u;
label_110b04:
    // 0x110b04: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x110B04u;
    {
        const bool branch_taken_0x110b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B04u;
        // 0x110b08: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b04) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110B0Cu;
label_110b0c:
    // 0x110b0c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110b10: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110b14: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110B14u;
    SET_GPR_U32(ctx, 31, 0x110B1Cu);
    ctx->pc = 0x110B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B14u;
    // 0x110b18: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110B14u, 0x110B1Cu)) {
        return;
    }
    ctx->pc = 0x110B1Cu;
label_110b1c:
    // 0x110b1c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x110B1Cu;
    {
        const bool branch_taken_0x110b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B1Cu;
        // 0x110b20: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b1c) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110B24u;
label_110b24:
    // 0x110b24: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110b28: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110b2c: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110B2Cu;
    SET_GPR_U32(ctx, 31, 0x110B34u);
    ctx->pc = 0x110B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B2Cu;
    // 0x110b30: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110B2Cu, 0x110B34u)) {
        return;
    }
    ctx->pc = 0x110B34u;
label_110b34:
    // 0x110b34: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x110B34u;
    {
        const bool branch_taken_0x110b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B34u;
        // 0x110b38: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b34) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110B3Cu;
label_110b3c:
    // 0x110b3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110b40: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110b44: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110B44u;
    SET_GPR_U32(ctx, 31, 0x110B4Cu);
    ctx->pc = 0x110B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B44u;
    // 0x110b48: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110B44u, 0x110B4Cu)) {
        return;
    }
    ctx->pc = 0x110B4Cu;
label_110b4c:
    // 0x110b4c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x110B4Cu;
    {
        const bool branch_taken_0x110b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B4Cu;
        // 0x110b50: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b4c) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110B54u;
label_110b54:
    // 0x110b54: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110b58: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110b5c: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110B5Cu;
    SET_GPR_U32(ctx, 31, 0x110B64u);
    ctx->pc = 0x110B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B5Cu;
    // 0x110b60: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110B5Cu, 0x110B64u)) {
        return;
    }
    ctx->pc = 0x110B64u;
label_110b64:
    // 0x110b64: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x110B64u;
    {
        const bool branch_taken_0x110b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B64u;
        // 0x110b68: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b64) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110B6Cu;
label_110b6c:
    // 0x110b6c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110b70: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110b74: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110B74u;
    SET_GPR_U32(ctx, 31, 0x110B7Cu);
    ctx->pc = 0x110B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B74u;
    // 0x110b78: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110B74u, 0x110B7Cu)) {
        return;
    }
    ctx->pc = 0x110B7Cu;
label_110b7c:
    // 0x110b7c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x110B7Cu;
    {
        const bool branch_taken_0x110b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B7Cu;
        // 0x110b80: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b7c) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110B84u;
label_110b84:
    // 0x110b84: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110b88: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110b8c: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110B8Cu;
    SET_GPR_U32(ctx, 31, 0x110B94u);
    ctx->pc = 0x110B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B8Cu;
    // 0x110b90: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110B8Cu, 0x110B94u)) {
        return;
    }
    ctx->pc = 0x110B94u;
label_110b94:
    // 0x110b94: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x110B94u;
    {
        const bool branch_taken_0x110b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B94u;
        // 0x110b98: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b94) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110B9Cu;
label_110b9c:
    // 0x110b9c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110ba0: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110ba4: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110BA4u;
    SET_GPR_U32(ctx, 31, 0x110BACu);
    ctx->pc = 0x110BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BA4u;
    // 0x110ba8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110BA4u, 0x110BACu)) {
        return;
    }
    ctx->pc = 0x110BACu;
label_110bac:
    // 0x110bac: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x110BACu;
    {
        const bool branch_taken_0x110bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BACu;
        // 0x110bb0: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bac) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110BB4u;
label_110bb4:
    // 0x110bb4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110bb8: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110bbc: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110BBCu;
    SET_GPR_U32(ctx, 31, 0x110BC4u);
    ctx->pc = 0x110BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BBCu;
    // 0x110bc0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110BBCu, 0x110BC4u)) {
        return;
    }
    ctx->pc = 0x110BC4u;
label_110bc4:
    // 0x110bc4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x110BC4u;
    {
        const bool branch_taken_0x110bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BC4u;
        // 0x110bc8: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bc4) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110BCCu;
label_110bcc:
    // 0x110bcc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110bd0: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110bd4: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110BD4u;
    SET_GPR_U32(ctx, 31, 0x110BDCu);
    ctx->pc = 0x110BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BD4u;
    // 0x110bd8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110BD4u, 0x110BDCu)) {
        return;
    }
    ctx->pc = 0x110BDCu;
label_110bdc:
    // 0x110bdc: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x110BDCu;
    {
        const bool branch_taken_0x110bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BDCu;
        // 0x110be0: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bdc) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110BE4u;
label_110be4:
    // 0x110be4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110be8: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110bec: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110BECu;
    SET_GPR_U32(ctx, 31, 0x110BF4u);
    ctx->pc = 0x110BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BECu;
    // 0x110bf0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110BECu, 0x110BF4u)) {
        return;
    }
    ctx->pc = 0x110BF4u;
label_110bf4:
    // 0x110bf4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x110BF4u;
    {
        const bool branch_taken_0x110bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BF4u;
        // 0x110bf8: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bf4) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110BFCu;
label_110bfc:
    // 0x110bfc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c00: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110c04: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110C04u;
    SET_GPR_U32(ctx, 31, 0x110C0Cu);
    ctx->pc = 0x110C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C04u;
    // 0x110c08: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110C04u, 0x110C0Cu)) {
        return;
    }
    ctx->pc = 0x110C0Cu;
label_110c0c:
    // 0x110c0c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x110C0Cu;
    {
        const bool branch_taken_0x110c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C0Cu;
        // 0x110c10: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c0c) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110C14u;
label_110c14:
    // 0x110c14: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c18: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110c1c: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110C1Cu;
    SET_GPR_U32(ctx, 31, 0x110C24u);
    ctx->pc = 0x110C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C1Cu;
    // 0x110c20: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110C1Cu, 0x110C24u)) {
        return;
    }
    ctx->pc = 0x110C24u;
label_110c24:
    // 0x110c24: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x110C24u;
    {
        const bool branch_taken_0x110c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C24u;
        // 0x110c28: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c24) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110C2Cu;
label_110c2c:
    // 0x110c2c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c30: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110c34: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110C34u;
    SET_GPR_U32(ctx, 31, 0x110C3Cu);
    ctx->pc = 0x110C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C34u;
    // 0x110c38: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110C34u, 0x110C3Cu)) {
        return;
    }
    ctx->pc = 0x110C3Cu;
label_110c3c:
    // 0x110c3c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x110C3Cu;
    {
        const bool branch_taken_0x110c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C3Cu;
        // 0x110c40: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c3c) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110C44u;
label_110c44:
    // 0x110c44: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c48: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110c4c: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110C4Cu;
    SET_GPR_U32(ctx, 31, 0x110C54u);
    ctx->pc = 0x110C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C4Cu;
    // 0x110c50: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110C4Cu, 0x110C54u)) {
        return;
    }
    ctx->pc = 0x110C54u;
label_110c54:
    // 0x110c54: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x110C54u;
    {
        const bool branch_taken_0x110c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C54u;
        // 0x110c58: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c54) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110C5Cu;
label_110c5c:
    // 0x110c5c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c60: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110c64: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110C64u;
    SET_GPR_U32(ctx, 31, 0x110C6Cu);
    ctx->pc = 0x110C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C64u;
    // 0x110c68: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110C64u, 0x110C6Cu)) {
        return;
    }
    ctx->pc = 0x110C6Cu;
label_110c6c:
    // 0x110c6c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x110C6Cu;
    {
        const bool branch_taken_0x110c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C6Cu;
        // 0x110c70: 0xae0200ac  sw          $v0, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c6c) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110C74u;
label_110c74:
    // 0x110c74: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c78: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110c7c: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110C7Cu;
    SET_GPR_U32(ctx, 31, 0x110C84u);
    ctx->pc = 0x110C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C7Cu;
    // 0x110c80: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110C7Cu, 0x110C84u)) {
        return;
    }
    ctx->pc = 0x110C84u;
label_110c84:
    // 0x110c84: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x110C84u;
    {
        const bool branch_taken_0x110c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C84u;
        // 0x110c88: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c84) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110C8Cu;
label_110c8c:
    // 0x110c8c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c90: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110c94: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110C94u;
    SET_GPR_U32(ctx, 31, 0x110C9Cu);
    ctx->pc = 0x110C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C94u;
    // 0x110c98: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110C94u, 0x110C9Cu)) {
        return;
    }
    ctx->pc = 0x110C9Cu;
label_110c9c:
    // 0x110c9c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x110C9Cu;
    {
        const bool branch_taken_0x110c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C9Cu;
        // 0x110ca0: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c9c) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110CA4u;
label_110ca4:
    // 0x110ca4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110ca8: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110cac: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110CACu;
    SET_GPR_U32(ctx, 31, 0x110CB4u);
    ctx->pc = 0x110CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CACu;
    // 0x110cb0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110CACu, 0x110CB4u)) {
        return;
    }
    ctx->pc = 0x110CB4u;
label_110cb4:
    // 0x110cb4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x110CB4u;
    {
        const bool branch_taken_0x110cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CB4u;
        // 0x110cb8: 0xae0200b8  sw          $v0, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110cb4) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110CBCu;
label_110cbc:
    // 0x110cbc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110cc0: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110cc4: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110CC4u;
    SET_GPR_U32(ctx, 31, 0x110CCCu);
    ctx->pc = 0x110CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CC4u;
    // 0x110cc8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110CC4u, 0x110CCCu)) {
        return;
    }
    ctx->pc = 0x110CCCu;
label_110ccc:
    // 0x110ccc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x110CCCu;
    {
        const bool branch_taken_0x110ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CCCu;
        // 0x110cd0: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ccc) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110CD4u;
label_110cd4:
    // 0x110cd4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110cd8: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110cdc: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110CDCu;
    SET_GPR_U32(ctx, 31, 0x110CE4u);
    ctx->pc = 0x110CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CDCu;
    // 0x110ce0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110CDCu, 0x110CE4u)) {
        return;
    }
    ctx->pc = 0x110CE4u;
label_110ce4:
    // 0x110ce4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x110CE4u;
    {
        const bool branch_taken_0x110ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CE4u;
        // 0x110ce8: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ce4) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110CECu;
label_110cec:
    // 0x110cec: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110cf0: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110cf4: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110CF4u;
    SET_GPR_U32(ctx, 31, 0x110CFCu);
    ctx->pc = 0x110CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CF4u;
    // 0x110cf8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110CF4u, 0x110CFCu)) {
        return;
    }
    ctx->pc = 0x110CFCu;
label_110cfc:
    // 0x110cfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x110CFCu;
    {
        const bool branch_taken_0x110cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CFCu;
        // 0x110d00: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110cfc) {
            ctx->pc = 0x110D18u;
            goto label_110d18;
        }
    }
    ctx->pc = 0x110D04u;
label_110d04:
    // 0x110d04: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x110d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110d08: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x110d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x110d0c: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x110D0Cu;
    SET_GPR_U32(ctx, 31, 0x110D14u);
    ctx->pc = 0x110D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D0Cu;
    // 0x110d10: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x110D0Cu, 0x110D14u)) {
        return;
    }
    ctx->pc = 0x110D14u;
label_110d14:
    // 0x110d14: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x110d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_110d18:
    // 0x110d18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x110d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110d1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x110d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x110d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110d24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x110d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110d28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x110d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x110d2c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x110D2Cu;
    SET_GPR_U32(ctx, 31, 0x110D34u);
    ctx->pc = 0x110D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D2Cu;
    // 0x110d30: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x110D2Cu, 0x110D34u)) {
        return;
    }
    ctx->pc = 0x110D34u;
label_110d34:
    // 0x110d34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x110d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110d38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x110d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110d3c: 0x5460ff34  bnel        $v1, $zero, . + 4 + (-0xCC << 2)
    ctx->pc = 0x110D3Cu;
    {
        const bool branch_taken_0x110d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x110d3c) {
            ctx->pc = 0x110D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110D3Cu;
            // 0x110d40: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110a10;
        }
    }
    ctx->pc = 0x110D44u;
    // 0x110d44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x110d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_110d48:
    // 0x110d48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x110d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110d50: 0x3e00008  jr          $ra
    ctx->pc = 0x110D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D50u;
        // 0x110d54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110D58u;
}
