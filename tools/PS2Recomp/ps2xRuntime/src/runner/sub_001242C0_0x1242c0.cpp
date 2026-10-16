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

// Function: sub_001242C0
// Address: 0x1242c0 - 0x124420
void sub_001242C0_0x1242c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001242C0_0x1242c0");
#endif

    switch (ctx->pc) {
        case 0x1242e8u: goto label_1242e8;
        case 0x12431cu: goto label_12431c;
        case 0x12432cu: goto label_12432c;
        case 0x12433cu: goto label_12433c;
        case 0x12434cu: goto label_12434c;
        case 0x12435cu: goto label_12435c;
        case 0x12436cu: goto label_12436c;
        case 0x12437cu: goto label_12437c;
        case 0x12438cu: goto label_12438c;
        case 0x124394u: goto label_124394;
        case 0x1243a8u: goto label_1243a8;
        case 0x1243bcu: goto label_1243bc;
        case 0x1243c8u: goto label_1243c8;
        case 0x1243dcu: goto label_1243dc;
        case 0x1243fcu: goto label_1243fc;
        default: break;
    }

    ctx->pc = 0x1242c0u;

    // 0x1242c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1242c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1242c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1242c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1242c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1242c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1242cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1242ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242d0: 0x26300320  addiu       $s0, $s1, 0x320
    ctx->pc = 0x1242d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    // 0x1242d4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1242d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1242d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1242d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1242dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1242dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242e0: 0xc0681ba  jal         func_1A06E8
    ctx->pc = 0x1242E0u;
    SET_GPR_U32(ctx, 31, 0x1242E8u);
    ctx->pc = 0x1242E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242E0u;
    // 0x1242e4: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A06E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A06E8u, 0x1242E0u, 0x1242E8u)) {
        return;
    }
    ctx->pc = 0x1242E8u;
label_1242e8:
    // 0x1242e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1242e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242ec: 0x1240003d  beqz        $s2, . + 4 + (0x3D << 2)
    ctx->pc = 0x1242ECu;
    {
        const bool branch_taken_0x1242ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242ECu;
        // 0x1242f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242ec) {
            ctx->pc = 0x1243E4u;
            goto label_1243e4;
        }
    }
    ctx->pc = 0x1242F4u;
    // 0x1242f4: 0x8e02080c  lw          $v0, 0x80C($s0)
    ctx->pc = 0x1242f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2060)));
    // 0x1242f8: 0x8e030848  lw          $v1, 0x848($s0)
    ctx->pc = 0x1242f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x1242fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1242fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x124300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x124304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12430c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12430cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124310: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x124310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124314: 0xc048e08  jal         func_123820
    ctx->pc = 0x124314u;
    SET_GPR_U32(ctx, 31, 0x12431Cu);
    ctx->pc = 0x124318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124314u;
    // 0x124318: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123820u, 0x124314u, 0x12431Cu)) {
        return;
    }
    ctx->pc = 0x12431Cu;
label_12431c:
    // 0x12431c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124320: 0x26250d2c  addiu       $a1, $s1, 0xD2C
    ctx->pc = 0x124320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3372));
    // 0x124324: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x124324u;
    SET_GPR_U32(ctx, 31, 0x12432Cu);
    ctx->pc = 0x124328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124324u;
    // 0x124328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x124324u, 0x12432Cu)) {
        return;
    }
    ctx->pc = 0x12432Cu;
label_12432c:
    // 0x12432c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124330: 0x26250d34  addiu       $a1, $s1, 0xD34
    ctx->pc = 0x124330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3380));
    // 0x124334: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x124334u;
    SET_GPR_U32(ctx, 31, 0x12433Cu);
    ctx->pc = 0x124338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124334u;
    // 0x124338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x124334u, 0x12433Cu)) {
        return;
    }
    ctx->pc = 0x12433Cu;
label_12433c:
    // 0x12433c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12433cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124340: 0x26250d3c  addiu       $a1, $s1, 0xD3C
    ctx->pc = 0x124340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3388));
    // 0x124344: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x124344u;
    SET_GPR_U32(ctx, 31, 0x12434Cu);
    ctx->pc = 0x124348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124344u;
    // 0x124348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x124344u, 0x12434Cu)) {
        return;
    }
    ctx->pc = 0x12434Cu;
label_12434c:
    // 0x12434c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12434cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124354: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x124354u;
    SET_GPR_U32(ctx, 31, 0x12435Cu);
    ctx->pc = 0x124358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124354u;
    // 0x124358: 0x26250d44  addiu       $a1, $s1, 0xD44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x124354u, 0x12435Cu)) {
        return;
    }
    ctx->pc = 0x12435Cu;
label_12435c:
    // 0x12435c: 0xc60c0810  lwc1        $f12, 0x810($s0)
    ctx->pc = 0x12435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x124360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124364: 0xc06802e  jal         func_1A00B8
    ctx->pc = 0x124364u;
    SET_GPR_U32(ctx, 31, 0x12436Cu);
    ctx->pc = 0x124368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124364u;
    // 0x124368: 0x26250d4c  addiu       $a1, $s1, 0xD4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3404));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x124364u, 0x12436Cu)) {
        return;
    }
    ctx->pc = 0x12436Cu;
label_12436c:
    // 0x12436c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12436cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124370: 0x26250d54  addiu       $a1, $s1, 0xD54
    ctx->pc = 0x124370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3412));
    // 0x124374: 0xc06802e  jal         func_1A00B8
    ctx->pc = 0x124374u;
    SET_GPR_U32(ctx, 31, 0x12437Cu);
    ctx->pc = 0x124378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124374u;
    // 0x124378: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x124374u, 0x12437Cu)) {
        return;
    }
    ctx->pc = 0x12437Cu;
label_12437c:
    // 0x12437c: 0x26250d5c  addiu       $a1, $s1, 0xD5C
    ctx->pc = 0x12437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3420));
    // 0x124380: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x124380u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x124384: 0xc06802e  jal         func_1A00B8
    ctx->pc = 0x124384u;
    SET_GPR_U32(ctx, 31, 0x12438Cu);
    ctx->pc = 0x124388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124384u;
    // 0x124388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x124384u, 0x12438Cu)) {
        return;
    }
    ctx->pc = 0x12438Cu;
label_12438c:
    // 0x12438c: 0xc04094c  jal         func_102530
    ctx->pc = 0x12438Cu;
    SET_GPR_U32(ctx, 31, 0x124394u);
    ctx->pc = 0x124390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12438Cu;
    // 0x124390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x12438Cu, 0x124394u)) {
        return;
    }
    ctx->pc = 0x124394u;
label_124394:
    // 0x124394: 0xc601081c  lwc1        $f1, 0x81C($s0)
    ctx->pc = 0x124394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12439c: 0xe600081c  swc1        $f0, 0x81C($s0)
    ctx->pc = 0x12439cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2076), bits); }
    // 0x1243a0: 0xc040950  jal         func_102540
    ctx->pc = 0x1243A0u;
    SET_GPR_U32(ctx, 31, 0x1243A8u);
    ctx->pc = 0x1243A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243A0u;
    // 0x1243a4: 0xe6010820  swc1        $f1, 0x820($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2080), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x102540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102540u, 0x1243A0u, 0x1243A8u)) {
        return;
    }
    ctx->pc = 0x1243A8u;
label_1243a8:
    // 0x1243a8: 0xc6010828  lwc1        $f1, 0x828($s0)
    ctx->pc = 0x1243a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1243ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1243acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243b0: 0xe6000828  swc1        $f0, 0x828($s0)
    ctx->pc = 0x1243b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2088), bits); }
    // 0x1243b4: 0xc04095e  jal         func_102578
    ctx->pc = 0x1243B4u;
    SET_GPR_U32(ctx, 31, 0x1243BCu);
    ctx->pc = 0x1243B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243B4u;
    // 0x1243b8: 0xe601082c  swc1        $f1, 0x82C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2092), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x102578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102578u, 0x1243B4u, 0x1243BCu)) {
        return;
    }
    ctx->pc = 0x1243BCu;
label_1243bc:
    // 0x1243bc: 0xe6000824  swc1        $f0, 0x824($s0)
    ctx->pc = 0x1243bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2084), bits); }
    // 0x1243c0: 0xc068218  jal         func_1A0860
    ctx->pc = 0x1243C0u;
    SET_GPR_U32(ctx, 31, 0x1243C8u);
    ctx->pc = 0x1243C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243C0u;
    // 0x1243c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x1243C0u, 0x1243C8u)) {
        return;
    }
    ctx->pc = 0x1243C8u;
label_1243c8:
    // 0x1243c8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1243c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1243cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1243ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243d0: 0x24a5be58  addiu       $a1, $a1, -0x41A8
    ctx->pc = 0x1243d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950488));
    // 0x1243d4: 0xc0c5cd6  jal         func_317358
    ctx->pc = 0x1243D4u;
    SET_GPR_U32(ctx, 31, 0x1243DCu);
    ctx->pc = 0x1243D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243D4u;
    // 0x1243d8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317358u, 0x1243D4u, 0x1243DCu)) {
        return;
    }
    ctx->pc = 0x1243DCu;
label_1243dc:
    // 0x1243dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1243dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1243e0: 0xae220c7c  sw          $v0, 0xC7C($s1)
    ctx->pc = 0x1243e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3196), GPR_U32(ctx, 2));
label_1243e4:
    // 0x1243e4: 0x8e221450  lw          $v0, 0x1450($s1)
    ctx->pc = 0x1243e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5200)));
    // 0x1243e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1243E8u;
    {
        const bool branch_taken_0x1243e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243E8u;
        // 0x1243ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243e8) {
            ctx->pc = 0x124404u;
            goto label_124404;
        }
    }
    ctx->pc = 0x1243F0u;
    // 0x1243f0: 0x8e251454  lw          $a1, 0x1454($s1)
    ctx->pc = 0x1243f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5204)));
    // 0x1243f4: 0xc049bae  jal         func_126EB8
    ctx->pc = 0x1243F4u;
    SET_GPR_U32(ctx, 31, 0x1243FCu);
    ctx->pc = 0x1243F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243F4u;
    // 0x1243f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126EB8u, 0x1243F4u, 0x1243FCu)) {
        return;
    }
    ctx->pc = 0x1243FCu;
label_1243fc:
    // 0x1243fc: 0xae201450  sw          $zero, 0x1450($s1)
    ctx->pc = 0x1243fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5200), GPR_U32(ctx, 0));
    // 0x124400: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x124400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124404:
    // 0x124404: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x124404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124408: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x124408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12440c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x12440cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124414: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x124414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x124418: 0x3e00008  jr          $ra
    ctx->pc = 0x124418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124418u;
        // 0x12441c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124420u;
}
