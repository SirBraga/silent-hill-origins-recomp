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

// Function: sub_001358F0
// Address: 0x1358f0 - 0x135ea0
void sub_001358F0_0x1358f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001358F0_0x1358f0");
#endif

    switch (ctx->pc) {
        case 0x135990u: goto label_135990;
        case 0x1359c4u: goto label_1359c4;
        case 0x1359dcu: goto label_1359dc;
        case 0x135a44u: goto label_135a44;
        case 0x135b18u: goto label_135b18;
        case 0x135b2cu: goto label_135b2c;
        case 0x135dbcu: goto label_135dbc;
        case 0x135dd4u: goto label_135dd4;
        case 0x135df0u: goto label_135df0;
        case 0x135e08u: goto label_135e08;
        case 0x135e20u: goto label_135e20;
        case 0x135e40u: goto label_135e40;
        case 0x135e50u: goto label_135e50;
        case 0x135e60u: goto label_135e60;
        case 0x135e70u: goto label_135e70;
        default: break;
    }

    ctx->pc = 0x1358f0u;

    // 0x1358f0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1358f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1358f4: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1358f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x1358f8: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x1358f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1358fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1358fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135900: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x135900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x135904: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x135904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x135908: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x135908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x13590c: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x13590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x135910: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x135910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x135914: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x135914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x135918: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x135918u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x13591c: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x13591cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x135920: 0x8e421878  lw          $v0, 0x1878($s2)
    ctx->pc = 0x135920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6264)));
    // 0x135924: 0x10400152  beqz        $v0, . + 4 + (0x152 << 2)
    ctx->pc = 0x135924u;
    {
        const bool branch_taken_0x135924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135924u;
        // 0x135928: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135924) {
            ctx->pc = 0x135E70u;
            goto label_135e70;
        }
    }
    ctx->pc = 0x13592Cu;
    // 0x13592c: 0x26430320  addiu       $v1, $s2, 0x320
    ctx->pc = 0x13592cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
    // 0x135930: 0x8c62083c  lw          $v0, 0x83C($v1)
    ctx->pc = 0x135930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2108)));
    // 0x135934: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x135934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x135938: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x135938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13593c: 0x1440014c  bnez        $v0, . + 4 + (0x14C << 2)
    ctx->pc = 0x13593Cu;
    {
        const bool branch_taken_0x13593c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13593Cu;
        // 0x135940: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13593c) {
            ctx->pc = 0x135E70u;
            goto label_135e70;
        }
    }
    ctx->pc = 0x135944u;
    // 0x135944: 0x8e4202a4  lw          $v0, 0x2A4($s2)
    ctx->pc = 0x135944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 676)));
    // 0x135948: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x135948u;
    {
        const bool branch_taken_0x135948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135948) {
            ctx->pc = 0x13594Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135948u;
            // 0x13594c: 0x8e4201c8  lw          $v0, 0x1C8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135954u;
            goto label_135954;
        }
    }
    ctx->pc = 0x135950u;
    // 0x135950: 0x8e4201cc  lw          $v0, 0x1CC($s2)
    ctx->pc = 0x135950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 460)));
label_135954:
    // 0x135954: 0x10400146  beqz        $v0, . + 4 + (0x146 << 2)
    ctx->pc = 0x135954u;
    {
        const bool branch_taken_0x135954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135954u;
        // 0x135958: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135954) {
            ctx->pc = 0x135E70u;
            goto label_135e70;
        }
    }
    ctx->pc = 0x13595Cu;
    // 0x13595c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x13595cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x135960: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x135960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x135964: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x135964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x135968: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x135968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x13596c: 0x27a60104  addiu       $a2, $sp, 0x104
    ctx->pc = 0x13596cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x135970: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x135970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x135974: 0x27a70108  addiu       $a3, $sp, 0x108
    ctx->pc = 0x135974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x135978: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x135978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x13597c: 0x27a8010c  addiu       $t0, $sp, 0x10C
    ctx->pc = 0x13597cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x135980: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x135980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x135984: 0x27a90110  addiu       $t1, $sp, 0x110
    ctx->pc = 0x135984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x135988: 0xc04d454  jal         func_135150
    ctx->pc = 0x135988u;
    SET_GPR_U32(ctx, 31, 0x135990u);
    ctx->pc = 0x13598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135988u;
    // 0x13598c: 0x27aa0114  addiu       $t2, $sp, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x135150u, 0x135988u, 0x135990u)) {
        return;
    }
    ctx->pc = 0x135990u;
label_135990:
    // 0x135990: 0x8e451538  lw          $a1, 0x1538($s2)
    ctx->pc = 0x135990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5432)));
    // 0x135994: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x135994u;
    {
        const bool branch_taken_0x135994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x135998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135994u;
        // 0x135998: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135994) {
            ctx->pc = 0x1359A4u;
            goto label_1359a4;
        }
    }
    ctx->pc = 0x13599Cu;
    // 0x13599c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13599Cu;
    {
        const bool branch_taken_0x13599c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1359A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13599Cu;
        // 0x1359a0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13599c) {
            ctx->pc = 0x1359B0u;
            goto label_1359b0;
        }
    }
    ctx->pc = 0x1359A4u;
label_1359a4:
    // 0x1359a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1359a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1359a8: 0x8c438ac0  lw          $v1, -0x7540($v0)
    ctx->pc = 0x1359a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338AC0u));
    // 0x1359ac: 0x8c730104  lw          $s3, 0x104($v1)
    ctx->pc = 0x1359acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_1359b0:
    // 0x1359b0: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x1359b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1359b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1359b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359b8: 0x8e4519cc  lw          $a1, 0x19CC($s2)
    ctx->pc = 0x1359b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6604)));
    // 0x1359bc: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x1359BCu;
    SET_GPR_U32(ctx, 31, 0x1359C4u);
    ctx->pc = 0x1359C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359BCu;
    // 0x1359c0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x1359BCu, 0x1359C4u)) {
        return;
    }
    ctx->pc = 0x1359C4u;
label_1359c4:
    // 0x1359c4: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x1359c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1359c8: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1359c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1359cc: 0x8e4519d0  lw          $a1, 0x19D0($s2)
    ctx->pc = 0x1359ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6608)));
    // 0x1359d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1359d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359d4: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x1359D4u;
    SET_GPR_U32(ctx, 31, 0x1359DCu);
    ctx->pc = 0x1359D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359D4u;
    // 0x1359d8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x1359D4u, 0x1359DCu)) {
        return;
    }
    ctx->pc = 0x1359DCu;
label_1359dc:
    // 0x1359dc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1359dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1359e0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1359e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x1359e4: 0x6ba20077  ldl         $v0, 0x77($sp)
    ctx->pc = 0x1359e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1359e8: 0x6fa20070  ldr         $v0, 0x70($sp)
    ctx->pc = 0x1359e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1359ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1359ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1359f0: 0xb3a20097  sdl         $v0, 0x97($sp)
    ctx->pc = 0x1359f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1359f4: 0xb7a20090  sdr         $v0, 0x90($sp)
    ctx->pc = 0x1359f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1359f8: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x1359f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x1359fc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1359fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135a00: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x135a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135a04: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x135a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135a08: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x135a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135a0c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x135a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135a10: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x135a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x135a14: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x135a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x135a18: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x135a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x135a1c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x135a1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x135a20: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x135a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x135a24: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x135a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x135a28: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x135a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x135a2c: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x135a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x135a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a34: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x135a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x135a38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x135a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a3c: 0xc04d508  jal         func_135420
    ctx->pc = 0x135A3Cu;
    SET_GPR_U32(ctx, 31, 0x135A44u);
    ctx->pc = 0x135A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A3Cu;
    // 0x135a40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x135420u, 0x135A3Cu, 0x135A44u)) {
        return;
    }
    ctx->pc = 0x135A44u;
label_135a44:
    // 0x135a44: 0x8e82083c  lw          $v0, 0x83C($s4)
    ctx->pc = 0x135a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2108)));
    // 0x135a48: 0x6ba600a7  ldl         $a2, 0xA7($sp)
    ctx->pc = 0x135a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x135a4c: 0x6fa600a0  ldr         $a2, 0xA0($sp)
    ctx->pc = 0x135a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x135a50: 0xb3a60087  sdl         $a2, 0x87($sp)
    ctx->pc = 0x135a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135a54: 0xb7a60080  sdr         $a2, 0x80($sp)
    ctx->pc = 0x135a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135a58: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x135a58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x135a5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x135a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x135a60: 0x2980b  movn        $s3, $zero, $v0
    ctx->pc = 0x135a60u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0));
    // 0x135a64: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x135A64u;
    {
        const bool branch_taken_0x135a64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x135A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A64u;
        // 0x135a68: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a64) {
            ctx->pc = 0x135B50u;
            goto label_135b50;
        }
    }
    ctx->pc = 0x135A6Cu;
    // 0x135a6c: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x135a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x135a70: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x135a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x135a74: 0x6ba6004f  ldl         $a2, 0x4F($sp)
    ctx->pc = 0x135a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x135a78: 0x6fa60048  ldr         $a2, 0x48($sp)
    ctx->pc = 0x135a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x135a7c: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x135a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x135a80: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x135a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x135a84: 0x6ba2005f  ldl         $v0, 0x5F($sp)
    ctx->pc = 0x135a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x135a88: 0x6fa20058  ldr         $v0, 0x58($sp)
    ctx->pc = 0x135a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x135a8c: 0xb3a500b7  sdl         $a1, 0xB7($sp)
    ctx->pc = 0x135a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135a90: 0xb7a500b0  sdr         $a1, 0xB0($sp)
    ctx->pc = 0x135a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135a94: 0xb3a600bf  sdl         $a2, 0xBF($sp)
    ctx->pc = 0x135a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135a98: 0xb7a600b8  sdr         $a2, 0xB8($sp)
    ctx->pc = 0x135a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135a9c: 0xb3a700c7  sdl         $a3, 0xC7($sp)
    ctx->pc = 0x135a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135aa0: 0xb7a700c0  sdr         $a3, 0xC0($sp)
    ctx->pc = 0x135aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135aa4: 0xb3a200cf  sdl         $v0, 0xCF($sp)
    ctx->pc = 0x135aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135aa8: 0xb7a200c8  sdr         $v0, 0xC8($sp)
    ctx->pc = 0x135aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135aac: 0x6ba50067  ldl         $a1, 0x67($sp)
    ctx->pc = 0x135aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x135ab0: 0x6fa50060  ldr         $a1, 0x60($sp)
    ctx->pc = 0x135ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x135ab4: 0x6ba6006f  ldl         $a2, 0x6F($sp)
    ctx->pc = 0x135ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x135ab8: 0x6fa60068  ldr         $a2, 0x68($sp)
    ctx->pc = 0x135ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x135abc: 0x6ba70077  ldl         $a3, 0x77($sp)
    ctx->pc = 0x135abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x135ac0: 0x6fa70070  ldr         $a3, 0x70($sp)
    ctx->pc = 0x135ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x135ac4: 0x6ba2007f  ldl         $v0, 0x7F($sp)
    ctx->pc = 0x135ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x135ac8: 0x6fa20078  ldr         $v0, 0x78($sp)
    ctx->pc = 0x135ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x135acc: 0xb3a500d7  sdl         $a1, 0xD7($sp)
    ctx->pc = 0x135accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135ad0: 0xb7a500d0  sdr         $a1, 0xD0($sp)
    ctx->pc = 0x135ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135ad4: 0xb3a600df  sdl         $a2, 0xDF($sp)
    ctx->pc = 0x135ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135ad8: 0xb7a600d8  sdr         $a2, 0xD8($sp)
    ctx->pc = 0x135ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135adc: 0xb3a700e7  sdl         $a3, 0xE7($sp)
    ctx->pc = 0x135adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135ae0: 0xb7a700e0  sdr         $a3, 0xE0($sp)
    ctx->pc = 0x135ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135ae4: 0xb3a200ef  sdl         $v0, 0xEF($sp)
    ctx->pc = 0x135ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135ae8: 0xb7a200e8  sdr         $v0, 0xE8($sp)
    ctx->pc = 0x135ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135aec: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x135aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x135af0: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x135af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x135af4: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x135af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x135af8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x135af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135afc: 0xb3a300e7  sdl         $v1, 0xE7($sp)
    ctx->pc = 0x135afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135b00: 0xb7a300e0  sdr         $v1, 0xE0($sp)
    ctx->pc = 0x135b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135b04: 0xafa600e8  sw          $a2, 0xE8($sp)
    ctx->pc = 0x135b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 6));
    // 0x135b08: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x135b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x135b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b10: 0xc062118  jal         func_188460
    ctx->pc = 0x135B10u;
    SET_GPR_U32(ctx, 31, 0x135B18u);
    ctx->pc = 0x135B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B10u;
    // 0x135b14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188460u, 0x135B10u, 0x135B18u)) {
        return;
    }
    ctx->pc = 0x135B18u;
label_135b18:
    // 0x135b18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x135b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x135b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b24: 0xc04d508  jal         func_135420
    ctx->pc = 0x135B24u;
    SET_GPR_U32(ctx, 31, 0x135B2Cu);
    ctx->pc = 0x135B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B24u;
    // 0x135b28: 0x27a70118  addiu       $a3, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x135420u, 0x135B24u, 0x135B2Cu)) {
        return;
    }
    ctx->pc = 0x135B2Cu;
label_135b2c:
    // 0x135b2c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x135b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x135b30: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x135b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x135b34: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x135b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x135b38: 0xb24319ff  sdl         $v1, 0x19FF($s2)
    ctx->pc = 0x135b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 6655); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135b3c: 0xb64319f8  sdr         $v1, 0x19F8($s2)
    ctx->pc = 0x135b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 6648); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135b40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x135B40u;
    {
        const bool branch_taken_0x135b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B40u;
        // 0x135b44: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135b40) {
            ctx->pc = 0x135B60u;
            goto label_135b60;
        }
    }
    ctx->pc = 0x135B48u;
    // 0x135b48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x135B48u;
    {
        const bool branch_taken_0x135b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B48u;
        // 0x135b4c: 0xe64019f8  swc1        $f0, 0x19F8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6648), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135b48) {
            ctx->pc = 0x135B60u;
            goto label_135b60;
        }
    }
    ctx->pc = 0x135B50u;
label_135b50:
    // 0x135b50: 0x6ba70087  ldl         $a3, 0x87($sp)
    ctx->pc = 0x135b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x135b54: 0x6fa70080  ldr         $a3, 0x80($sp)
    ctx->pc = 0x135b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x135b58: 0xb24719ff  sdl         $a3, 0x19FF($s2)
    ctx->pc = 0x135b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 6655); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135b5c: 0xb64719f8  sdr         $a3, 0x19F8($s2)
    ctx->pc = 0x135b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 6648); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_135b60:
    // 0x135b60: 0xc64119fc  lwc1        $f1, 0x19FC($s2)
    ctx->pc = 0x135b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135b64: 0xc6401a10  lwc1        $f0, 0x1A10($s2)
    ctx->pc = 0x135b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135b68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x135b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135b6c: 0x0  nop
    ctx->pc = 0x135b6cu;
    // NOP
    // 0x135b70: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x135B70u;
    {
        const bool branch_taken_0x135b70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135b70) {
            ctx->pc = 0x135B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135B70u;
            // 0x135b74: 0xe64019fc  swc1        $f0, 0x19FC($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6652), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x135B90u;
            goto label_135b90;
        }
    }
    ctx->pc = 0x135B78u;
    // 0x135b78: 0xc6401a14  lwc1        $f0, 0x1A14($s2)
    ctx->pc = 0x135b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135b7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x135b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135b80: 0x0  nop
    ctx->pc = 0x135b80u;
    // NOP
    // 0x135b84: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x135B84u;
    {
        const bool branch_taken_0x135b84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135b84) {
            ctx->pc = 0x135B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135B84u;
            // 0x135b88: 0xc64019fc  lwc1        $f0, 0x19FC($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x135B94u;
            goto label_135b94;
        }
    }
    ctx->pc = 0x135B8Cu;
    // 0x135b8c: 0xe64019fc  swc1        $f0, 0x19FC($s2)
    ctx->pc = 0x135b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6652), bits); }
label_135b90:
    // 0x135b90: 0xc64019fc  lwc1        $f0, 0x19FC($s2)
    ctx->pc = 0x135b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135b94:
    // 0x135b94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x135b94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135b98: 0x0  nop
    ctx->pc = 0x135b98u;
    // NOP
    // 0x135b9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x135b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135ba0: 0x0  nop
    ctx->pc = 0x135ba0u;
    // NOP
    // 0x135ba4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x135BA4u;
    {
        const bool branch_taken_0x135ba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BA4u;
        // 0x135ba8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ba4) {
            ctx->pc = 0x135BB4u;
            goto label_135bb4;
        }
    }
    ctx->pc = 0x135BACu;
    // 0x135bac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x135BACu;
    {
        const bool branch_taken_0x135bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BACu;
        // 0x135bb0: 0xc6401a10  lwc1        $f0, 0x1A10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135bac) {
            ctx->pc = 0x135BB8u;
            goto label_135bb8;
        }
    }
    ctx->pc = 0x135BB4u;
label_135bb4:
    // 0x135bb4: 0xc6401a14  lwc1        $f0, 0x1A14($s2)
    ctx->pc = 0x135bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135bb8:
    // 0x135bb8: 0x0  nop
    ctx->pc = 0x135bb8u;
    // NOP
    // 0x135bbc: 0x0  nop
    ctx->pc = 0x135bbcu;
    // NOP
    // 0x135bc0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x135bc0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x135bc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x135bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x135bc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x135bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135bcc: 0xc6431a18  lwc1        $f3, 0x1A18($s2)
    ctx->pc = 0x135bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135bd0: 0xc64419f8  lwc1        $f4, 0x19F8($s2)
    ctx->pc = 0x135bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135bd4: 0xc6421a1c  lwc1        $f2, 0x1A1C($s2)
    ctx->pc = 0x135bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135bd8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x135bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x135bdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x135bdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135be0: 0x46011802  mul.s       $f0, $f3, $f1
    ctx->pc = 0x135be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x135be4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x135be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135be8: 0x0  nop
    ctx->pc = 0x135be8u;
    // NOP
    // 0x135bec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x135BECu;
    {
        const bool branch_taken_0x135bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BECu;
        // 0x135bf0: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135bec) {
            ctx->pc = 0x135BFCu;
            goto label_135bfc;
        }
    }
    ctx->pc = 0x135BF4u;
    // 0x135bf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x135BF4u;
    {
        const bool branch_taken_0x135bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BF4u;
        // 0x135bf8: 0xe64019f8  swc1        $f0, 0x19F8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6648), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135bf4) {
            ctx->pc = 0x135C0Cu;
            goto label_135c0c;
        }
    }
    ctx->pc = 0x135BFCu;
label_135bfc:
    // 0x135bfc: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x135bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135c00: 0x0  nop
    ctx->pc = 0x135c00u;
    // NOP
    // 0x135c04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x135C04u;
    {
        const bool branch_taken_0x135c04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135c04) {
            ctx->pc = 0x135C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135C04u;
            // 0x135c08: 0xe64219f8  swc1        $f2, 0x19F8($s2) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6648), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x135C0Cu;
            goto label_135c0c;
        }
    }
    ctx->pc = 0x135C0Cu;
label_135c0c:
    // 0x135c0c: 0x8e421a30  lw          $v0, 0x1A30($s2)
    ctx->pc = 0x135c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6704)));
    // 0x135c10: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x135C10u;
    {
        const bool branch_taken_0x135c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c10) {
            ctx->pc = 0x135C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135C10u;
            // 0x135c14: 0xae401a2c  sw          $zero, 0x1A2C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 6700), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135C84u;
            goto label_135c84;
        }
    }
    ctx->pc = 0x135C18u;
    // 0x135c18: 0x5260001a  beql        $s3, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x135C18u;
    {
        const bool branch_taken_0x135c18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c18) {
            ctx->pc = 0x135C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135C18u;
            // 0x135c1c: 0xae401a2c  sw          $zero, 0x1A2C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 6700), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135C84u;
            goto label_135c84;
        }
    }
    ctx->pc = 0x135C20u;
    // 0x135c20: 0x54530018  bnel        $v0, $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x135C20u;
    {
        const bool branch_taken_0x135c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x135c20) {
            ctx->pc = 0x135C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135C20u;
            // 0x135c24: 0xae401a2c  sw          $zero, 0x1A2C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 6700), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135C84u;
            goto label_135c84;
        }
    }
    ctx->pc = 0x135C28u;
    // 0x135c28: 0x8e421a2c  lw          $v0, 0x1A2C($s2)
    ctx->pc = 0x135c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6700)));
    // 0x135c2c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x135C2Cu;
    {
        const bool branch_taken_0x135c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C2Cu;
        // 0x135c30: 0x8fa20118  lw          $v0, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c2c) {
            ctx->pc = 0x135C88u;
            goto label_135c88;
        }
    }
    ctx->pc = 0x135C34u;
    // 0x135c34: 0xc6401a00  lwc1        $f0, 0x1A00($s2)
    ctx->pc = 0x135c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135c38: 0xc64119f8  lwc1        $f1, 0x19F8($s2)
    ctx->pc = 0x135c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135c3c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x135c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x135c40: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x135c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x135c44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x135c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x135c48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x135c48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x135c4c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x135c4cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x135c50: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x135c50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135c54: 0x0  nop
    ctx->pc = 0x135c54u;
    // NOP
    // 0x135c58: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x135C58u;
    {
        const bool branch_taken_0x135c58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135c58) {
            ctx->pc = 0x135C88u;
            goto label_135c88;
        }
    }
    ctx->pc = 0x135C60u;
    // 0x135c60: 0xc6401a04  lwc1        $f0, 0x1A04($s2)
    ctx->pc = 0x135c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135c64: 0xc64119fc  lwc1        $f1, 0x19FC($s2)
    ctx->pc = 0x135c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135c68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x135c68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x135c6c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x135c6cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x135c70: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x135c70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135c74: 0x0  nop
    ctx->pc = 0x135c74u;
    // NOP
    // 0x135c78: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x135C78u;
    {
        const bool branch_taken_0x135c78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C78u;
        // 0x135c7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c78) {
            ctx->pc = 0x135C84u;
            goto label_135c84;
        }
    }
    ctx->pc = 0x135C80u;
    // 0x135c80: 0xae421a2c  sw          $v0, 0x1A2C($s2)
    ctx->pc = 0x135c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6700), GPR_U32(ctx, 2));
label_135c84:
    // 0x135c84: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x135c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_135c88:
    // 0x135c88: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x135C88u;
    {
        const bool branch_taken_0x135c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C88u;
        // 0x135c8c: 0xae531a30  sw          $s3, 0x1A30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6704), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c88) {
            ctx->pc = 0x135CB4u;
            goto label_135cb4;
        }
    }
    ctx->pc = 0x135C90u;
    // 0x135c90: 0x8e421a2c  lw          $v0, 0x1A2C($s2)
    ctx->pc = 0x135c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6700)));
    // 0x135c94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x135C94u;
    {
        const bool branch_taken_0x135c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C94u;
        // 0x135c98: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c94) {
            ctx->pc = 0x135CB8u;
            goto label_135cb8;
        }
    }
    ctx->pc = 0x135C9Cu;
    // 0x135c9c: 0x6a4519ff  ldl         $a1, 0x19FF($s2)
    ctx->pc = 0x135c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 6655); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x135ca0: 0x6e4519f8  ldr         $a1, 0x19F8($s2)
    ctx->pc = 0x135ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 6648); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x135ca4: 0xb2451a07  sdl         $a1, 0x1A07($s2)
    ctx->pc = 0x135ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 6663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135ca8: 0xb6451a00  sdr         $a1, 0x1A00($s2)
    ctx->pc = 0x135ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 6656); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135cac: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x135CACu;
    {
        const bool branch_taken_0x135cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135cac) {
            ctx->pc = 0x135D68u;
            goto label_135d68;
        }
    }
    ctx->pc = 0x135CB4u;
label_135cb4:
    // 0x135cb4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x135cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_135cb8:
    // 0x135cb8: 0xc6401a24  lwc1        $f0, 0x1A24($s2)
    ctx->pc = 0x135cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135cbc: 0xc6421a08  lwc1        $f2, 0x1A08($s2)
    ctx->pc = 0x135cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135cc0: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x135cc0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135cc4: 0xc6431a00  lwc1        $f3, 0x1A00($s2)
    ctx->pc = 0x135cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135cc8: 0x46141102  mul.s       $f4, $f2, $f20
    ctx->pc = 0x135cc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x135ccc: 0xc64119f8  lwc1        $f1, 0x19F8($s2)
    ctx->pc = 0x135cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135cd0: 0x460019c6  mov.s       $f7, $f3
    ctx->pc = 0x135cd0u;
    ctx->f[7] = FPU_MOV_S(ctx->f[3]);
    // 0x135cd4: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x135cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135cd8: 0x460308c1  sub.s       $f3, $f1, $f3
    ctx->pc = 0x135cd8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x135cdc: 0xc6401a28  lwc1        $f0, 0x1A28($s2)
    ctx->pc = 0x135cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135ce0: 0x46052040  add.s       $f1, $f4, $f5
    ctx->pc = 0x135ce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x135ce4: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x135ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135ce8: 0x0  nop
    ctx->pc = 0x135ce8u;
    // NOP
    // 0x135cec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x135CECu;
    {
        const bool branch_taken_0x135cec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CECu;
        // 0x135cf0: 0x46001181  sub.s       $f6, $f2, $f0 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135cec) {
            ctx->pc = 0x135CFCu;
            goto label_135cfc;
        }
    }
    ctx->pc = 0x135CF4u;
    // 0x135cf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135CF4u;
    {
        const bool branch_taken_0x135cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CF4u;
        // 0x135cf8: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135cf4) {
            ctx->pc = 0x135D14u;
            goto label_135d14;
        }
    }
    ctx->pc = 0x135CFCu;
label_135cfc:
    // 0x135cfc: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x135cfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x135d00: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x135d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x135d04: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x135d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135d08: 0x0  nop
    ctx->pc = 0x135d08u;
    // NOP
    // 0x135d0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x135D0Cu;
    {
        const bool branch_taken_0x135d0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135d0c) {
            ctx->pc = 0x135D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135D0Cu;
            // 0x135d10: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x135D14u;
            goto label_135d14;
        }
    }
    ctx->pc = 0x135D14u;
label_135d14:
    // 0x135d14: 0xc6411a0c  lwc1        $f1, 0x1A0C($s2)
    ctx->pc = 0x135d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135d18: 0x46033880  add.s       $f2, $f7, $f3
    ctx->pc = 0x135d18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x135d1c: 0xc6401a04  lwc1        $f0, 0x1A04($s2)
    ctx->pc = 0x135d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135d20: 0xc64319fc  lwc1        $f3, 0x19FC($s2)
    ctx->pc = 0x135d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135d24: 0x46140902  mul.s       $f4, $f1, $f20
    ctx->pc = 0x135d24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x135d28: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x135d28u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x135d2c: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x135d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x135d30: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x135d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135d34: 0x0  nop
    ctx->pc = 0x135d34u;
    // NOP
    // 0x135d38: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x135D38u;
    {
        const bool branch_taken_0x135d38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x135D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D38u;
        // 0x135d3c: 0xe6421a00  swc1        $f2, 0x1A00($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135d38) {
            ctx->pc = 0x135D58u;
            goto label_135d58;
        }
    }
    ctx->pc = 0x135D40u;
    // 0x135d40: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x135d40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x135d44: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x135d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x135d48: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x135d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135d4c: 0x0  nop
    ctx->pc = 0x135d4cu;
    // NOP
    // 0x135d50: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x135D50u;
    {
        const bool branch_taken_0x135d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135d50) {
            ctx->pc = 0x135D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135D50u;
            // 0x135d54: 0xc6401a04  lwc1        $f0, 0x1A04($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x135D60u;
            goto label_135d60;
        }
    }
    ctx->pc = 0x135D58u;
label_135d58:
    // 0x135d58: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x135d58u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x135d5c: 0xc6401a04  lwc1        $f0, 0x1A04($s2)
    ctx->pc = 0x135d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135d60:
    // 0x135d60: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x135d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x135d64: 0xe6401a04  swc1        $f0, 0x1A04($s2)
    ctx->pc = 0x135d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6660), bits); }
label_135d68:
    // 0x135d68: 0x6ba30087  ldl         $v1, 0x87($sp)
    ctx->pc = 0x135d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x135d6c: 0x6fa30080  ldr         $v1, 0x80($sp)
    ctx->pc = 0x135d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x135d70: 0xb2431a2b  sdl         $v1, 0x1A2B($s2)
    ctx->pc = 0x135d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 6699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135d74: 0xb6431a24  sdr         $v1, 0x1A24($s2)
    ctx->pc = 0x135d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 6692); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135d78: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x135d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x135d7c: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x135d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135d80: 0xc6441a04  lwc1        $f4, 0x1A04($s2)
    ctx->pc = 0x135d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135d84: 0xc6401a00  lwc1        $f0, 0x1A00($s2)
    ctx->pc = 0x135d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135d88: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x135d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135d8c: 0x46030581  sub.s       $f22, $f0, $f3
    ctx->pc = 0x135d8cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x135d90: 0xc6411a20  lwc1        $f1, 0x1A20($s2)
    ctx->pc = 0x135d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135d94: 0x46022541  sub.s       $f21, $f4, $f2
    ctx->pc = 0x135d94u;
    ctx->f[21] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x135d98: 0x8c6283bc  lw          $v0, -0x7C44($v1)
    ctx->pc = 0x135d98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3383BCu));
    // 0x135d9c: 0x4601b502  mul.s       $f20, $f22, $f1
    ctx->pc = 0x135d9cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x135da0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x135DA0u;
    {
        const bool branch_taken_0x135da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135DA0u;
        // 0x135da4: 0x4601ab02  mul.s       $f12, $f21, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135da0) {
            ctx->pc = 0x135DD4u;
            goto label_135dd4;
        }
    }
    ctx->pc = 0x135DA8u;
    // 0x135da8: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x135da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x135dac: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x135dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x135db0: 0x24a5e440  addiu       $a1, $a1, -0x1BC0
    ctx->pc = 0x135db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960192));
    // 0x135db4: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x135DB4u;
    SET_GPR_U32(ctx, 31, 0x135DBCu);
    ctx->pc = 0x135DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135DB4u;
    // 0x135db8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x135DB4u, 0x135DBCu)) {
        return;
    }
    ctx->pc = 0x135DBCu;
label_135dbc:
    // 0x135dbc: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x135dbcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x135dc0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x135dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x135dc4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x135dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x135dc8: 0x24a5e430  addiu       $a1, $a1, -0x1BD0
    ctx->pc = 0x135dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
    // 0x135dcc: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x135DCCu;
    SET_GPR_U32(ctx, 31, 0x135DD4u);
    ctx->pc = 0x135DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135DCCu;
    // 0x135dd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x135DCCu, 0x135DD4u)) {
        return;
    }
    ctx->pc = 0x135DD4u;
label_135dd4:
    // 0x135dd4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x135dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x135dd8: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x135dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3383C0u));
    // 0x135ddc: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x135DDCu;
    {
        const bool branch_taken_0x135ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x135DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135DDCu;
        // 0x135de0: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ddc) {
            ctx->pc = 0x135E74u;
            goto label_135e74;
        }
    }
    ctx->pc = 0x135DE4u;
    // 0x135de4: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x135de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x135de8: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x135DE8u;
    SET_GPR_U32(ctx, 31, 0x135DF0u);
    ctx->pc = 0x135DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135DE8u;
    // 0x135dec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x135DE8u, 0x135DF0u)) {
        return;
    }
    ctx->pc = 0x135DF0u;
label_135df0:
    // 0x135df0: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x135df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x135df4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x135df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x135df8: 0x24a5e440  addiu       $a1, $a1, -0x1BC0
    ctx->pc = 0x135df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960192));
    // 0x135dfc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x135dfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x135e00: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x135E00u;
    SET_GPR_U32(ctx, 31, 0x135E08u);
    ctx->pc = 0x135E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E00u;
    // 0x135e04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x135E00u, 0x135E08u)) {
        return;
    }
    ctx->pc = 0x135E08u;
label_135e08:
    // 0x135e08: 0x4600b307  neg.s       $f12, $f22
    ctx->pc = 0x135e08u;
    ctx->f[12] = FPU_NEG_S(ctx->f[22]);
    // 0x135e0c: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x135e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x135e10: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x135e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x135e14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x135e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135e18: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x135E18u;
    SET_GPR_U32(ctx, 31, 0x135E20u);
    ctx->pc = 0x135E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E18u;
    // 0x135e1c: 0x24a5e430  addiu       $a1, $a1, -0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x135E18u, 0x135E20u)) {
        return;
    }
    ctx->pc = 0x135E20u;
label_135e20:
    // 0x135e20: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x135e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x135e24: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x135E24u;
    {
        const bool branch_taken_0x135e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x135E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E24u;
        // 0x135e28: 0x8fa20114  lw          $v0, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e24) {
            ctx->pc = 0x135E70u;
            goto label_135e70;
        }
    }
    ctx->pc = 0x135E2Cu;
    // 0x135e2c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x135E2Cu;
    {
        const bool branch_taken_0x135e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E2Cu;
        // 0x135e30: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e2c) {
            ctx->pc = 0x135E74u;
            goto label_135e74;
        }
    }
    ctx->pc = 0x135E34u;
    // 0x135e34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x135e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e38: 0xc092fa4  jal         func_24BE90
    ctx->pc = 0x135E38u;
    SET_GPR_U32(ctx, 31, 0x135E40u);
    ctx->pc = 0x135E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E38u;
    // 0x135e3c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x135E38u, 0x135E40u)) {
        return;
    }
    ctx->pc = 0x135E40u;
label_135e40:
    // 0x135e40: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x135e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x135e44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x135e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e48: 0xc092fa4  jal         func_24BE90
    ctx->pc = 0x135E48u;
    SET_GPR_U32(ctx, 31, 0x135E50u);
    ctx->pc = 0x135E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E48u;
    // 0x135e4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x135E48u, 0x135E50u)) {
        return;
    }
    ctx->pc = 0x135E50u;
label_135e50:
    // 0x135e50: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x135e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x135e54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x135e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135e58: 0xc092fa4  jal         func_24BE90
    ctx->pc = 0x135E58u;
    SET_GPR_U32(ctx, 31, 0x135E60u);
    ctx->pc = 0x135E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E58u;
    // 0x135e5c: 0x8fa5010c  lw          $a1, 0x10C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x135E58u, 0x135E60u)) {
        return;
    }
    ctx->pc = 0x135E60u;
label_135e60:
    // 0x135e60: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x135e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x135e64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x135e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135e68: 0xc092fa4  jal         func_24BE90
    ctx->pc = 0x135E68u;
    SET_GPR_U32(ctx, 31, 0x135E70u);
    ctx->pc = 0x135E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E68u;
    // 0x135e6c: 0x8fa5010c  lw          $a1, 0x10C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x135E68u, 0x135E70u)) {
        return;
    }
    ctx->pc = 0x135E70u;
label_135e70:
    // 0x135e70: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x135e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_135e74:
    // 0x135e74: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x135e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x135e78: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x135e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x135e7c: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x135e7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x135e80: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x135e80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x135e84: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x135e84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x135e88: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x135e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x135e8c: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x135e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x135e90: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x135e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135e94: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x135e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135e98: 0x3e00008  jr          $ra
    ctx->pc = 0x135E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E98u;
        // 0x135e9c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135EA0u;
}
