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

// Function: sub_002651A0
// Address: 0x2651a0 - 0x265558
void sub_002651A0_0x2651a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002651A0_0x2651a0");
#endif

    switch (ctx->pc) {
        case 0x2651d0u: goto label_2651d0;
        case 0x265258u: goto label_265258;
        case 0x265278u: goto label_265278;
        default: break;
    }

    ctx->pc = 0x2651a0u;

    // 0x2651a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2651a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2651a4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x2651a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x2651a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2651a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2651ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2651acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2651b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2651b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2651b4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2651b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2651b8: 0x246363b0  addiu       $v1, $v1, 0x63B0
    ctx->pc = 0x2651b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25520));
    // 0x2651bc: 0x8c620764  lw          $v0, 0x764($v1)
    ctx->pc = 0x2651bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x706B14u));
    // 0x2651c0: 0x8c670738  lw          $a3, 0x738($v1)
    ctx->pc = 0x2651c0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x706AE8u));
    // 0x2651c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2651c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2651c8: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2651C8u;
    {
        const bool branch_taken_0x2651c8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2651CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651C8u;
        // 0x2651cc: 0x8c66073c  lw          $a2, 0x73C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651c8) {
            ctx->pc = 0x26524Cu;
            goto label_26524c;
        }
    }
    ctx->pc = 0x2651D0u;
label_2651d0:
    // 0x2651d0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2651d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2651d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2651d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2651d8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2651d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2651dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2651dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2651e0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2651e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2651e4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2651e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2651e8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2651e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2651ec: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2651ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2651f0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2651f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2651f4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2651f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2651f8: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x2651f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2651fc: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x2651fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x265200: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x265200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x265204: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x265204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x265208: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x265208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26520c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x26520cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x265210: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x265210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x265214: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x265214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265218: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x265218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x26521c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x26521cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x265220: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x265220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265224: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x265224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x265228: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x265228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x26522c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x26522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265230: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x265230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x265234: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x265234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x265238: 0x8c620764  lw          $v0, 0x764($v1)
    ctx->pc = 0x265238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1892)));
    // 0x26523c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x26523cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x265240: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x265240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x265244: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x265244u;
    {
        const bool branch_taken_0x265244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265244u;
        // 0x265248: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265244) {
            ctx->pc = 0x2651D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2651d0;
        }
    }
    ctx->pc = 0x26524Cu;
label_26524c:
    // 0x26524c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26524cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265250: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x265250u;
    SET_GPR_U32(ctx, 31, 0x265258u);
    ctx->pc = 0x265254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265250u;
    // 0x265254: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x265250u, 0x265258u)) {
        return;
    }
    ctx->pc = 0x265258u;
label_265258:
    // 0x265258: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x265258u;
    {
        const bool branch_taken_0x265258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265258u;
        // 0x26525c: 0x3c026c0a  lui         $v0, 0x6C0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27658 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265258) {
            ctx->pc = 0x265280u;
            goto label_265280;
        }
    }
    ctx->pc = 0x265260u;
    // 0x265260: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x265260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x265264: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x265264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x265268: 0x2484b990  addiu       $a0, $a0, -0x4670
    ctx->pc = 0x265268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949264));
    // 0x26526c: 0x24a5b9b0  addiu       $a1, $a1, -0x4650
    ctx->pc = 0x26526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949296));
    // 0x265270: 0xc0c4f0a  jal         func_313C28
    ctx->pc = 0x265270u;
    SET_GPR_U32(ctx, 31, 0x265278u);
    ctx->pc = 0x265274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265270u;
    // 0x265274: 0x240600f3  addiu       $a2, $zero, 0xF3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313C28u, 0x265270u, 0x265278u)) {
        return;
    }
    ctx->pc = 0x265278u;
label_265278:
    // 0x265278: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x265278u;
    {
        const bool branch_taken_0x265278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265278u;
        // 0x26527c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265278) {
            ctx->pc = 0x265548u;
            goto label_265548;
        }
    }
    ctx->pc = 0x265280u;
label_265280:
    // 0x265280: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x265280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x265284: 0x344203cf  ori         $v0, $v0, 0x3CF
    ctx->pc = 0x265284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)975);
    // 0x265288: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x265288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x26528c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26528cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265290: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x265290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x265294: 0x34a5000a  ori         $a1, $a1, 0xA
    ctx->pc = 0x265294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10);
    // 0x265298: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x265298u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x26529c: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x26529cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x2652a0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x2652a0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2652a4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2652a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2652a8: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x2652a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2652ac: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2652acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2652b0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2652b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2652b4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2652b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2652b8: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x2652b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2652bc: 0x260563b0  addiu       $a1, $s0, 0x63B0
    ctx->pc = 0x2652bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 25520));
    // 0x2652c0: 0x8ca20728  lw          $v0, 0x728($a1)
    ctx->pc = 0x2652c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x2652c4: 0xc4a30740  lwc1        $f3, 0x740($a1)
    ctx->pc = 0x2652c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2652c8: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x2652c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2652cc: 0xc4a106f8  lwc1        $f1, 0x6F8($a1)
    ctx->pc = 0x2652ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2652d0: 0xc4a20744  lwc1        $f2, 0x744($a1)
    ctx->pc = 0x2652d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2652d4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2652d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2652d8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2652d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2652dc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2652dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2652e0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2652e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2652e4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2652e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2652e8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2652e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2652ec: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2652ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2652f0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2652f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2652f4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2652f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2652f8: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x2652f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x2652fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2652fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x265300: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x265300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x265304: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x265304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x265308: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265308u;
    {
        const bool branch_taken_0x265308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265308u;
        // 0x26530c: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x265308) {
            ctx->pc = 0x265320u;
            goto label_265320;
        }
    }
    ctx->pc = 0x265310u;
    // 0x265310: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x265310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x265314: 0x34219a34  ori         $at, $at, 0x9A34
    ctx->pc = 0x265314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39476);
    // 0x265318: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x265318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26531c: 0x0  nop
    ctx->pc = 0x26531cu;
    // NOP
label_265320:
    // 0x265320: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x265320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x265324: 0x34219a34  ori         $at, $at, 0x9A34
    ctx->pc = 0x265324u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39476);
    // 0x265328: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x265328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26532c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x26532cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x265330: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x265330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265334: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x265334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265338: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x26533c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26533cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265340: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x265340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265344: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x265344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x265348: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x265348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26534c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x26534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265350: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x265350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x265354: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x265354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x265358: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x265358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26535c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x26535cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x265360: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x265360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x265364: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265368: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x265368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26536c: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x26536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x265370: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x265370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265374: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265378: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x265378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26537c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x26537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265380: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x265380u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x265384: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x265384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265388: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x265388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26538c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x26538cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265390: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x265390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x265394: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x265394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265398: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x265398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26539c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x26539cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2653a0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2653a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2653a4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2653a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2653a8: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x2653a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2653ac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2653acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2653b0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2653b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2653b4: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x2653b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x2653b8: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2653b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2653bc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2653bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2653c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2653c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2653c4: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x2653c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2653c8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2653c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2653cc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2653ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2653d0: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x2653d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2653d4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2653d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2653d8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2653d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2653dc: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x2653dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2653e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2653e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2653e4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2653e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2653e8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2653e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2653ec: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2653ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2653f0: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2653f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2653f4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2653f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2653f8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2653f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2653fc: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x2653fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x265400: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x265400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265404: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265408: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x265408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26540c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x26540cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265410: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x265410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x265414: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x265414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265418: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x265418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26541c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x26541cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265420: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x265420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x265424: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x265424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265428: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x265428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26542c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x26542cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x265430: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x265430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265434: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x265434u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x265438: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x265438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x26543c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26543cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265440: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x265440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265444: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x265444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x265448: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x265448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x26544c: 0x8ca20728  lw          $v0, 0x728($a1)
    ctx->pc = 0x26544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x265450: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x265450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265454: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x265454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265458: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x265458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26545c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26545cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x265460: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x265460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265464: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x265464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x265468: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x265468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26546c: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x26546cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x265470: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x265470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x265474: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265478: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x265478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26547c: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x26547cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x265480: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x265480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265484: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x265484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265488: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x265488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26548c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26548cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x265490: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x265490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265494: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x265494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x265498: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x265498u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26549c: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x26549cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x2654a0: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x2654a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2654a4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2654a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2654a8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2654a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2654ac: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x2654acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x2654b0: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2654b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2654b4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2654b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2654b8: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x2654b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2654bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2654bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2654c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2654c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2654c4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2654c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2654c8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2654c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2654cc: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x2654ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x2654d0: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x2654d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2654d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2654d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2654d8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2654d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2654dc: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x2654dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x2654e0: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x2654e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2654e4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2654e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2654e8: 0xc461005c  lwc1        $f1, 0x5C($v1)
    ctx->pc = 0x2654e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2654ec: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2654ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2654f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2654f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2654f4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2654f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2654f8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2654f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2654fc: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x2654fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x265500: 0x24820090  addiu       $v0, $a0, 0x90
    ctx->pc = 0x265500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x265504: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265508: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x265508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26550c: 0xc4a2074c  lwc1        $f2, 0x74C($a1)
    ctx->pc = 0x26550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265510: 0xc4a30760  lwc1        $f3, 0x760($a1)
    ctx->pc = 0x265510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265514: 0xc4a00750  lwc1        $f0, 0x750($a1)
    ctx->pc = 0x265514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265518: 0xc4a1075c  lwc1        $f1, 0x75C($a1)
    ctx->pc = 0x265518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26551c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x26551cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265520: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x265520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265524: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x265524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x265528: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x265528u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26552c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x26552cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265530: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x265530u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x265534: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x265534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x265538: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26553c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26553cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265540: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x265540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265544: 0x0  nop
    ctx->pc = 0x265544u;
    // NOP
label_265548:
    // 0x265548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26554c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26554cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265550: 0x3e00008  jr          $ra
    ctx->pc = 0x265550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265550u;
        // 0x265554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265558u;
}
