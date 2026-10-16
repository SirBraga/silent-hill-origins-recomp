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

// Function: sub_0011F4E8
// Address: 0x11f4e8 - 0x11f570
void sub_0011F4E8_0x11f4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F4E8_0x11f4e8");
#endif

    switch (ctx->pc) {
        case 0x11f508u: goto label_11f508;
        case 0x11f518u: goto label_11f518;
        default: break;
    }

    ctx->pc = 0x11f4e8u;

    // 0x11f4e8: 0x24a2ffc0  addiu       $v0, $a1, -0x40
    ctx->pc = 0x11f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
    // 0x11f4ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11f4ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11f4f0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x11f4f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4f4: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x11f4f4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x11f4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f4fc: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x11f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x11f500: 0xc04f0fe  jal         func_13C3F8
    ctx->pc = 0x11F500u;
    SET_GPR_U32(ctx, 31, 0x11F508u);
    ctx->pc = 0x11F504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F500u;
    // 0x11f504: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3F8u, 0x11F500u, 0x11F508u)) {
        return;
    }
    ctx->pc = 0x11F508u;
label_11f508:
    // 0x11f508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f50c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F50Cu;
        // 0x11f510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F514u;
    // 0x11f514: 0x0  nop
    ctx->pc = 0x11f514u;
    // NOP
label_11f518:
    // 0x11f518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f51c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f520: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x11f520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x11f524: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11f524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f528: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x11f528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x11f52c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x11f52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x11f530: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x11f530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x11f534: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11f534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11f538: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x11f538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x11f53c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x11f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x11f540: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x11f540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x11f544: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x11f544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x11f548: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x11f548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x11f54c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x11f54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x11f550: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x11f550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x11f554: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x11f554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x11f558: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x11f558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x11f55c: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x11f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x11f560: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x11f560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x11f564: 0x3e00008  jr          $ra
    ctx->pc = 0x11F564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F564u;
        // 0x11f568: 0xe4a00034  swc1        $f0, 0x34($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F56Cu;
    // 0x11f56c: 0x0  nop
    ctx->pc = 0x11f56cu;
    // NOP
    ctx->pc = 0x11f570u;
}
