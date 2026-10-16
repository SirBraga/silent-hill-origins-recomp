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

// Function: sub_00219B28
// Address: 0x219b28 - 0x219bb0
void sub_00219B28_0x219b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219B28_0x219b28");
#endif

    switch (ctx->pc) {
        case 0x219b68u: goto label_219b68;
        case 0x219b7cu: goto label_219b7c;
        default: break;
    }

    ctx->pc = 0x219b28u;

    // 0x219b28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x219b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x219b2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x219b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219b30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x219b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x219b34: 0x37a60003  ori         $a2, $sp, 0x3
    ctx->pc = 0x219b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)3);
    // 0x219b38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x219b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x219b3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x219b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x219b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x219b44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x219b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b48: 0x37a70006  ori         $a3, $sp, 0x6
    ctx->pc = 0x219b48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)6);
    // 0x219b4c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x219b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x219b50: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x219b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x219b54: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x219b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x219b58: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x219b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x219b5c: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x219b5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x219b60: 0xc086468  jal         func_2191A0
    ctx->pc = 0x219B60u;
    SET_GPR_U32(ctx, 31, 0x219B68u);
    ctx->pc = 0x219B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B60u;
    // 0x219b64: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2191A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2191A0u, 0x219B60u, 0x219B68u)) {
        return;
    }
    ctx->pc = 0x219B68u;
label_219b68:
    // 0x219b68: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x219b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x219b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b70: 0x37a60002  ori         $a2, $sp, 0x2
    ctx->pc = 0x219b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    // 0x219b74: 0xc086468  jal         func_2191A0
    ctx->pc = 0x219B74u;
    SET_GPR_U32(ctx, 31, 0x219B7Cu);
    ctx->pc = 0x219B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B74u;
    // 0x219b78: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2191A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2191A0u, 0x219B74u, 0x219B7Cu)) {
        return;
    }
    ctx->pc = 0x219B7Cu;
label_219b7c:
    // 0x219b7c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x219b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x219b80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x219b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219b84: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x219b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x219b88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x219b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219b8c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x219b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x219b90: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x219b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x219b94: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x219b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219b98: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x219b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219b9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x219BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BA0u;
        // 0x219ba4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219BA8u;
    // 0x219ba8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x219ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x219bac: 0x0  nop
    ctx->pc = 0x219bacu;
    // NOP
    ctx->pc = 0x219bb0u;
}
