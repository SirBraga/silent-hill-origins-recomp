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

// Function: sub_00313E68
// Address: 0x313e68 - 0x313f10
void sub_00313E68_0x313e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313E68_0x313e68");
#endif

    switch (ctx->pc) {
        case 0x313ed4u: goto label_313ed4;
        default: break;
    }

    ctx->pc = 0x313e68u;

    // 0x313e68: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x313e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x313e6c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x313e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x313e70: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x313e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x313e74: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x313e74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x313e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e7c: 0x8c4c6ccc  lw          $t4, 0x6CCC($v0)
    ctx->pc = 0x313e7cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x686CCCu));
    // 0x313e80: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x313e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e84: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x313e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x313e88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x313e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e8c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x313e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x313e90: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x313e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x313e94: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x313e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x313e98: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x313e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x313e9c: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x313e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x313ea0: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x313ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x313ea4: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x313ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x313ea8: 0xe7ac00b8  swc1        $f12, 0xB8($sp)
    ctx->pc = 0x313ea8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x313eac: 0xe7ae00bc  swc1        $f14, 0xBC($sp)
    ctx->pc = 0x313eacu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x313eb0: 0xe7b000c0  swc1        $f16, 0xC0($sp)
    ctx->pc = 0x313eb0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x313eb4: 0xe7b200c4  swc1        $f18, 0xC4($sp)
    ctx->pc = 0x313eb4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x313eb8: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x313eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x313ebc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x313ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x313ec0: 0xafac0054  sw          $t4, 0x54($sp)
    ctx->pc = 0x313ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    // 0x313ec4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x313ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x313ec8: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x313ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x313ecc: 0xc0c5fe4  jal         func_317F90
    ctx->pc = 0x313ECCu;
    SET_GPR_U32(ctx, 31, 0x313ED4u);
    ctx->pc = 0x313ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313ECCu;
    // 0x313ed0: 0xafb00014  sw          $s0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317F90u, 0x313ECCu, 0x313ED4u)) {
        return;
    }
    ctx->pc = 0x313ED4u;
label_313ed4:
    // 0x313ed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x313ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ed8: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x313ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x313edc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x313EDCu;
    {
        const bool branch_taken_0x313edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313EDCu;
        // 0x313ee0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313edc) {
            ctx->pc = 0x313EECu;
            goto label_313eec;
        }
    }
    ctx->pc = 0x313EE4u;
    // 0x313ee4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x313EE4u;
    {
        const bool branch_taken_0x313ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313EE4u;
        // 0x313ee8: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ee4) {
            ctx->pc = 0x313EF8u;
            goto label_313ef8;
        }
    }
    ctx->pc = 0x313EECu;
label_313eec:
    // 0x313eec: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x313eecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x313ef0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x313ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x313ef4: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x313ef4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
label_313ef8:
    // 0x313ef8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x313ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x313efc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x313efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313f00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x313f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x313f04: 0x3e00008  jr          $ra
    ctx->pc = 0x313F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313F04u;
        // 0x313f08: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313F0Cu;
    // 0x313f0c: 0x0  nop
    ctx->pc = 0x313f0cu;
    // NOP
    ctx->pc = 0x313f10u;
}
