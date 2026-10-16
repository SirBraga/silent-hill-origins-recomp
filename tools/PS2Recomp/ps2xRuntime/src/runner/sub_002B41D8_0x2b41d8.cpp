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

// Function: sub_002B41D8
// Address: 0x2b41d8 - 0x2b4250
void sub_002B41D8_0x2b41d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B41D8_0x2b41d8");
#endif

    ctx->pc = 0x2b41d8u;

    // 0x2b41d8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2b41d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b41dc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2b41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2b41e0: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2b41e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b41e4: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x2b41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b41e8: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x2b41e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b41ec: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x2b41ecu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2b41f0: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2b41f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b41f4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b41f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b41f8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b41f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b41fc: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2b41fcu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2b4200: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2b4200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2b4204: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b4204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4208: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b4208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b420c: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x2b420cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2b4210: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x2b4210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2b4214: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2b4214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4218: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b4218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b421c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x2b421cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x2b4220: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2b4220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b4224: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2b4224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4228: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2b4228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b422c: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x2b422cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x2b4230: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2b4230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b4234: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b4234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4238: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2b4238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b423c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x2b423cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x2b4240: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4240u;
        // 0x2b4244: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4248u;
    // 0x2b4248: 0x0  nop
    ctx->pc = 0x2b4248u;
    // NOP
    // 0x2b424c: 0x0  nop
    ctx->pc = 0x2b424cu;
    // NOP
    ctx->pc = 0x2b4250u;
}
