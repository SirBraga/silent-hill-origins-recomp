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

// Function: sub_0014D4A8
// Address: 0x14d4a8 - 0x14d5f0
void sub_0014D4A8_0x14d4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D4A8_0x14d4a8");
#endif

    switch (ctx->pc) {
        case 0x14d4d0u: goto label_14d4d0;
        default: break;
    }

    ctx->pc = 0x14d4a8u;

    // 0x14d4a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d4ac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14d4b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14d4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14d4b4: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x14d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
    // 0x14d4b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d4bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d4c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14d4c4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x14d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x14d4c8: 0xc043c50  jal         func_10F140
    ctx->pc = 0x14D4C8u;
    SET_GPR_U32(ctx, 31, 0x14D4D0u);
    ctx->pc = 0x14D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D4C8u;
    // 0x14d4cc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F140u, 0x14D4C8u, 0x14D4D0u)) {
        return;
    }
    ctx->pc = 0x14D4D0u;
label_14d4d0:
    // 0x14d4d0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x14d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x14d4d4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14d4d8: 0x24631f08  addiu       $v1, $v1, 0x1F08
    ctx->pc = 0x14d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7944));
    // 0x14d4dc: 0x24421f20  addiu       $v0, $v0, 0x1F20
    ctx->pc = 0x14d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7968));
    // 0x14d4e0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x14d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x14d4e4: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x14d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x14d4e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x14d4ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d4f0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x14d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x14d4f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14d4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14d4f8: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x14d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x14d4fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14d4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d500: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x14d500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x14d504: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x14d504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x14d508: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x14d508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x14d50c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14d50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14d510: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d514: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x14d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14d518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14d51c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x14d51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14d520: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x14d520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x14d524: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x14d524u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x14d528: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14d528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14d52c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x14d52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x14d530: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x14d530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x14d534: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14d534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14d538: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x14d538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x14d53c: 0xe6020020  swc1        $f2, 0x20($s0)
    ctx->pc = 0x14d53cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x14d540: 0xe6030138  swc1        $f3, 0x138($s0)
    ctx->pc = 0x14d540u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x14d544: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x14d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x14d548: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x14d548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x14d54c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x14d54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x14d550: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x14d550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x14d554: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x14d554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x14d558: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x14d558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x14d55c: 0xe6040098  swc1        $f4, 0x98($s0)
    ctx->pc = 0x14d55cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x14d560: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x14d560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x14d564: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x14d564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x14d568: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x14d568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x14d56c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x14d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x14d570: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x14d570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x14d574: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x14d574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x14d578: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x14d578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x14d57c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x14d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x14d580: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x14d580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x14d584: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x14d584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x14d588: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x14d588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x14d58c: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x14d58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x14d590: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x14d590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x14d594: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x14d594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x14d598: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x14d598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x14d59c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x14d59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x14d5a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d5a4: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x14d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x14d5a8: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x14d5a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x14d5ac: 0xe6040094  swc1        $f4, 0x94($s0)
    ctx->pc = 0x14d5acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x14d5b0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x14d5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x14d5b4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x14d5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x14d5b8: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x14d5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x14d5bc: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x14d5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x14d5c0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x14d5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x14d5c4: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x14d5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x14d5c8: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x14d5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x14d5cc: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x14d5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x14d5d0: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x14d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x14d5d4: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x14d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x14d5d8: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x14d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x14d5dc: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x14d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x14d5e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14d5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14D5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D5E8u;
        // 0x14d5ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D5F0u;
}
