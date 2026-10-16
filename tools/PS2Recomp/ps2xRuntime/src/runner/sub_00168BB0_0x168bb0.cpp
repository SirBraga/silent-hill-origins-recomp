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

// Function: sub_00168BB0
// Address: 0x168bb0 - 0x168c78
void sub_00168BB0_0x168bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168BB0_0x168bb0");
#endif

    switch (ctx->pc) {
        case 0x168c0cu: goto label_168c0c;
        case 0x168c68u: goto label_168c68;
        default: break;
    }

    ctx->pc = 0x168bb0u;

    // 0x168bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168bb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x168bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x168bb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x168bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bc0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x168bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x168bc4: 0x50c00029  beql        $a2, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x168BC4u;
    {
        const bool branch_taken_0x168bc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x168bc4) {
            ctx->pc = 0x168BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168BC4u;
            // 0x168bc8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168C6Cu;
            goto label_168c6c;
        }
    }
    ctx->pc = 0x168BCCu;
    // 0x168bcc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x168bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x168bd0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x168BD0u;
    {
        const bool branch_taken_0x168bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BD0u;
        // 0x168bd4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bd0) {
            ctx->pc = 0x168C68u;
            goto label_168c68;
        }
    }
    ctx->pc = 0x168BD8u;
    // 0x168bd8: 0x8c4386b8  lw          $v1, -0x7948($v0)
    ctx->pc = 0x168bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936248)));
    // 0x168bdc: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x168BDCu;
    {
        const bool branch_taken_0x168bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BDCu;
        // 0x168be0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bdc) {
            ctx->pc = 0x168C68u;
            goto label_168c68;
        }
    }
    ctx->pc = 0x168BE4u;
    // 0x168be4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x168be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x168be8: 0x8c438878  lw          $v1, -0x7788($v0)
    ctx->pc = 0x168be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936696)));
    // 0x168bec: 0x5483001f  bnel        $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x168BECu;
    {
        const bool branch_taken_0x168bec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x168bec) {
            ctx->pc = 0x168BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168BECu;
            // 0x168bf0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168C6Cu;
            goto label_168c6c;
        }
    }
    ctx->pc = 0x168BF4u;
    // 0x168bf4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x168bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x168bf8: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x168bf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x168bfc: 0x5860001b  blezl       $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x168BFCu;
    {
        const bool branch_taken_0x168bfc = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x168bfc) {
            ctx->pc = 0x168C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168BFCu;
            // 0x168c00: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168C6Cu;
            goto label_168c6c;
        }
    }
    ctx->pc = 0x168C04u;
    // 0x168c04: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x168C04u;
    SET_GPR_U32(ctx, 31, 0x168C0Cu);
    ctx->pc = 0x168C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168C04u;
    // 0x168c08: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x168C04u, 0x168C0Cu)) {
        return;
    }
    ctx->pc = 0x168C0Cu;
label_168c0c:
    // 0x168c0c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x168C0Cu;
    {
        const bool branch_taken_0x168c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C0Cu;
        // 0x168c10: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c0c) {
            ctx->pc = 0x168C68u;
            goto label_168c68;
        }
    }
    ctx->pc = 0x168C14u;
    // 0x168c14: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x168c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x168c18: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x168c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x168c1c: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x168c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x168c20: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x168c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x168c24: 0xb3a4000b  sdl         $a0, 0xB($sp)
    ctx->pc = 0x168c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168c28: 0xb7a40004  sdr         $a0, 0x4($sp)
    ctx->pc = 0x168c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168c2c: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x168c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x168c30: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x168c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x168c34: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x168c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x168c38: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x168c38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x168c3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x168c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x168c40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x168c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168c44: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x168C44u;
    {
        const bool branch_taken_0x168c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x168C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C44u;
        // 0x168c48: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c44) {
            ctx->pc = 0x168C6Cu;
            goto label_168c6c;
        }
    }
    ctx->pc = 0x168C4Cu;
    // 0x168c4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x168c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x168c50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168C50u;
    {
        const bool branch_taken_0x168c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C50u;
        // 0x168c54: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c50) {
            ctx->pc = 0x168C6Cu;
            goto label_168c6c;
        }
    }
    ctx->pc = 0x168C58u;
    // 0x168c58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x168c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x168c5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x168c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c60: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x168C60u;
    SET_GPR_U32(ctx, 31, 0x168C68u);
    ctx->pc = 0x168C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168C60u;
    // 0x168c64: 0xac5d0004  sw          $sp, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x168C60u, 0x168C68u)) {
        return;
    }
    ctx->pc = 0x168C68u;
label_168c68:
    // 0x168c68: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x168c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_168c6c:
    // 0x168c6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168c70: 0x3e00008  jr          $ra
    ctx->pc = 0x168C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C70u;
        // 0x168c74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168C78u;
}
