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

// Function: sub_0015CCE8
// Address: 0x15cce8 - 0x15cdd8
void sub_0015CCE8_0x15cce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CCE8_0x15cce8");
#endif

    switch (ctx->pc) {
        case 0x15cd20u: goto label_15cd20;
        default: break;
    }

    ctx->pc = 0x15cce8u;

    // 0x15cce8: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x15cce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15ccec: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x15ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15ccf0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x15ccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ccf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ccf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ccf8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15ccfc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x15ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15cd00: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x15cd00u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x15cd04: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15cd04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15cd08: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x15cd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15cd0c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x15cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x15cd10: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15cd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15cd14: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15CD14u;
    {
        const bool branch_taken_0x15cd14 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD14u;
        // 0x15cd18: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd14) {
            ctx->pc = 0x15CD58u;
            goto label_15cd58;
        }
    }
    ctx->pc = 0x15CD1Cu;
    // 0x15cd1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15cd1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cd20:
    // 0x15cd20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15cd24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15cd24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15cd28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15cd2c: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x15cd2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x15cd30: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x15cd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x15cd34: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x15cd34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x15cd38: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x15cd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15cd3c: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x15cd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15cd40: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x15cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x15cd44: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x15cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
    // 0x15cd48: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x15cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x15cd4c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x15cd4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15cd50: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x15CD50u;
    {
        const bool branch_taken_0x15cd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD50u;
        // 0x15cd54: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd50) {
            ctx->pc = 0x15CD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cd20;
        }
    }
    ctx->pc = 0x15CD58u;
label_15cd58:
    // 0x15cd58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cd58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cd5c: 0x0  nop
    ctx->pc = 0x15cd5cu;
    // NOP
    // 0x15cd60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15cd60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15cd64: 0x0  nop
    ctx->pc = 0x15cd64u;
    // NOP
    // 0x15cd68: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x15CD68u;
    {
        const bool branch_taken_0x15cd68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15cd68) {
            ctx->pc = 0x15CD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CD68u;
            // 0x15cd6c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CD90u;
            goto label_15cd90;
        }
    }
    ctx->pc = 0x15CD70u;
    // 0x15cd70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15cd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15cd74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15cd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cd78: 0x0  nop
    ctx->pc = 0x15cd78u;
    // NOP
    // 0x15cd7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15cd7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15cd80: 0x0  nop
    ctx->pc = 0x15cd80u;
    // NOP
    // 0x15cd84: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x15CD84u;
    {
        const bool branch_taken_0x15cd84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15cd84) {
            ctx->pc = 0x15CD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CD84u;
            // 0x15cd88: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CD94u;
            goto label_15cd94;
        }
    }
    ctx->pc = 0x15CD8Cu;
    // 0x15cd8c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x15cd8cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_15cd90:
    // 0x15cd90: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x15cd90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_15cd94:
    // 0x15cd94: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x15cd94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15cd98: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15cd9c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x15cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15cda0: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x15cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x15cda4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15cda8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x15cda8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15cdac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CDACu;
    {
        const bool branch_taken_0x15cdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDACu;
        // 0x15cdb0: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdac) {
            ctx->pc = 0x15CDBCu;
            goto label_15cdbc;
        }
    }
    ctx->pc = 0x15CDB4u;
    // 0x15cdb4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x15cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15cdb8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x15cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_15cdbc:
    // 0x15cdbc: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x15cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15cdc0: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x15cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x15cdc4: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x15CDC4u;
    {
        const bool branch_taken_0x15cdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15cdc4) {
            ctx->pc = 0x15CDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CDC4u;
            // 0x15cdc8: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CDCCu;
            goto label_15cdcc;
        }
    }
    ctx->pc = 0x15CDCCu;
label_15cdcc:
    // 0x15cdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x15CDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDCCu;
        // 0x15cdd0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CDD4u;
    // 0x15cdd4: 0x0  nop
    ctx->pc = 0x15cdd4u;
    // NOP
    ctx->pc = 0x15cdd8u;
}
