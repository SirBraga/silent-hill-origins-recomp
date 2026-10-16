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

// Function: sub_0010C500
// Address: 0x10c500 - 0x10c690
void sub_0010C500_0x10c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C500_0x10c500");
#endif

    switch (ctx->pc) {
        case 0x10c56cu: goto label_10c56c;
        case 0x10c58cu: goto label_10c58c;
        case 0x10c5a0u: goto label_10c5a0;
        case 0x10c5c0u: goto label_10c5c0;
        case 0x10c63cu: goto label_10c63c;
        case 0x10c664u: goto label_10c664;
        default: break;
    }

    ctx->pc = 0x10c500u;

    // 0x10c500: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10c500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10c504: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x10c504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x10c508: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x10c508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x10c50c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10c50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c510: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x10c510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x10c514: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10c514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c518: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x10c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x10c51c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10c51cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c520: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x10c520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x10c524: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10c524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c528: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10c52c: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x10C52Cu;
    {
        const bool branch_taken_0x10c52c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C52Cu;
        // 0x10c530: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c52c) {
            ctx->pc = 0x10C668u;
            goto label_10c668;
        }
    }
    ctx->pc = 0x10C534u;
    // 0x10c534: 0x1260004d  beqz        $s3, . + 4 + (0x4D << 2)
    ctx->pc = 0x10C534u;
    {
        const bool branch_taken_0x10c534 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C534u;
        // 0x10c538: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c534) {
            ctx->pc = 0x10C66Cu;
            goto label_10c66c;
        }
    }
    ctx->pc = 0x10C53Cu;
    // 0x10c53c: 0x1280004a  beqz        $s4, . + 4 + (0x4A << 2)
    ctx->pc = 0x10C53Cu;
    {
        const bool branch_taken_0x10c53c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C53Cu;
        // 0x10c540: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c53c) {
            ctx->pc = 0x10C668u;
            goto label_10c668;
        }
    }
    ctx->pc = 0x10C544u;
    // 0x10c544: 0x8c4382f4  lw          $v1, -0x7D0C($v0)
    ctx->pc = 0x10c544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935284)));
    // 0x10c548: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C548u;
    {
        const bool branch_taken_0x10c548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c548) {
            ctx->pc = 0x10C54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C548u;
            // 0x10c54c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C55Cu;
            goto label_10c55c;
        }
    }
    ctx->pc = 0x10C550u;
    // 0x10c550: 0x8e4213f0  lw          $v0, 0x13F0($s2)
    ctx->pc = 0x10c550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5104)));
    // 0x10c554: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x10C554u;
    {
        const bool branch_taken_0x10c554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C554u;
        // 0x10c558: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c554) {
            ctx->pc = 0x10C5F4u;
            goto label_10c5f4;
        }
    }
    ctx->pc = 0x10C55Cu;
label_10c55c:
    // 0x10c55c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10C55Cu;
    {
        const bool branch_taken_0x10c55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C55Cu;
        // 0x10c560: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c55c) {
            ctx->pc = 0x10C598u;
            goto label_10c598;
        }
    }
    ctx->pc = 0x10C564u;
    // 0x10c564: 0xc04389e  jal         func_10E278
    ctx->pc = 0x10C564u;
    SET_GPR_U32(ctx, 31, 0x10C56Cu);
    ctx->pc = 0x10C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C564u;
    // 0x10c568: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E278u, 0x10C564u, 0x10C56Cu)) {
        return;
    }
    ctx->pc = 0x10C56Cu;
label_10c56c:
    // 0x10c56c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c578: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x10c578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x10c57c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10c57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c580: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x10c580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x10c584: 0xc043a20  jal         func_10E880
    ctx->pc = 0x10C584u;
    SET_GPR_U32(ctx, 31, 0x10C58Cu);
    ctx->pc = 0x10C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C584u;
    // 0x10c588: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E880u, 0x10C584u, 0x10C58Cu)) {
        return;
    }
    ctx->pc = 0x10C58Cu;
label_10c58c:
    // 0x10c58c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x10C58Cu;
    {
        const bool branch_taken_0x10c58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C58Cu;
        // 0x10c590: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c58c) {
            ctx->pc = 0x10C668u;
            goto label_10c668;
        }
    }
    ctx->pc = 0x10C594u;
    // 0x10c594: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x10c594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10c598:
    // 0x10c598: 0xc04389e  jal         func_10E278
    ctx->pc = 0x10C598u;
    SET_GPR_U32(ctx, 31, 0x10C5A0u);
    ctx->pc = 0x10C59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C598u;
    // 0x10c59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E278u, 0x10C598u, 0x10C5A0u)) {
        return;
    }
    ctx->pc = 0x10C5A0u;
label_10c5a0:
    // 0x10c5a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c5a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c5a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c5ac: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10c5b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c5b4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x10c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x10c5b8: 0xc043a20  jal         func_10E880
    ctx->pc = 0x10C5B8u;
    SET_GPR_U32(ctx, 31, 0x10C5C0u);
    ctx->pc = 0x10C5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C5B8u;
    // 0x10c5bc: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E880u, 0x10C5B8u, 0x10C5C0u)) {
        return;
    }
    ctx->pc = 0x10C5C0u;
label_10c5c0:
    // 0x10c5c0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x10C5C0u;
    {
        const bool branch_taken_0x10c5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C5C0u;
        // 0x10c5c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c5c0) {
            ctx->pc = 0x10C668u;
            goto label_10c668;
        }
    }
    ctx->pc = 0x10C5C8u;
    // 0x10c5c8: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x10c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x10c5cc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x10c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x10c5d0: 0x6a830007  ldl         $v1, 0x7($s4)
    ctx->pc = 0x10c5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10c5d4: 0x6e830000  ldr         $v1, 0x0($s4)
    ctx->pc = 0x10c5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10c5d8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x10c5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10c5dc: 0xb043000f  sdl         $v1, 0xF($v0)
    ctx->pc = 0x10c5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10c5e0: 0xb4430008  sdr         $v1, 0x8($v0)
    ctx->pc = 0x10c5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10c5e4: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x10c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x10c5e8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x10c5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c5ec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10C5ECu;
    {
        const bool branch_taken_0x10c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C5ECu;
        // 0x10c5f0: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c5ec) {
            ctx->pc = 0x10C668u;
            goto label_10c668;
        }
    }
    ctx->pc = 0x10C5F4u;
label_10c5f4:
    // 0x10c5f4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10C5F4u;
    {
        const bool branch_taken_0x10c5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C5F4u;
        // 0x10c5f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c5f4) {
            ctx->pc = 0x10C648u;
            goto label_10c648;
        }
    }
    ctx->pc = 0x10C5FCu;
    // 0x10c5fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c600: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c608: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10c608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10c60c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10c60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c610: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x10c610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x10c614: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x10c614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x10c618: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x10c618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x10c61c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x10c61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x10c620: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10c620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x10c624: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x10c624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x10c628: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x10c628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x10c62c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10c630: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x10c630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x10c634: 0xc043a04  jal         func_10E810
    ctx->pc = 0x10C634u;
    SET_GPR_U32(ctx, 31, 0x10C63Cu);
    ctx->pc = 0x10C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C634u;
    // 0x10c638: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E810u, 0x10C634u, 0x10C63Cu)) {
        return;
    }
    ctx->pc = 0x10C63Cu;
label_10c63c:
    // 0x10c63c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10C63Cu;
    {
        const bool branch_taken_0x10c63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C63Cu;
        // 0x10c640: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c63c) {
            ctx->pc = 0x10C66Cu;
            goto label_10c66c;
        }
    }
    ctx->pc = 0x10C644u;
    // 0x10c644: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10c644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10c648:
    // 0x10c648: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c64c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10c64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10c650: 0xc4ad0010  lwc1        $f13, 0x10($a1)
    ctx->pc = 0x10c650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x10c654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c658: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10c658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c65c: 0xc043518  jal         func_10D460
    ctx->pc = 0x10C65Cu;
    SET_GPR_U32(ctx, 31, 0x10C664u);
    ctx->pc = 0x10C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C65Cu;
    // 0x10c660: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D460u, 0x10C65Cu, 0x10C664u)) {
        return;
    }
    ctx->pc = 0x10C664u;
label_10c664:
    // 0x10c664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10c664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c668:
    // 0x10c668: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10c668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c66c:
    // 0x10c66c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x10c66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10c670: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x10c670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10c674: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x10c674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10c678: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x10c678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10c67c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x10c67cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c680: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10c680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c684: 0x3e00008  jr          $ra
    ctx->pc = 0x10C684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C684u;
        // 0x10c688: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C68Cu;
    // 0x10c68c: 0x0  nop
    ctx->pc = 0x10c68cu;
    // NOP
    ctx->pc = 0x10c690u;
}
