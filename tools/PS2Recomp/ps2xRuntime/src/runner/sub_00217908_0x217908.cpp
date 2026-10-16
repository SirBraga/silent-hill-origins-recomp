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

// Function: sub_00217908
// Address: 0x217908 - 0x2179b0
void sub_00217908_0x217908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217908_0x217908");
#endif

    switch (ctx->pc) {
        case 0x21793cu: goto label_21793c;
        case 0x217964u: goto label_217964;
        case 0x217974u: goto label_217974;
        case 0x217990u: goto label_217990;
        default: break;
    }

    ctx->pc = 0x217908u;

    // 0x217908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x217908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21790c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x21790cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x217910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x217910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x217914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217918: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x217918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x21791c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21791cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217920: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x217920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x217924: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x217924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21792c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x21792cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217930: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x217930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x217934: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x217934u;
    SET_GPR_U32(ctx, 31, 0x21793Cu);
    ctx->pc = 0x217938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217934u;
    // 0x217938: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x217934u, 0x21793Cu)) {
        return;
    }
    ctx->pc = 0x21793Cu;
label_21793c:
    // 0x21793c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21793cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x217940: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x217940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217944: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x217944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x217948: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x217948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21794c: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x21794cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217950: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x217950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217954: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x217954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21795c: 0xc0817da  jal         func_205F68
    ctx->pc = 0x21795Cu;
    SET_GPR_U32(ctx, 31, 0x217964u);
    ctx->pc = 0x217960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21795Cu;
    // 0x217960: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F68u, 0x21795Cu, 0x217964u)) {
        return;
    }
    ctx->pc = 0x217964u;
label_217964:
    // 0x217964: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x217964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217968: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21796c: 0xc080924  jal         func_202490
    ctx->pc = 0x21796Cu;
    SET_GPR_U32(ctx, 31, 0x217974u);
    ctx->pc = 0x217970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21796Cu;
    // 0x217970: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x21796Cu, 0x217974u)) {
        return;
    }
    ctx->pc = 0x217974u;
label_217974:
    // 0x217974: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x217974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x217978: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x217978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21797c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21797cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217980: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x217980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217984: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x217984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217988: 0xc0817da  jal         func_205F68
    ctx->pc = 0x217988u;
    SET_GPR_U32(ctx, 31, 0x217990u);
    ctx->pc = 0x21798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217988u;
    // 0x21798c: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F68u, 0x217988u, 0x217990u)) {
        return;
    }
    ctx->pc = 0x217990u;
label_217990:
    // 0x217990: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x217990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217998: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x217998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21799c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21799cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2179a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2179a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2179a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2179a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2179a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2179A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2179ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179A8u;
        // 0x2179ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2179A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2179B0u;
}
