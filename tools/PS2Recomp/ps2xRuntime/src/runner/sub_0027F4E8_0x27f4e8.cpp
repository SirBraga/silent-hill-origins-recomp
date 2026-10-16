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

// Function: sub_0027F4E8
// Address: 0x27f4e8 - 0x27f548
void sub_0027F4E8_0x27f4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F4E8_0x27f4e8");
#endif

    switch (ctx->pc) {
        case 0x27f50cu: goto label_27f50c;
        case 0x27f520u: goto label_27f520;
        case 0x27f528u: goto label_27f528;
        default: break;
    }

    ctx->pc = 0x27f4e8u;

    // 0x27f4e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27f4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27f4ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27f4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27f4f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f4f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27f4fc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x27f500: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x27f500u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27f504: 0xc09945a  jal         func_265168
    ctx->pc = 0x27F504u;
    SET_GPR_U32(ctx, 31, 0x27F50Cu);
    ctx->pc = 0x27F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F504u;
    // 0x27f508: 0x3484002e  ori         $a0, $a0, 0x2E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x27F504u, 0x27F50Cu)) {
        return;
    }
    ctx->pc = 0x27F50Cu;
label_27f50c:
    // 0x27f50c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27f50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27f510: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27f510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f514: 0x24a5f548  addiu       $a1, $a1, -0xAB8
    ctx->pc = 0x27f514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964552));
    // 0x27f518: 0xc095966  jal         func_256598
    ctx->pc = 0x27F518u;
    SET_GPR_U32(ctx, 31, 0x27F520u);
    ctx->pc = 0x27F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F518u;
    // 0x27f51c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256598u, 0x27F518u, 0x27F520u)) {
        return;
    }
    ctx->pc = 0x27F520u;
label_27f520:
    // 0x27f520: 0xc09945a  jal         func_265168
    ctx->pc = 0x27F520u;
    SET_GPR_U32(ctx, 31, 0x27F528u);
    ctx->pc = 0x27F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F520u;
    // 0x27f524: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x27F520u, 0x27F528u)) {
        return;
    }
    ctx->pc = 0x27F528u;
label_27f528:
    // 0x27f528: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x27f528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x27f52c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27f52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f534: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27f534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f53c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F53Cu;
        // 0x27f540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F544u;
    // 0x27f544: 0x0  nop
    ctx->pc = 0x27f544u;
    // NOP
    ctx->pc = 0x27f548u;
}
