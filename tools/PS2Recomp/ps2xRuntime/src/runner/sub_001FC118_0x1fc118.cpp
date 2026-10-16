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

// Function: sub_001FC118
// Address: 0x1fc118 - 0x1fc190
void sub_001FC118_0x1fc118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC118_0x1fc118");
#endif

    switch (ctx->pc) {
        case 0x1fc140u: goto label_1fc140;
        case 0x1fc154u: goto label_1fc154;
        case 0x1fc160u: goto label_1fc160;
        case 0x1fc16cu: goto label_1fc16c;
        case 0x1fc174u: goto label_1fc174;
        default: break;
    }

    ctx->pc = 0x1fc118u;

    // 0x1fc118: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fc118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fc11c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fc11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fc120: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fc120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fc124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc128: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fc128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fc12c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc130: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fc130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc134: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fc134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc138: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1FC138u;
    SET_GPR_U32(ctx, 31, 0x1FC140u);
    ctx->pc = 0x1FC13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC138u;
    // 0x1fc13c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1FC138u, 0x1FC140u)) {
        return;
    }
    ctx->pc = 0x1FC140u;
label_1fc140:
    // 0x1fc140: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1fc140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fc144: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fc144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc148: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fc148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc14c: 0xc093546  jal         func_24D518
    ctx->pc = 0x1FC14Cu;
    SET_GPR_U32(ctx, 31, 0x1FC154u);
    ctx->pc = 0x1FC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC14Cu;
    // 0x1fc150: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1FC14Cu, 0x1FC154u)) {
        return;
    }
    ctx->pc = 0x1FC154u;
label_1fc154:
    // 0x1fc154: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x1fc154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1fc158: 0xc07f098  jal         func_1FC260
    ctx->pc = 0x1FC158u;
    SET_GPR_U32(ctx, 31, 0x1FC160u);
    ctx->pc = 0x1FC15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC158u;
    // 0x1fc15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC260u, 0x1FC158u, 0x1FC160u)) {
        return;
    }
    ctx->pc = 0x1FC160u;
label_1fc160:
    // 0x1fc160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc164: 0xc07f1ce  jal         func_1FC738
    ctx->pc = 0x1FC164u;
    SET_GPR_U32(ctx, 31, 0x1FC16Cu);
    ctx->pc = 0x1FC168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC164u;
    // 0x1fc168: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC738u, 0x1FC164u, 0x1FC16Cu)) {
        return;
    }
    ctx->pc = 0x1FC16Cu;
label_1fc16c:
    // 0x1fc16c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FC16Cu;
    SET_GPR_U32(ctx, 31, 0x1FC174u);
    ctx->pc = 0x1FC170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC16Cu;
    // 0x1fc170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FC16Cu, 0x1FC174u)) {
        return;
    }
    ctx->pc = 0x1FC174u;
label_1fc174:
    // 0x1fc174: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fc174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc178: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fc178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc17c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fc17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc184: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC184u;
        // 0x1fc188: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC18Cu;
    // 0x1fc18c: 0x0  nop
    ctx->pc = 0x1fc18cu;
    // NOP
    ctx->pc = 0x1fc190u;
}
