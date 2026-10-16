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

// Function: sub_0025EBA0
// Address: 0x25eba0 - 0x25ec60
void sub_0025EBA0_0x25eba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EBA0_0x25eba0");
#endif

    switch (ctx->pc) {
        case 0x25ebbcu: goto label_25ebbc;
        case 0x25ebd0u: goto label_25ebd0;
        default: break;
    }

    ctx->pc = 0x25eba0u;

    // 0x25eba0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25eba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25eba4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x25eba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x25eba8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x25eba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x25ebac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25ebacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebb0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x25ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x25ebb4: 0xc089312  jal         func_224C48
    ctx->pc = 0x25EBB4u;
    SET_GPR_U32(ctx, 31, 0x25EBBCu);
    ctx->pc = 0x25EBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBB4u;
    // 0x25ebb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224C48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224C48u, 0x25EBB4u, 0x25EBBCu)) {
        return;
    }
    ctx->pc = 0x25EBBCu;
label_25ebbc:
    // 0x25ebbc: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x25ebbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x25ebc0: 0x26100094  addiu       $s0, $s0, 0x94
    ctx->pc = 0x25ebc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x25ebc4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x25ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25ebc8: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x25ebc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebcc: 0x0  nop
    ctx->pc = 0x25ebccu;
    // NOP
label_25ebd0:
    // 0x25ebd0: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x25EBD0u;
    {
        const bool branch_taken_0x25ebd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ebd0) {
            ctx->pc = 0x25EC14u;
            goto label_25ec14;
        }
    }
    ctx->pc = 0x25EBD8u;
    // 0x25ebd8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x25ebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ebdc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x25ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ebe0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x25ebe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25ebe4: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x25ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25ebe8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25ebe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ebec: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x25ebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25ebf0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x25ebf0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x25ebf4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x25ebf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ebf8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x25ebf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25ebfc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x25ebfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x25ec00: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25ec00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x25ec04: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x25ec04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ec08: 0x0  nop
    ctx->pc = 0x25ec08u;
    // NOP
    // 0x25ec0c: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x25EC0Cu;
    {
        const bool branch_taken_0x25ec0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ec0c) {
            ctx->pc = 0x25EC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EC0Cu;
            // 0x25ec10: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EC44u;
            goto label_25ec44;
        }
    }
    ctx->pc = 0x25EC14u;
label_25ec14:
    // 0x25ec14: 0x6a040007  ldl         $a0, 0x7($s0)
    ctx->pc = 0x25ec14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x25ec18: 0x6e040000  ldr         $a0, 0x0($s0)
    ctx->pc = 0x25ec18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x25ec1c: 0x6a05000f  ldl         $a1, 0xF($s0)
    ctx->pc = 0x25ec1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x25ec20: 0x6e050008  ldr         $a1, 0x8($s0)
    ctx->pc = 0x25ec20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x25ec24: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x25ec24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25ec28: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x25ec28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25ec2c: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x25ec2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25ec30: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x25ec30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25ec34: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x25ec34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25ec38: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x25ec38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x25ec3c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x25ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x25ec40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25ec44:
    // 0x25ec44: 0x461ffe2  bgez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x25EC44u;
    {
        const bool branch_taken_0x25ec44 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x25EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC44u;
        // 0x25ec48: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec44) {
            ctx->pc = 0x25EBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ebd0;
        }
    }
    ctx->pc = 0x25EC4Cu;
    // 0x25ec4c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x25ec4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ec50: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x25ec50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25ec54: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x25ec54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x25EC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC58u;
        // 0x25ec5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EC60u;
}
