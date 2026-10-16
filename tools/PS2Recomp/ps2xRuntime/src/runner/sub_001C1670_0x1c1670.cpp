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

// Function: sub_001C1670
// Address: 0x1c1670 - 0x1c1750
void sub_001C1670_0x1c1670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1670_0x1c1670");
#endif

    ctx->pc = 0x1c1670u;

    // 0x1c1670: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c1670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1674: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x1c1674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x1c1678: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c1678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c167c: 0xc4a002e8  lwc1        $f0, 0x2E8($a1)
    ctx->pc = 0x1c167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1680: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c1680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1684: 0x0  nop
    ctx->pc = 0x1c1684u;
    // NOP
    // 0x1c1688: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C1688u;
    {
        const bool branch_taken_0x1c1688 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1688) {
            ctx->pc = 0x1C168Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1688u;
            // 0x1c168c: 0xe4a202e8  swc1        $f2, 0x2E8($a1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 744), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1690u;
            goto label_1c1690;
        }
    }
    ctx->pc = 0x1C1690u;
label_1c1690:
    // 0x1c1690: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c1690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c1694: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x1c1694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x1c1698: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x1c1698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x1c169c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c169cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c16a0: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x1c16a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33830Cu));
    // 0x1c16a4: 0x8c640198  lw          $a0, 0x198($v1)
    ctx->pc = 0x1c16a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x1c16a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C16A8u;
    {
        const bool branch_taken_0x1c16a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16A8u;
        // 0x1c16ac: 0xc4a0000c  lwc1        $f0, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16a8) {
            ctx->pc = 0x1C16BCu;
            goto label_1c16bc;
        }
    }
    ctx->pc = 0x1C16B0u;
    // 0x1c16b0: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x1c16b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x1c16b4: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x1c16b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x1c16b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c16b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c16bc:
    // 0x1c16bc: 0xc4a102e8  lwc1        $f1, 0x2E8($a1)
    ctx->pc = 0x1c16bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c16c0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c16c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c16c4: 0x0  nop
    ctx->pc = 0x1c16c4u;
    // NOP
    // 0x1c16c8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1c16c8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x1c16cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c16ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c16d0: 0x0  nop
    ctx->pc = 0x1c16d0u;
    // NOP
    // 0x1c16d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C16D4u;
    {
        const bool branch_taken_0x1c16d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c16d4) {
            ctx->pc = 0x1C16D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C16D4u;
            // 0x1c16d8: 0xe4a002e8  swc1        $f0, 0x2E8($a1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 744), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C16DCu;
            goto label_1c16dc;
        }
    }
    ctx->pc = 0x1C16DCu;
label_1c16dc:
    // 0x1c16dc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1c16dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c16e0: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1c16e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1c16e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c16e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c16e8: 0xc4a002e4  lwc1        $f0, 0x2E4($a1)
    ctx->pc = 0x1c16e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c16ec: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c16ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c16f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c16f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c16f4: 0x0  nop
    ctx->pc = 0x1c16f4u;
    // NOP
    // 0x1c16f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C16F8u;
    {
        const bool branch_taken_0x1c16f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c16f8) {
            ctx->pc = 0x1C16FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C16F8u;
            // 0x1c16fc: 0xe4a102e4  swc1        $f1, 0x2E4($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 740), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1700u;
            goto label_1c1700;
        }
    }
    ctx->pc = 0x1C1700u;
label_1c1700:
    // 0x1c1700: 0xc4a002e4  lwc1        $f0, 0x2E4($a1)
    ctx->pc = 0x1c1700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1704: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c1704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1708: 0x0  nop
    ctx->pc = 0x1c1708u;
    // NOP
    // 0x1c170c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C170Cu;
    {
        const bool branch_taken_0x1c170c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c170c) {
            ctx->pc = 0x1C1710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C170Cu;
            // 0x1c1710: 0xe4a202e4  swc1        $f2, 0x2E4($a1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 740), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1714u;
            goto label_1c1714;
        }
    }
    ctx->pc = 0x1C1714u;
label_1c1714:
    // 0x1c1714: 0xc4a002e4  lwc1        $f0, 0x2E4($a1)
    ctx->pc = 0x1c1714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1718: 0xc4a102e8  lwc1        $f1, 0x2E8($a1)
    ctx->pc = 0x1c1718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c171c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c171cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1c1720: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1c1720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c1724: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c1724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c1728: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c1728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c172c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c172cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1730: 0x0  nop
    ctx->pc = 0x1c1730u;
    // NOP
    // 0x1c1734: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c1738: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c1738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c173c: 0x0  nop
    ctx->pc = 0x1c173cu;
    // NOP
    // 0x1c1740: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c1740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c1744: 0xe4a002e4  swc1        $f0, 0x2E4($a1)
    ctx->pc = 0x1c1744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 740), bits); }
    // 0x1c1748: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1748u;
        // 0x1c174c: 0xe4a102e8  swc1        $f1, 0x2E8($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 744), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1750u;
}
