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

// Function: sub_001563D0
// Address: 0x1563d0 - 0x1564a8
void sub_001563D0_0x1563d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001563D0_0x1563d0");
#endif

    switch (ctx->pc) {
        case 0x15640cu: goto label_15640c;
        case 0x156424u: goto label_156424;
        case 0x15642cu: goto label_15642c;
        case 0x156460u: goto label_156460;
        case 0x156470u: goto label_156470;
        default: break;
    }

    ctx->pc = 0x1563d0u;

    // 0x1563d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1563d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1563d4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1563d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1563d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1563d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1563dc: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1563dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1563e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1563e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1563e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1563e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1563e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1563e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1563ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1563ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1563f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1563f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1563f4: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x1563f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1563f8: 0xae1200a8  sw          $s2, 0xA8($s0)
    ctx->pc = 0x1563f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 18));
    // 0x1563fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1563fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156404: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x156404u;
    SET_GPR_U32(ctx, 31, 0x15640Cu);
    ctx->pc = 0x156408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156404u;
    // 0x156408: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x156404u, 0x15640Cu)) {
        return;
    }
    ctx->pc = 0x15640Cu;
label_15640c:
    // 0x15640c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x15640cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x156410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156414: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x156414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    // 0x156418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15641c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x15641Cu;
    SET_GPR_U32(ctx, 31, 0x156424u);
    ctx->pc = 0x156420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15641Cu;
    // 0x156420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x15641Cu, 0x156424u)) {
        return;
    }
    ctx->pc = 0x156424u;
label_156424:
    // 0x156424: 0xc055976  jal         func_1565D8
    ctx->pc = 0x156424u;
    SET_GPR_U32(ctx, 31, 0x15642Cu);
    ctx->pc = 0x156428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156424u;
    // 0x156428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1565D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1565D8u, 0x156424u, 0x15642Cu)) {
        return;
    }
    ctx->pc = 0x15642Cu;
label_15642c:
    // 0x15642c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15642cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x156430: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156434: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x156434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x156438: 0xc462f03c  lwc1        $f2, -0xFC4($v1)
    ctx->pc = 0x156438u;
    { uint32_t bits = FAST_READ32(0x6BF03Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15643c: 0xc4a1f040  lwc1        $f1, -0xFC0($a1)
    ctx->pc = 0x15643cu;
    { uint32_t bits = FAST_READ32(0x6BF040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156440: 0x260400b4  addiu       $a0, $s0, 0xB4
    ctx->pc = 0x156440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x156444: 0xc440f048  lwc1        $f0, -0xFB8($v0)
    ctx->pc = 0x156444u;
    { uint32_t bits = FAST_READ32(0x6BF048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15644c: 0xe60200d4  swc1        $f2, 0xD4($s0)
    ctx->pc = 0x15644cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x156450: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x156450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x156454: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x156454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x156458: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x156458u;
    SET_GPR_U32(ctx, 31, 0x156460u);
    ctx->pc = 0x15645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156458u;
    // 0x15645c: 0xe60100d8  swc1        $f1, 0xD8($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x156458u, 0x156460u)) {
        return;
    }
    ctx->pc = 0x156460u;
label_156460:
    // 0x156460: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x156460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x156464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156468: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x156468u;
    SET_GPR_U32(ctx, 31, 0x156470u);
    ctx->pc = 0x15646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156468u;
    // 0x15646c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x156468u, 0x156470u)) {
        return;
    }
    ctx->pc = 0x156470u;
label_156470:
    // 0x156470: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x156470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x156474: 0xae1200e0  sw          $s2, 0xE0($s0)
    ctx->pc = 0x156474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 18));
    // 0x156478: 0xae1200dc  sw          $s2, 0xDC($s0)
    ctx->pc = 0x156478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 18));
    // 0x15647c: 0xa20300eb  sb          $v1, 0xEB($s0)
    ctx->pc = 0x15647cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 235), (uint8_t)GPR_U32(ctx, 3));
    // 0x156480: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x156480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x156484: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x156484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x156488: 0xa20000ef  sb          $zero, 0xEF($s0)
    ctx->pc = 0x156488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 239), (uint8_t)GPR_U32(ctx, 0));
    // 0x15648c: 0xa20000e7  sb          $zero, 0xE7($s0)
    ctx->pc = 0x15648cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 231), (uint8_t)GPR_U32(ctx, 0));
    // 0x156490: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x156490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156494: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x156494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156498: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x156498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15649c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15649cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1564a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1564A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1564A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564A0u;
        // 0x1564a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1564A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1564A8u;
}
