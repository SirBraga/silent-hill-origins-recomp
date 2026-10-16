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

// Function: sub_001B7D70
// Address: 0x1b7d70 - 0x1b80c0
void sub_001B7D70_0x1b7d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7D70_0x1b7d70");
#endif

    switch (ctx->pc) {
        case 0x1b7d8cu: goto label_1b7d8c;
        case 0x1b7d94u: goto label_1b7d94;
        case 0x1b7e18u: goto label_1b7e18;
        case 0x1b7e24u: goto label_1b7e24;
        case 0x1b7e40u: goto label_1b7e40;
        case 0x1b7e48u: goto label_1b7e48;
        case 0x1b7e70u: goto label_1b7e70;
        case 0x1b8004u: goto label_1b8004;
        case 0x1b8044u: goto label_1b8044;
        case 0x1b8094u: goto label_1b8094;
        default: break;
    }

    ctx->pc = 0x1b7d70u;

    // 0x1b7d70: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1b7d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1b7d74: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1b7d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1b7d78: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1b7d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1b7d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d80: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1b7d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1b7d84: 0xc06bbf8  jal         func_1AEFE0
    ctx->pc = 0x1B7D84u;
    SET_GPR_U32(ctx, 31, 0x1B7D8Cu);
    ctx->pc = 0x1B7D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D84u;
    // 0x1b7d88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEFE0u, 0x1B7D84u, 0x1B7D8Cu)) {
        return;
    }
    ctx->pc = 0x1B7D8Cu;
label_1b7d8c:
    // 0x1b7d8c: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1B7D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B7D94u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1B7D8Cu, 0x1B7D94u)) {
        return;
    }
    ctx->pc = 0x1B7D94u;
label_1b7d94:
    // 0x1b7d94: 0x8e0302f0  lw          $v1, 0x2F0($s0)
    ctx->pc = 0x1b7d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x1b7d98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b7d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d9c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1b7d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b7da0: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x1B7DA0u;
    {
        const bool branch_taken_0x1b7da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DA0u;
        // 0x1b7da4: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7da0) {
            ctx->pc = 0x1B7FE4u;
            goto label_1b7fe4;
        }
    }
    ctx->pc = 0x1B7DA8u;
    // 0x1b7da8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b7da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7dac: 0x2442cc30  addiu       $v0, $v0, -0x33D0
    ctx->pc = 0x1b7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954032));
    // 0x1b7db0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7db4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b7db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b7db8: 0x800008  jr          $a0
    ctx->pc = 0x1B7DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7DC0u: goto label_1b7dc0;
            case 0x1B7E7Cu: goto label_1b7e7c;
            case 0x1B7EECu: goto label_1b7eec;
            case 0x1B7F28u: goto label_1b7f28;
            case 0x1B7FC4u: goto label_1b7fc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7DB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B7DC0u;
label_1b7dc0:
    // 0x1b7dc0: 0x8e0602b0  lw          $a2, 0x2B0($s0)
    ctx->pc = 0x1b7dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x1b7dc4: 0x10c0002b  beqz        $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B7DC4u;
    {
        const bool branch_taken_0x1b7dc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DC4u;
        // 0x1b7dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7dc4) {
            ctx->pc = 0x1B7E74u;
            goto label_1b7e74;
        }
    }
    ctx->pc = 0x1B7DCCu;
    // 0x1b7dcc: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1b7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1b7dd0: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B7DD0u;
    {
        const bool branch_taken_0x1b7dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DD0u;
        // 0x1b7dd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7dd0) {
            ctx->pc = 0x1B7E74u;
            goto label_1b7e74;
        }
    }
    ctx->pc = 0x1B7DD8u;
    // 0x1b7dd8: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x1b7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1b7ddc: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B7DDCu;
    {
        const bool branch_taken_0x1b7ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DDCu;
        // 0x1b7de0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ddc) {
            ctx->pc = 0x1B7E74u;
            goto label_1b7e74;
        }
    }
    ctx->pc = 0x1B7DE4u;
    // 0x1b7de4: 0x8cc60060  lw          $a2, 0x60($a2)
    ctx->pc = 0x1b7de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x1b7de8: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1B7DE8u;
    {
        const bool branch_taken_0x1b7de8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DE8u;
        // 0x1b7dec: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7de8) {
            ctx->pc = 0x1B7E28u;
            goto label_1b7e28;
        }
    }
    ctx->pc = 0x1B7DF0u;
    // 0x1b7df0: 0x24090034  addiu       $t1, $zero, 0x34
    ctx->pc = 0x1b7df0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1b7df4: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x1b7df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    // 0x1b7df8: 0x24080057  addiu       $t0, $zero, 0x57
    ctx->pc = 0x1b7df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1b7dfc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b7dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b7e00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e04: 0x8c620198  lw          $v0, 0x198($v1)
    ctx->pc = 0x1b7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x1b7e08: 0x24a5cc18  addiu       $a1, $a1, -0x33E8
    ctx->pc = 0x1b7e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954008));
    // 0x1b7e0c: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x1b7e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1b7e10: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1B7E10u;
    SET_GPR_U32(ctx, 31, 0x1B7E18u);
    ctx->pc = 0x1B7E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E10u;
    // 0x1b7e14: 0x122400a  movz        $t0, $t1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1B7E10u, 0x1B7E18u)) {
        return;
    }
    ctx->pc = 0x1B7E18u;
label_1b7e18:
    // 0x1b7e18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e1c: 0xc06d0e4  jal         func_1B4390
    ctx->pc = 0x1B7E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E24u);
    ctx->pc = 0x1B7E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E1Cu;
    // 0x1b7e20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4390u, 0x1B7E1Cu, 0x1B7E24u)) {
        return;
    }
    ctx->pc = 0x1B7E24u;
label_1b7e24:
    // 0x1b7e24: 0xae0202dc  sw          $v0, 0x2DC($s0)
    ctx->pc = 0x1b7e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
label_1b7e28:
    // 0x1b7e28: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1b7e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1b7e2c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B7E2Cu;
    {
        const bool branch_taken_0x1b7e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E2Cu;
        // 0x1b7e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e2c) {
            ctx->pc = 0x1B7E74u;
            goto label_1b7e74;
        }
    }
    ctx->pc = 0x1B7E34u;
    // 0x1b7e34: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1b7e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b7e38: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B7E38u;
    SET_GPR_U32(ctx, 31, 0x1B7E40u);
    ctx->pc = 0x1B7E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E38u;
    // 0x1b7e3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B7E38u, 0x1B7E40u)) {
        return;
    }
    ctx->pc = 0x1B7E40u;
label_1b7e40:
    // 0x1b7e40: 0xc06d2f4  jal         func_1B4BD0
    ctx->pc = 0x1B7E40u;
    SET_GPR_U32(ctx, 31, 0x1B7E48u);
    ctx->pc = 0x1B7E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E40u;
    // 0x1b7e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4BD0u, 0x1B7E40u, 0x1B7E48u)) {
        return;
    }
    ctx->pc = 0x1B7E48u;
label_1b7e48:
    // 0x1b7e48: 0x8e060260  lw          $a2, 0x260($s0)
    ctx->pc = 0x1b7e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1b7e4c: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x1b7e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x1b7e50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b7e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b7e54: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7E54u;
    {
        const bool branch_taken_0x1b7e54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E54u;
        // 0x1b7e58: 0xae0202b4  sw          $v0, 0x2B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e54) {
            ctx->pc = 0x1B7E64u;
            goto label_1b7e64;
        }
    }
    ctx->pc = 0x1B7E5Cu;
    // 0x1b7e5c: 0x3c014218  lui         $at, 0x4218
    ctx->pc = 0x1b7e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16920 << 16));
    // 0x1b7e60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b7e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7e64:
    // 0x1b7e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b7e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e68: 0xc06d152  jal         func_1B4548
    ctx->pc = 0x1B7E68u;
    SET_GPR_U32(ctx, 31, 0x1B7E70u);
    ctx->pc = 0x1B7E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E68u;
    // 0x1b7e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4548u, 0x1B7E68u, 0x1B7E70u)) {
        return;
    }
    ctx->pc = 0x1B7E70u;
label_1b7e70:
    // 0x1b7e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7e74:
    // 0x1b7e74: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1B7E74u;
    {
        const bool branch_taken_0x1b7e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E74u;
        // 0x1b7e78: 0xae0202f0  sw          $v0, 0x2F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e74) {
            ctx->pc = 0x1B7FE4u;
            goto label_1b7fe4;
        }
    }
    ctx->pc = 0x1B7E7Cu;
label_1b7e7c:
    // 0x1b7e7c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b7e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b7e80: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1b7e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e84: 0xc44292a4  lwc1        $f2, -0x6D5C($v0)
    ctx->pc = 0x1b7e84u;
    { uint32_t bits = FAST_READ32(0x3392A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7e88: 0xc60102e0  lwc1        $f1, 0x2E0($s0)
    ctx->pc = 0x1b7e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7e8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b7e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b7e90: 0xc60302e4  lwc1        $f3, 0x2E4($s0)
    ctx->pc = 0x1b7e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7e94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7e98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7e9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b7e9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b7ea0: 0xe60102e0  swc1        $f1, 0x2E0($s0)
    ctx->pc = 0x1b7ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
    // 0x1b7ea4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1b7ea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7ea8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1b7ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7eac: 0xc44192a4  lwc1        $f1, -0x6D5C($v0)
    ctx->pc = 0x1b7eacu;
    { uint32_t bits = FAST_READ32(0x3392A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7eb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b7eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b7eb4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1b7eb4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1b7eb8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7EB8u;
    {
        const bool branch_taken_0x1b7eb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EB8u;
        // 0x1b7ebc: 0xe60302e4  swc1        $f3, 0x2E4($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7eb8) {
            ctx->pc = 0x1B7ED0u;
            goto label_1b7ed0;
        }
    }
    ctx->pc = 0x1B7EC0u;
    // 0x1b7ec0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7ec4: 0xe60202e0  swc1        $f2, 0x2E0($s0)
    ctx->pc = 0x1b7ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
    // 0x1b7ec8: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x1b7ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x1b7ecc: 0xae0002ec  sw          $zero, 0x2EC($s0)
    ctx->pc = 0x1b7eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
label_1b7ed0:
    // 0x1b7ed0: 0xc60002e4  lwc1        $f0, 0x2E4($s0)
    ctx->pc = 0x1b7ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7ed4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1b7ed4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7ed8: 0x0  nop
    ctx->pc = 0x1b7ed8u;
    // NOP
    // 0x1b7edc: 0x45030041  bc1tl       . + 4 + (0x41 << 2)
    ctx->pc = 0x1B7EDCu;
    {
        const bool branch_taken_0x1b7edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7edc) {
            ctx->pc = 0x1B7EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7EDCu;
            // 0x1b7ee0: 0xe60202e4  swc1        $f2, 0x2E4($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7FE4u;
            goto label_1b7fe4;
        }
    }
    ctx->pc = 0x1B7EE4u;
    // 0x1b7ee4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1B7EE4u;
    {
        const bool branch_taken_0x1b7ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EE4u;
        // 0x1b7ee8: 0x8e020260  lw          $v0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ee4) {
            ctx->pc = 0x1B7FE8u;
            goto label_1b7fe8;
        }
    }
    ctx->pc = 0x1B7EECu;
label_1b7eec:
    // 0x1b7eec: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b7ef0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1b7ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7ef4: 0xc44292ac  lwc1        $f2, -0x6D54($v0)
    ctx->pc = 0x1b7ef4u;
    { uint32_t bits = FAST_READ32(0x3392ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7ef8: 0xc60002ec  lwc1        $f0, 0x2EC($s0)
    ctx->pc = 0x1b7ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7efc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b7efcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b7f00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7f04: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b7f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b7f08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b7f0c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1b7f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7f10: 0x0  nop
    ctx->pc = 0x1b7f10u;
    // NOP
    // 0x1b7f14: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x1B7F14u;
    {
        const bool branch_taken_0x1b7f14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F14u;
        // 0x1b7f18: 0xe60002ec  swc1        $f0, 0x2EC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f14) {
            ctx->pc = 0x1B7FE4u;
            goto label_1b7fe4;
        }
    }
    ctx->pc = 0x1B7F1Cu;
    // 0x1b7f1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b7f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7f20: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B7F20u;
    {
        const bool branch_taken_0x1b7f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F20u;
        // 0x1b7f24: 0xae0202f0  sw          $v0, 0x2F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f20) {
            ctx->pc = 0x1B7FE4u;
            goto label_1b7fe4;
        }
    }
    ctx->pc = 0x1B7F28u;
label_1b7f28:
    // 0x1b7f28: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b7f2c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1b7f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7f30: 0xc44292a8  lwc1        $f2, -0x6D58($v0)
    ctx->pc = 0x1b7f30u;
    { uint32_t bits = FAST_READ32(0x3392A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7f34: 0xc60002e8  lwc1        $f0, 0x2E8($s0)
    ctx->pc = 0x1b7f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7f38: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b7f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b7f3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7f40: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b7f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b7f44: 0xc60302e0  lwc1        $f3, 0x2E0($s0)
    ctx->pc = 0x1b7f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7f48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b7f4c: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x1b7f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x1b7f50: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x1b7f50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7f54: 0xc44192a8  lwc1        $f1, -0x6D58($v0)
    ctx->pc = 0x1b7f54u;
    { uint32_t bits = FAST_READ32(0x3392A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7f58: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1b7f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7f5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b7f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b7f60: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1b7f60u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1b7f64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7F64u;
    {
        const bool branch_taken_0x1b7f64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F64u;
        // 0x1b7f68: 0xe60302e0  swc1        $f3, 0x2E0($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f64) {
            ctx->pc = 0x1B7F70u;
            goto label_1b7f70;
        }
    }
    ctx->pc = 0x1B7F6Cu;
    // 0x1b7f6c: 0xe60402e8  swc1        $f4, 0x2E8($s0)
    ctx->pc = 0x1b7f6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
label_1b7f70:
    // 0x1b7f70: 0xc60002e0  lwc1        $f0, 0x2E0($s0)
    ctx->pc = 0x1b7f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7f74: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b7f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b7f78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7f78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b7f7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7f80: 0x0  nop
    ctx->pc = 0x1b7f80u;
    // NOP
    // 0x1b7f84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b7f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7f88: 0x0  nop
    ctx->pc = 0x1b7f88u;
    // NOP
    // 0x1b7f8c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B7F8Cu;
    {
        const bool branch_taken_0x1b7f8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7f8c) {
            ctx->pc = 0x1B7F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7F8Cu;
            // 0x1b7f90: 0xe60102e0  swc1        $f1, 0x2E0($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7F94u;
            goto label_1b7f94;
        }
    }
    ctx->pc = 0x1B7F94u;
label_1b7f94:
    // 0x1b7f94: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b7f98: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1b7f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7f9c: 0xc44292a4  lwc1        $f2, -0x6D5C($v0)
    ctx->pc = 0x1b7f9cu;
    { uint32_t bits = FAST_READ32(0x3392A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7fa0: 0xc60002e4  lwc1        $f0, 0x2E4($s0)
    ctx->pc = 0x1b7fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7fa4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b7fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b7fa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b7fac: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x1b7facu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7fb0: 0x0  nop
    ctx->pc = 0x1b7fb0u;
    // NOP
    // 0x1b7fb4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1B7FB4u;
    {
        const bool branch_taken_0x1b7fb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FB4u;
        // 0x1b7fb8: 0xe60002e4  swc1        $f0, 0x2E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fb4) {
            ctx->pc = 0x1B7FE4u;
            goto label_1b7fe4;
        }
    }
    ctx->pc = 0x1B7FBCu;
    // 0x1b7fbc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7FBCu;
    {
        const bool branch_taken_0x1b7fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FBCu;
        // 0x1b7fc0: 0xe60402e4  swc1        $f4, 0x2E4($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fbc) {
            ctx->pc = 0x1B7FE4u;
            goto label_1b7fe4;
        }
    }
    ctx->pc = 0x1B7FC4u;
label_1b7fc4:
    // 0x1b7fc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7fc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7fcc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b7fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b7fd0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b7fd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7fd8: 0xe60102e4  swc1        $f1, 0x2E4($s0)
    ctx->pc = 0x1b7fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
    // 0x1b7fdc: 0xe60002e0  swc1        $f0, 0x2E0($s0)
    ctx->pc = 0x1b7fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
    // 0x1b7fe0: 0xe60102e8  swc1        $f1, 0x2E8($s0)
    ctx->pc = 0x1b7fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
label_1b7fe4:
    // 0x1b7fe4: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x1b7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1b7fe8:
    // 0x1b7fe8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7FE8u;
    {
        const bool branch_taken_0x1b7fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7fe8) {
            ctx->pc = 0x1B7FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7FE8u;
            // 0x1b7fec: 0x8e0202b8  lw          $v0, 0x2B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B800Cu;
            goto label_1b800c;
        }
    }
    ctx->pc = 0x1B7FF0u;
    // 0x1b7ff0: 0x8e0402b4  lw          $a0, 0x2B4($s0)
    ctx->pc = 0x1b7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1b7ff4: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B7FF4u;
    {
        const bool branch_taken_0x1b7ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FF4u;
        // 0x1b7ff8: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ff4) {
            ctx->pc = 0x1B80ACu;
            goto label_1b80ac;
        }
    }
    ctx->pc = 0x1B7FFCu;
    // 0x1b7ffc: 0xc06d36a  jal         func_1B4DA8
    ctx->pc = 0x1B7FFCu;
    SET_GPR_U32(ctx, 31, 0x1B8004u);
    ctx->pc = 0x1B8000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7FFCu;
    // 0x1b8000: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4DA8u, 0x1B7FFCu, 0x1B8004u)) {
        return;
    }
    ctx->pc = 0x1B8004u;
label_1b8004:
    // 0x1b8004: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1B8004u;
    {
        const bool branch_taken_0x1b8004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8004u;
        // 0x1b8008: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8004) {
            ctx->pc = 0x1B80ACu;
            goto label_1b80ac;
        }
    }
    ctx->pc = 0x1B800Cu;
label_1b800c:
    // 0x1b800c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B800Cu;
    {
        const bool branch_taken_0x1b800c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B800Cu;
        // 0x1b8010: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b800c) {
            ctx->pc = 0x1B8058u;
            goto label_1b8058;
        }
    }
    ctx->pc = 0x1B8014u;
    // 0x1b8014: 0xc60f02d4  lwc1        $f15, 0x2D4($s0)
    ctx->pc = 0x1b8014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1b8018: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1b8018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1b801c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b801cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8020: 0x260502cc  addiu       $a1, $s0, 0x2CC
    ctx->pc = 0x1b8020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 716));
    // 0x1b8024: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x1b8024u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x1b8028: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1b8028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b802c: 0x46007bc1  sub.s       $f15, $f15, $f0
    ctx->pc = 0x1b802cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
    // 0x1b8030: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1b8030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x1b8034: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1b8034u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1b8038: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b8038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b803c: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1B803Cu;
    SET_GPR_U32(ctx, 31, 0x1B8044u);
    ctx->pc = 0x1B8040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B803Cu;
    // 0x1b8040: 0xc60e02c8  lwc1        $f14, 0x2C8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1B803Cu, 0x1B8044u)) {
        return;
    }
    ctx->pc = 0x1B8044u;
label_1b8044:
    // 0x1b8044: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b8044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b8048: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x1b8048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1b804c: 0xc60002cc  lwc1        $f0, 0x2CC($s0)
    ctx->pc = 0x1b804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8050: 0xae0202b8  sw          $v0, 0x2B8($s0)
    ctx->pc = 0x1b8050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 2));
    // 0x1b8054: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1b8054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1b8058:
    // 0x1b8058: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x1b8058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x1b805c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B805Cu;
    {
        const bool branch_taken_0x1b805c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B805Cu;
        // 0x1b8060: 0x260402c4  addiu       $a0, $s0, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b805c) {
            ctx->pc = 0x1B80A8u;
            goto label_1b80a8;
        }
    }
    ctx->pc = 0x1B8064u;
    // 0x1b8064: 0xc60f02d8  lwc1        $f15, 0x2D8($s0)
    ctx->pc = 0x1b8064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1b8068: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1b8068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1b806c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b806cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8070: 0x260502d0  addiu       $a1, $s0, 0x2D0
    ctx->pc = 0x1b8070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x1b8074: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x1b8074u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x1b8078: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1b8078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b807c: 0x46007bc0  add.s       $f15, $f15, $f0
    ctx->pc = 0x1b807cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x1b8080: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1b8080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x1b8084: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1b8084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1b8088: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b8088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b808c: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1B808Cu;
    SET_GPR_U32(ctx, 31, 0x1B8094u);
    ctx->pc = 0x1B8090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B808Cu;
    // 0x1b8090: 0xc60e02c8  lwc1        $f14, 0x2C8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1B808Cu, 0x1B8094u)) {
        return;
    }
    ctx->pc = 0x1B8094u;
label_1b8094:
    // 0x1b8094: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b8094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b8098: 0xc60002d0  lwc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1b8098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b809c: 0x8e0302a4  lw          $v1, 0x2A4($s0)
    ctx->pc = 0x1b809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x1b80a0: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x1b80a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
    // 0x1b80a4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1b80a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1b80a8:
    // 0x1b80a8: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1b80a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1b80ac:
    // 0x1b80ac: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1b80acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b80b0: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1b80b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b80b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B80B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80B4u;
        // 0x1b80b8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B80B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B80BCu;
    // 0x1b80bc: 0x0  nop
    ctx->pc = 0x1b80bcu;
    // NOP
    ctx->pc = 0x1b80c0u;
}
