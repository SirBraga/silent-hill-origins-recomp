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

// Function: sub_002E1F48
// Address: 0x2e1f48 - 0x2e2000
void sub_002E1F48_0x2e1f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1F48_0x2e1f48");
#endif

    switch (ctx->pc) {
        case 0x2e1f78u: goto label_2e1f78;
        case 0x2e1f88u: goto label_2e1f88;
        default: break;
    }

    ctx->pc = 0x2e1f48u;

    // 0x2e1f48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e1f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e1f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e1f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e1f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e1f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e1f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e1f5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e1f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e1f60: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x2e1f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2e1f64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e1f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1f6c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2e1f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e1f70: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E1F70u;
    SET_GPR_U32(ctx, 31, 0x2E1F78u);
    ctx->pc = 0x2E1F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1F70u;
    // 0x2e1f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E1F70u, 0x2E1F78u)) {
        return;
    }
    ctx->pc = 0x2E1F78u;
label_2e1f78:
    // 0x2e1f78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e1f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e1f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f80: 0xc0b806a  jal         func_2E01A8
    ctx->pc = 0x2E1F80u;
    SET_GPR_U32(ctx, 31, 0x2E1F88u);
    ctx->pc = 0x2E1F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1F80u;
    // 0x2e1f84: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E01A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E01A8u, 0x2E1F80u, 0x2E1F88u)) {
        return;
    }
    ctx->pc = 0x2E1F88u;
label_2e1f88:
    // 0x2e1f88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e1f8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e1f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e1f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1f94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e1f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e1f98: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e1f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e1f9c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e1f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e1fa0: 0x30630018  andi        $v1, $v1, 0x18
    ctx->pc = 0x2e1fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24);
    // 0x2e1fa4: 0xc78082a4  lwc1        $f0, -0x7D5C($gp)
    ctx->pc = 0x2e1fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1fa8: 0xc78182a8  lwc1        $f1, -0x7D58($gp)
    ctx->pc = 0x2e1fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1fac: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e1facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2e1fb0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2e1fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2e1fb4: 0xe6020048  swc1        $f2, 0x48($s0)
    ctx->pc = 0x2e1fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2e1fb8: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x2e1fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2e1fbc: 0xe6030054  swc1        $f3, 0x54($s0)
    ctx->pc = 0x2e1fbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e1fc0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2e1fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2e1fc4: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x2e1fc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2e1fc8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2e1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2e1fcc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2e1fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2e1fd0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e1fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e1fd4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2e1fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2e1fd8: 0xe6030050  swc1        $f3, 0x50($s0)
    ctx->pc = 0x2e1fd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e1fdc: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2e1fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2e1fe0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2e1fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2e1fe4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e1fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1fe8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e1fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1fec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e1fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1FF4u;
        // 0x2e1ff8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1FFCu;
    // 0x2e1ffc: 0x0  nop
    ctx->pc = 0x2e1ffcu;
    // NOP
    ctx->pc = 0x2e2000u;
}
