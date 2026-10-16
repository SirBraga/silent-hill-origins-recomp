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

// Function: sub_002177B8
// Address: 0x2177b8 - 0x217860
void sub_002177B8_0x2177b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002177B8_0x2177b8");
#endif

    switch (ctx->pc) {
        case 0x2177ecu: goto label_2177ec;
        case 0x217814u: goto label_217814;
        case 0x217824u: goto label_217824;
        case 0x217840u: goto label_217840;
        default: break;
    }

    ctx->pc = 0x2177b8u;

    // 0x2177b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2177b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2177bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2177bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2177c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2177c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2177c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2177c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2177c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2177cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2177ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2177d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2177d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2177d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2177d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2177dc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2177dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177e0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2177e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2177e4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x2177E4u;
    SET_GPR_U32(ctx, 31, 0x2177ECu);
    ctx->pc = 0x2177E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177E4u;
    // 0x2177e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x2177E4u, 0x2177ECu)) {
        return;
    }
    ctx->pc = 0x2177ECu;
label_2177ec:
    // 0x2177ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2177ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2177f0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2177f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2177f4: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x2177f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2177f8: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x2177f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2177fc: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2177fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217800: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x217800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217804: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x217804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21780c: 0xc0817da  jal         func_205F68
    ctx->pc = 0x21780Cu;
    SET_GPR_U32(ctx, 31, 0x217814u);
    ctx->pc = 0x217810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21780Cu;
    // 0x217810: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F68u, 0x21780Cu, 0x217814u)) {
        return;
    }
    ctx->pc = 0x217814u;
label_217814:
    // 0x217814: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x217814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217818: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21781c: 0xc080924  jal         func_202490
    ctx->pc = 0x21781Cu;
    SET_GPR_U32(ctx, 31, 0x217824u);
    ctx->pc = 0x217820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21781Cu;
    // 0x217820: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x21781Cu, 0x217824u)) {
        return;
    }
    ctx->pc = 0x217824u;
label_217824:
    // 0x217824: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x217824u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x217828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x217828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21782c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21782cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217830: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x217830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217834: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x217834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217838: 0xc0817da  jal         func_205F68
    ctx->pc = 0x217838u;
    SET_GPR_U32(ctx, 31, 0x217840u);
    ctx->pc = 0x21783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217838u;
    // 0x21783c: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F68u, 0x217838u, 0x217840u)) {
        return;
    }
    ctx->pc = 0x217840u;
label_217840:
    // 0x217840: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x217840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217848: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x217848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21784c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21784cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217850: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x217850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217858: 0x3e00008  jr          $ra
    ctx->pc = 0x217858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217858u;
        // 0x21785c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217860u;
}
