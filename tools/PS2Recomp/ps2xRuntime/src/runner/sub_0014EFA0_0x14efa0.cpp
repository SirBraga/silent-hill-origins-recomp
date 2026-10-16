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

// Function: sub_0014EFA0
// Address: 0x14efa0 - 0x14f080
void sub_0014EFA0_0x14efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EFA0_0x14efa0");
#endif

    ctx->pc = 0x14efa0u;

    // 0x14efa0: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x14efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x14efa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14efa8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x14efa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x14efac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x14efacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x14efb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14efb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14efb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14efb8: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x14efb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14efbc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14efbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14efc0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x14efc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14efc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14efc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14efc8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14efc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14efcc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x14efccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x14efd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14efd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14efd4: 0xe4810138  swc1        $f1, 0x138($a0)
    ctx->pc = 0x14efd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 312), bits); }
    // 0x14efd8: 0xe4840014  swc1        $f4, 0x14($a0)
    ctx->pc = 0x14efd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x14efdc: 0xe4830098  swc1        $f3, 0x98($a0)
    ctx->pc = 0x14efdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x14efe0: 0xac8200bc  sw          $v0, 0xBC($a0)
    ctx->pc = 0x14efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 2));
    // 0x14efe4: 0xe48200d0  swc1        $f2, 0xD0($a0)
    ctx->pc = 0x14efe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x14efe8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x14efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x14efec: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x14efecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x14eff0: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x14eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x14eff4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x14eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x14eff8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x14eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x14effc: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x14effcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x14f000: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x14f000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x14f004: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x14f004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x14f008: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x14f008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x14f00c: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x14f00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x14f010: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x14f010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x14f014: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x14f014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x14f018: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x14f018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x14f01c: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x14f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x14f020: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x14f020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x14f024: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x14f024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x14f028: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x14f028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x14f02c: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x14f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x14f030: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x14f030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x14f034: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x14f034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x14f038: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x14f038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x14f03c: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x14f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x14f040: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x14f040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x14f044: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x14f044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x14f048: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x14f048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x14f04c: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x14f04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
    // 0x14f050: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x14f050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x14f054: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x14f054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x14f058: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14f058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f05c: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x14f05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x14f060: 0xe4800130  swc1        $f0, 0x130($a0)
    ctx->pc = 0x14f060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 304), bits); }
    // 0x14f064: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x14f064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x14f068: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14f068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x14f06c: 0xe48000f4  swc1        $f0, 0xF4($a0)
    ctx->pc = 0x14f06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x14f070: 0xe48000f8  swc1        $f0, 0xF8($a0)
    ctx->pc = 0x14f070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
    // 0x14f074: 0xe48000fc  swc1        $f0, 0xFC($a0)
    ctx->pc = 0x14f074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
    // 0x14f078: 0x3e00008  jr          $ra
    ctx->pc = 0x14F078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F078u;
        // 0x14f07c: 0xac800100  sw          $zero, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F080u;
}
