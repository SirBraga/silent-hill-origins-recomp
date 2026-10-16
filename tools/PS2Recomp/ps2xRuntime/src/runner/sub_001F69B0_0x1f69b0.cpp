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

// Function: sub_001F69B0
// Address: 0x1f69b0 - 0x1f6aa8
void sub_001F69B0_0x1f69b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F69B0_0x1f69b0");
#endif

    switch (ctx->pc) {
        case 0x1f69c8u: goto label_1f69c8;
        case 0x1f69d8u: goto label_1f69d8;
        case 0x1f69f0u: goto label_1f69f0;
        case 0x1f69f8u: goto label_1f69f8;
        case 0x1f6a0cu: goto label_1f6a0c;
        case 0x1f6a20u: goto label_1f6a20;
        case 0x1f6a2cu: goto label_1f6a2c;
        case 0x1f6a38u: goto label_1f6a38;
        case 0x1f6a4cu: goto label_1f6a4c;
        case 0x1f6a5cu: goto label_1f6a5c;
        case 0x1f6a64u: goto label_1f6a64;
        case 0x1f6a7cu: goto label_1f6a7c;
        default: break;
    }

    ctx->pc = 0x1f69b0u;

    // 0x1f69b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f69b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f69b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f69b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f69b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f69b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f69bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f69bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f69c0: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x1F69C0u;
    SET_GPR_U32(ctx, 31, 0x1F69C8u);
    ctx->pc = 0x1F69C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69C0u;
    // 0x1f69c4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x1F69C0u, 0x1F69C8u)) {
        return;
    }
    ctx->pc = 0x1F69C8u;
label_1f69c8:
    // 0x1f69c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f69c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f69cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f69ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f69d0: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x1F69D0u;
    SET_GPR_U32(ctx, 31, 0x1F69D8u);
    ctx->pc = 0x1F69D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69D0u;
    // 0x1f69d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x1F69D0u, 0x1F69D8u)) {
        return;
    }
    ctx->pc = 0x1F69D8u;
label_1f69d8:
    // 0x1f69d8: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1F69D8u;
    {
        const bool branch_taken_0x1f69d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1F69DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69D8u;
        // 0x1f69dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f69d8) {
            ctx->pc = 0x1F6A8Cu;
            goto label_1f6a8c;
        }
    }
    ctx->pc = 0x1F69E0u;
    // 0x1f69e0: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x1f69e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x1f69e4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1f69e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1f69e8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x1F69E8u;
    SET_GPR_U32(ctx, 31, 0x1F69F0u);
    ctx->pc = 0x1F69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69E8u;
    // 0x1f69ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x1F69E8u, 0x1F69F0u)) {
        return;
    }
    ctx->pc = 0x1F69F0u;
label_1f69f0:
    // 0x1f69f0: 0xc07df64  jal         func_1F7D90
    ctx->pc = 0x1F69F0u;
    SET_GPR_U32(ctx, 31, 0x1F69F8u);
    ctx->pc = 0x1F69F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69F0u;
    // 0x1f69f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7D90u, 0x1F69F0u, 0x1F69F8u)) {
        return;
    }
    ctx->pc = 0x1F69F8u;
label_1f69f8:
    // 0x1f69f8: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1f69f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f69fc: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F69FCu;
    {
        const bool branch_taken_0x1f69fc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1F6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69FCu;
        // 0x1f6a00: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f69fc) {
            ctx->pc = 0x1F6A14u;
            goto label_1f6a14;
        }
    }
    ctx->pc = 0x1F6A04u;
    // 0x1f6a04: 0xc07daaa  jal         func_1F6AA8
    ctx->pc = 0x1F6A04u;
    SET_GPR_U32(ctx, 31, 0x1F6A0Cu);
    ctx->pc = 0x1F6A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A04u;
    // 0x1f6a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6AA8u, 0x1F6A04u, 0x1F6A0Cu)) {
        return;
    }
    ctx->pc = 0x1F6A0Cu;
label_1f6a0c:
    // 0x1f6a0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6A0Cu;
    {
        const bool branch_taken_0x1f6a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A0Cu;
        // 0x1f6a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a0c) {
            ctx->pc = 0x1F6A30u;
            goto label_1f6a30;
        }
    }
    ctx->pc = 0x1F6A14u;
label_1f6a14:
    // 0x1f6a14: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x1f6a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x1f6a18: 0xc07daaa  jal         func_1F6AA8
    ctx->pc = 0x1F6A18u;
    SET_GPR_U32(ctx, 31, 0x1F6A20u);
    ctx->pc = 0x1F6A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A18u;
    // 0x1f6a1c: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6AA8u, 0x1F6A18u, 0x1F6A20u)) {
        return;
    }
    ctx->pc = 0x1F6A20u;
label_1f6a20:
    // 0x1f6a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a24: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x1F6A24u;
    SET_GPR_U32(ctx, 31, 0x1F6A2Cu);
    ctx->pc = 0x1F6A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A24u;
    // 0x1f6a28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x1F6A24u, 0x1F6A2Cu)) {
        return;
    }
    ctx->pc = 0x1F6A2Cu;
label_1f6a2c:
    // 0x1f6a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6a30:
    // 0x1f6a30: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x1F6A30u;
    SET_GPR_U32(ctx, 31, 0x1F6A38u);
    ctx->pc = 0x1F6A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A30u;
    // 0x1f6a34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x1F6A30u, 0x1F6A38u)) {
        return;
    }
    ctx->pc = 0x1F6A38u;
label_1f6a38:
    // 0x1f6a38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f6a38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f6a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f6a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a44: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x1F6A44u;
    SET_GPR_U32(ctx, 31, 0x1F6A4Cu);
    ctx->pc = 0x1F6A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A44u;
    // 0x1f6a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x1F6A44u, 0x1F6A4Cu)) {
        return;
    }
    ctx->pc = 0x1F6A4Cu;
label_1f6a4c:
    // 0x1f6a4c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6A4Cu;
    {
        const bool branch_taken_0x1f6a4c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1F6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A4Cu;
        // 0x1f6a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a4c) {
            ctx->pc = 0x1F6A74u;
            goto label_1f6a74;
        }
    }
    ctx->pc = 0x1F6A54u;
    // 0x1f6a54: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x1F6A54u;
    SET_GPR_U32(ctx, 31, 0x1F6A5Cu);
    ctx->pc = 0x1F6A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A54u;
    // 0x1f6a58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x1F6A54u, 0x1F6A5Cu)) {
        return;
    }
    ctx->pc = 0x1F6A5Cu;
label_1f6a5c:
    // 0x1f6a5c: 0xc07df64  jal         func_1F7D90
    ctx->pc = 0x1F6A5Cu;
    SET_GPR_U32(ctx, 31, 0x1F6A64u);
    ctx->pc = 0x1F6A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A5Cu;
    // 0x1f6a60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7D90u, 0x1F6A5Cu, 0x1F6A64u)) {
        return;
    }
    ctx->pc = 0x1F6A64u;
label_1f6a64:
    // 0x1f6a64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f6a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f6a68: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1f6a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1f6a6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6A6Cu;
    {
        const bool branch_taken_0x1f6a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A6Cu;
        // 0x1f6a70: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a6c) {
            ctx->pc = 0x1F6A88u;
            goto label_1f6a88;
        }
    }
    ctx->pc = 0x1F6A74u;
label_1f6a74:
    // 0x1f6a74: 0xc07df64  jal         func_1F7D90
    ctx->pc = 0x1F6A74u;
    SET_GPR_U32(ctx, 31, 0x1F6A7Cu);
    ctx->pc = 0x1F6A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A74u;
    // 0x1f6a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7D90u, 0x1F6A74u, 0x1F6A7Cu)) {
        return;
    }
    ctx->pc = 0x1F6A7Cu;
label_1f6a7c:
    // 0x1f6a7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f6a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f6a80: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1f6a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1f6a84: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1f6a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1f6a88:
    // 0x1f6a88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f6a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6a8c:
    // 0x1f6a8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f6a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f6a90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6a94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f6a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A9Cu;
        // 0x1f6aa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6AA4u;
    // 0x1f6aa4: 0x0  nop
    ctx->pc = 0x1f6aa4u;
    // NOP
    ctx->pc = 0x1f6aa8u;
}
