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

// Function: sub_001B5830
// Address: 0x1b5830 - 0x1b5c78
void sub_001B5830_0x1b5830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5830_0x1b5830");
#endif

    switch (ctx->pc) {
        case 0x1b5860u: goto label_1b5860;
        case 0x1b5910u: goto label_1b5910;
        case 0x1b592cu: goto label_1b592c;
        case 0x1b5940u: goto label_1b5940;
        case 0x1b5994u: goto label_1b5994;
        case 0x1b59a0u: goto label_1b59a0;
        case 0x1b59c0u: goto label_1b59c0;
        case 0x1b59dcu: goto label_1b59dc;
        case 0x1b59f0u: goto label_1b59f0;
        case 0x1b5a48u: goto label_1b5a48;
        case 0x1b5a54u: goto label_1b5a54;
        case 0x1b5a6cu: goto label_1b5a6c;
        case 0x1b5a90u: goto label_1b5a90;
        case 0x1b5aa4u: goto label_1b5aa4;
        case 0x1b5ac4u: goto label_1b5ac4;
        case 0x1b5b1cu: goto label_1b5b1c;
        case 0x1b5b48u: goto label_1b5b48;
        case 0x1b5b68u: goto label_1b5b68;
        case 0x1b5b90u: goto label_1b5b90;
        case 0x1b5bd8u: goto label_1b5bd8;
        case 0x1b5c28u: goto label_1b5c28;
        case 0x1b5c4cu: goto label_1b5c4c;
        default: break;
    }

    ctx->pc = 0x1b5830u;

    // 0x1b5830: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b5830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1b5834: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1b5834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1b5838: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1b5838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1b583c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b583cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5840: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b5840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5844: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1b5844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1b5848: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1b5848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1b584c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b5850: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x1b5850u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1b5854: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1b5854u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1b5858: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1B5858u;
    SET_GPR_U32(ctx, 31, 0x1B5860u);
    ctx->pc = 0x1B585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5858u;
    // 0x1b585c: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1B5858u, 0x1B5860u)) {
        return;
    }
    ctx->pc = 0x1B5860u;
label_1b5860:
    // 0x1b5860: 0x8e2202b4  lw          $v0, 0x2B4($s1)
    ctx->pc = 0x1b5860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b5864: 0x8a230253  lwl         $v1, 0x253($s1)
    ctx->pc = 0x1b5864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 595); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1b5868: 0x9a230250  lwr         $v1, 0x250($s1)
    ctx->pc = 0x1b5868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 592); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1b586c: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x1b586cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b5870: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x1b5870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b5874: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5874u;
    {
        const bool branch_taken_0x1b5874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5874) {
            ctx->pc = 0x1B5878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5874u;
            // 0x1b5878: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5894u;
            goto label_1b5894;
        }
    }
    ctx->pc = 0x1B587Cu;
    // 0x1b587c: 0x8a2802bf  lwl         $t0, 0x2BF($s1)
    ctx->pc = 0x1b587cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 703); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1b5880: 0x9a2802bc  lwr         $t0, 0x2BC($s1)
    ctx->pc = 0x1b5880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 700); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1b5884: 0xaba80013  swl         $t0, 0x13($sp)
    ctx->pc = 0x1b5884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b5888: 0xbba80010  swr         $t0, 0x10($sp)
    ctx->pc = 0x1b5888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b588c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1B588Cu;
    {
        const bool branch_taken_0x1b588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B588Cu;
        // 0x1b5890: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b588c) {
            ctx->pc = 0x1B5900u;
            goto label_1b5900;
        }
    }
    ctx->pc = 0x1B5894u;
label_1b5894:
    // 0x1b5894: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B5894u;
    {
        const bool branch_taken_0x1b5894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5894u;
        // 0x1b5898: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5894) {
            ctx->pc = 0x1B5900u;
            goto label_1b5900;
        }
    }
    ctx->pc = 0x1B589Cu;
    // 0x1b589c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B589Cu;
    {
        const bool branch_taken_0x1b589c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b589c) {
            ctx->pc = 0x1B58A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B589Cu;
            // 0x1b58a0: 0xde220260  ld          $v0, 0x260($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B58C0u;
            goto label_1b58c0;
        }
    }
    ctx->pc = 0x1B58A4u;
    // 0x1b58a4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1b58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1b58a8: 0x8844013f  lwl         $a0, 0x13F($v0)
    ctx->pc = 0x1b58a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 319); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1b58ac: 0x9844013c  lwr         $a0, 0x13C($v0)
    ctx->pc = 0x1b58acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 316); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1b58b0: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x1b58b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b58b4: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x1b58b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b58b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B58B8u;
    {
        const bool branch_taken_0x1b58b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58B8u;
        // 0x1b58bc: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58b8) {
            ctx->pc = 0x1B5900u;
            goto label_1b5900;
        }
    }
    ctx->pc = 0x1B58C0u;
label_1b58c0:
    // 0x1b58c0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1b58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1b58c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b58c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b58c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b58c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b58cc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B58CCu;
    {
        const bool branch_taken_0x1b58cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b58cc) {
            ctx->pc = 0x1B58D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B58CCu;
            // 0x1b58d0: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B58ECu;
            goto label_1b58ec;
        }
    }
    ctx->pc = 0x1B58D4u;
    // 0x1b58d4: 0x8a290263  lwl         $t1, 0x263($s1)
    ctx->pc = 0x1b58d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 611); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x1b58d8: 0x9a290260  lwr         $t1, 0x260($s1)
    ctx->pc = 0x1b58d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 608); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x1b58dc: 0xaba90013  swl         $t1, 0x13($sp)
    ctx->pc = 0x1b58dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b58e0: 0xbba90010  swr         $t1, 0x10($sp)
    ctx->pc = 0x1b58e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b58e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B58E4u;
    {
        const bool branch_taken_0x1b58e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58E4u;
        // 0x1b58e8: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58e4) {
            ctx->pc = 0x1B5900u;
            goto label_1b5900;
        }
    }
    ctx->pc = 0x1B58ECu;
label_1b58ec:
    // 0x1b58ec: 0x88450143  lwl         $a1, 0x143($v0)
    ctx->pc = 0x1b58ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 323); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x1b58f0: 0x98450140  lwr         $a1, 0x140($v0)
    ctx->pc = 0x1b58f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 320); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x1b58f4: 0xaba50013  swl         $a1, 0x13($sp)
    ctx->pc = 0x1b58f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b58f8: 0xbba50010  swr         $a1, 0x10($sp)
    ctx->pc = 0x1b58f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b58fc: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x1b58fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1b5900:
    // 0x1b5900: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B5900u;
    {
        const bool branch_taken_0x1b5900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5900) {
            ctx->pc = 0x1B5904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5900u;
            // 0x1b5904: 0x8e2202a0  lw          $v0, 0x2A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B59A4u;
            goto label_1b59a4;
        }
    }
    ctx->pc = 0x1B5908u;
    // 0x1b5908: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1B5908u;
    SET_GPR_U32(ctx, 31, 0x1B5910u);
    ctx->pc = 0x1B590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5908u;
    // 0x1b590c: 0x8e2402a8  lw          $a0, 0x2A8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1B5908u, 0x1B5910u)) {
        return;
    }
    ctx->pc = 0x1B5910u;
label_1b5910:
    // 0x1b5910: 0xc6410080  lwc1        $f1, 0x80($s2)
    ctx->pc = 0x1b5910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5914: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b5914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b591c: 0x0  nop
    ctx->pc = 0x1b591cu;
    // NOP
    // 0x1b5920: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x1b5920u;
    ctx->f[21] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1b5924: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B5924u;
    SET_GPR_U32(ctx, 31, 0x1B592Cu);
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B5924u, 0x1B592Cu)) {
        return;
    }
    ctx->pc = 0x1B592Cu;
label_1b592c:
    // 0x1b592c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B592Cu;
    {
        const bool branch_taken_0x1b592c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b592c) {
            ctx->pc = 0x1B5930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B592Cu;
            // 0x1b5930: 0xc6340278  lwc1        $f20, 0x278($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5938u;
            goto label_1b5938;
        }
    }
    ctx->pc = 0x1B5934u;
    // 0x1b5934: 0xc6340000  lwc1        $f20, 0x0($s1)
    ctx->pc = 0x1b5934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b5938:
    // 0x1b5938: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B5938u;
    SET_GPR_U32(ctx, 31, 0x1B5940u);
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B5938u, 0x1B5940u)) {
        return;
    }
    ctx->pc = 0x1B5940u;
label_1b5940:
    // 0x1b5940: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5940u;
    {
        const bool branch_taken_0x1b5940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5940) {
            ctx->pc = 0x1B5944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5940u;
            // 0x1b5944: 0xc62d027c  lwc1        $f13, 0x27C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B594Cu;
            goto label_1b594c;
        }
    }
    ctx->pc = 0x1B5948u;
    // 0x1b5948: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x1b5948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b594c:
    // 0x1b594c: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1b594cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1b5950: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1b5950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1b5954: 0xc6210294  lwc1        $f1, 0x294($s1)
    ctx->pc = 0x1b5954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5958: 0x26300150  addiu       $s0, $s1, 0x150
    ctx->pc = 0x1b5958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b595c: 0xc6200298  lwc1        $f0, 0x298($s1)
    ctx->pc = 0x1b595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5964: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x1b5964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1b5968: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b5968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b596c: 0xc62f000c  lwc1        $f15, 0xC($s1)
    ctx->pc = 0x1b596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1b5970: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b5970u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b5974: 0xc632028c  lwc1        $f18, 0x28C($s1)
    ctx->pc = 0x1b5974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1b5978: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x1b5978u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x1b597c: 0xc6330290  lwc1        $f19, 0x290($s1)
    ctx->pc = 0x1b597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x1b5980: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x1b5980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x1b5984: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x1b5984u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1b5988: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b5988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b598c: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1B598Cu;
    SET_GPR_U32(ctx, 31, 0x1B5994u);
    ctx->pc = 0x1B5990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B598Cu;
    // 0x1b5990: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B598Cu, 0x1B5994u)) {
        return;
    }
    ctx->pc = 0x1B5994u;
label_1b5994:
    // 0x1b5994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5998: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1B5998u;
    SET_GPR_U32(ctx, 31, 0x1B59A0u);
    ctx->pc = 0x1B599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5998u;
    // 0x1b599c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B5998u, 0x1B59A0u)) {
        return;
    }
    ctx->pc = 0x1B59A0u;
label_1b59a0:
    // 0x1b59a0: 0x8e2202a0  lw          $v0, 0x2A0($s1)
    ctx->pc = 0x1b59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
label_1b59a4:
    // 0x1b59a4: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B59A4u;
    {
        const bool branch_taken_0x1b59a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b59a4) {
            ctx->pc = 0x1B59A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B59A4u;
            // 0x1b59a8: 0x8e220274  lw          $v0, 0x274($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A58u;
            goto label_1b5a58;
        }
    }
    ctx->pc = 0x1B59ACu;
    // 0x1b59ac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b59acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b59b0: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B59B0u;
    {
        const bool branch_taken_0x1b59b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b59b0) {
            ctx->pc = 0x1B59B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B59B0u;
            // 0x1b59b4: 0x8e220274  lw          $v0, 0x274($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A58u;
            goto label_1b5a58;
        }
    }
    ctx->pc = 0x1B59B8u;
    // 0x1b59b8: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1B59B8u;
    SET_GPR_U32(ctx, 31, 0x1B59C0u);
    ctx->pc = 0x1B59BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59B8u;
    // 0x1b59bc: 0x8e2402ac  lw          $a0, 0x2AC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1B59B8u, 0x1B59C0u)) {
        return;
    }
    ctx->pc = 0x1B59C0u;
label_1b59c0:
    // 0x1b59c0: 0xc6410080  lwc1        $f1, 0x80($s2)
    ctx->pc = 0x1b59c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b59c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b59c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b59c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b59c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b59cc: 0x0  nop
    ctx->pc = 0x1b59ccu;
    // NOP
    // 0x1b59d0: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x1b59d0u;
    ctx->f[21] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1b59d4: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B59D4u;
    SET_GPR_U32(ctx, 31, 0x1B59DCu);
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B59D4u, 0x1B59DCu)) {
        return;
    }
    ctx->pc = 0x1B59DCu;
label_1b59dc:
    // 0x1b59dc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B59DCu;
    {
        const bool branch_taken_0x1b59dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b59dc) {
            ctx->pc = 0x1B59E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B59DCu;
            // 0x1b59e0: 0xc6340278  lwc1        $f20, 0x278($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B59E8u;
            goto label_1b59e8;
        }
    }
    ctx->pc = 0x1B59E4u;
    // 0x1b59e4: 0xc6340000  lwc1        $f20, 0x0($s1)
    ctx->pc = 0x1b59e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b59e8:
    // 0x1b59e8: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B59E8u;
    SET_GPR_U32(ctx, 31, 0x1B59F0u);
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B59E8u, 0x1B59F0u)) {
        return;
    }
    ctx->pc = 0x1B59F0u;
label_1b59f0:
    // 0x1b59f0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B59F0u;
    {
        const bool branch_taken_0x1b59f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b59f0) {
            ctx->pc = 0x1B59F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B59F0u;
            // 0x1b59f4: 0xc62d027c  lwc1        $f13, 0x27C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B59FCu;
            goto label_1b59fc;
        }
    }
    ctx->pc = 0x1B59F8u;
    // 0x1b59f8: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x1b59f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b59fc:
    // 0x1b59fc: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1b59fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1b5a00: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1b5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1b5a04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b5a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5a08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5a0c: 0x26300150  addiu       $s0, $s1, 0x150
    ctx->pc = 0x1b5a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b5a10: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1b5a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1b5a14: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b5a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b5a18: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x1b5a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1b5a1c: 0x24a5c908  addiu       $a1, $a1, -0x36F8
    ctx->pc = 0x1b5a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953224));
    // 0x1b5a20: 0xc62f000c  lwc1        $f15, 0xC($s1)
    ctx->pc = 0x1b5a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1b5a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a28: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x1b5a28u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1b5a2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b5a2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b5a30: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b5a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b5a34: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x1b5a34u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x1b5a38: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x1b5a38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x1b5a3c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b5a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b5a40: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1B5A40u;
    SET_GPR_U32(ctx, 31, 0x1B5A48u);
    ctx->pc = 0x1B5A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A40u;
    // 0x1b5a44: 0x460094c6  mov.s       $f19, $f18 (Delay Slot)
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B5A40u, 0x1B5A48u)) {
        return;
    }
    ctx->pc = 0x1B5A48u;
label_1b5a48:
    // 0x1b5a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a4c: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1B5A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A54u);
    ctx->pc = 0x1B5A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A4Cu;
    // 0x1b5a50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B5A4Cu, 0x1B5A54u)) {
        return;
    }
    ctx->pc = 0x1B5A54u;
label_1b5a54:
    // 0x1b5a54: 0x8e220274  lw          $v0, 0x274($s1)
    ctx->pc = 0x1b5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_1b5a58:
    // 0x1b5a58: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1B5A58u;
    {
        const bool branch_taken_0x1b5a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A58u;
        // 0x1b5a5c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a58) {
            ctx->pc = 0x1B5C50u;
            goto label_1b5c50;
        }
    }
    ctx->pc = 0x1B5A60u;
    // 0x1b5a60: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1b5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1b5a64: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x1B5A64u;
    SET_GPR_U32(ctx, 31, 0x1B5A6Cu);
    ctx->pc = 0x1B5A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A64u;
    // 0x1b5a68: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1B5A64u, 0x1B5A6Cu)) {
        return;
    }
    ctx->pc = 0x1B5A6Cu;
label_1b5a6c:
    // 0x1b5a6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b5a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a70: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1b5a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b5a74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5A74u;
    {
        const bool branch_taken_0x1b5a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A74u;
        // 0x1b5a78: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a74) {
            ctx->pc = 0x1B5A80u;
            goto label_1b5a80;
        }
    }
    ctx->pc = 0x1B5A7Cu;
    // 0x1b5a7c: 0xa3a20013  sb          $v0, 0x13($sp)
    ctx->pc = 0x1b5a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
label_1b5a80:
    // 0x1b5a80: 0x52000073  beql        $s0, $zero, . + 4 + (0x73 << 2)
    ctx->pc = 0x1B5A80u;
    {
        const bool branch_taken_0x1b5a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a80) {
            ctx->pc = 0x1B5A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5A80u;
            // 0x1b5a84: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5C50u;
            goto label_1b5c50;
        }
    }
    ctx->pc = 0x1B5A88u;
    // 0x1b5a88: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B5A88u;
    SET_GPR_U32(ctx, 31, 0x1B5A90u);
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B5A88u, 0x1B5A90u)) {
        return;
    }
    ctx->pc = 0x1B5A90u;
label_1b5a90:
    // 0x1b5a90: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5A90u;
    {
        const bool branch_taken_0x1b5a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a90) {
            ctx->pc = 0x1B5A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5A90u;
            // 0x1b5a94: 0xc6350278  lwc1        $f21, 0x278($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A9Cu;
            goto label_1b5a9c;
        }
    }
    ctx->pc = 0x1B5A98u;
    // 0x1b5a98: 0xc6350000  lwc1        $f21, 0x0($s1)
    ctx->pc = 0x1b5a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b5a9c:
    // 0x1b5a9c: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B5A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B5AA4u);
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B5A9Cu, 0x1B5AA4u)) {
        return;
    }
    ctx->pc = 0x1B5AA4u;
label_1b5aa4:
    // 0x1b5aa4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5AA4u;
    {
        const bool branch_taken_0x1b5aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5aa4) {
            ctx->pc = 0x1B5AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5AA4u;
            // 0x1b5aa8: 0xc634027c  lwc1        $f20, 0x27C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5AB0u;
            goto label_1b5ab0;
        }
    }
    ctx->pc = 0x1B5AACu;
    // 0x1b5aac: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x1b5aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b5ab0:
    // 0x1b5ab0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b5ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ab8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b5ab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5abc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B5ABCu;
    SET_GPR_U32(ctx, 31, 0x1B5AC4u);
    ctx->pc = 0x1B5AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5ABCu;
    // 0x1b5ac0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B5ABCu, 0x1B5AC4u)) {
        return;
    }
    ctx->pc = 0x1B5AC4u;
label_1b5ac4:
    // 0x1b5ac4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1b5ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5ac8: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b5ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5acc: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1b5accu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b5ad0: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x1b5ad0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1b5ad4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1b5ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1b5ad8: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x1b5ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1b5adc: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1b5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1b5ae0: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x1b5ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b5ae4: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x1b5ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b5ae8: 0x6ba4003f  ldl         $a0, 0x3F($sp)
    ctx->pc = 0x1b5ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1b5aec: 0x6fa40038  ldr         $a0, 0x38($sp)
    ctx->pc = 0x1b5aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1b5af0: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x1b5af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b5af4: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x1b5af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b5af8: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x1b5af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b5afc: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x1b5afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b5b00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5B00u;
    {
        const bool branch_taken_0x1b5b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B00u;
        // 0x1b5b04: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b00) {
            ctx->pc = 0x1B5B1Cu;
            goto label_1b5b1c;
        }
    }
    ctx->pc = 0x1B5B08u;
    // 0x1b5b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b0c: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x1b5b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1b5b10: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1b5b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1b5b14: 0xc06cda0  jal         func_1B3680
    ctx->pc = 0x1B5B14u;
    SET_GPR_U32(ctx, 31, 0x1B5B1Cu);
    ctx->pc = 0x1B5B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B14u;
    // 0x1b5b18: 0x27a7002c  addiu       $a3, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1B5B14u, 0x1B5B1Cu)) {
        return;
    }
    ctx->pc = 0x1B5B1Cu;
label_1b5b1c:
    // 0x1b5b1c: 0xc6340288  lwc1        $f20, 0x288($s1)
    ctx->pc = 0x1b5b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b5b20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b5b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5b28: 0x0  nop
    ctx->pc = 0x1b5b28u;
    // NOP
    // 0x1b5b2c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1b5b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5b30: 0x0  nop
    ctx->pc = 0x1b5b30u;
    // NOP
    // 0x1b5b34: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x1B5B34u;
    {
        const bool branch_taken_0x1b5b34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B34u;
        // 0x1b5b38: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b34) {
            ctx->pc = 0x1B5BC0u;
            goto label_1b5bc0;
        }
    }
    ctx->pc = 0x1B5B3Cu;
    // 0x1b5b3c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1b5b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1b5b40: 0x8e250274  lw          $a1, 0x274($s1)
    ctx->pc = 0x1b5b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x1b5b44: 0x0  nop
    ctx->pc = 0x1b5b44u;
    // NOP
label_1b5b48:
    // 0x1b5b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b4c: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x1b5b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b5b50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b5b50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b5b54: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1b5b54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b5b58: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1b5b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b5b5c: 0xe7b60054  swc1        $f22, 0x54($sp)
    ctx->pc = 0x1b5b5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b5b60: 0xc085d7e  jal         func_2175F8
    ctx->pc = 0x1B5B60u;
    SET_GPR_U32(ctx, 31, 0x1B5B68u);
    ctx->pc = 0x1B5B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B60u;
    // 0x1b5b64: 0x27a70054  addiu       $a3, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2175F8u, 0x1B5B60u, 0x1B5B68u)) {
        return;
    }
    ctx->pc = 0x1B5B68u;
label_1b5b68:
    // 0x1b5b68: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b5b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5b6c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1b5b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5b70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b5b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5b74: 0x0  nop
    ctx->pc = 0x1b5b74u;
    // NOP
    // 0x1b5b78: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5B78u;
    {
        const bool branch_taken_0x1b5b78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B78u;
        // 0x1b5b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b78) {
            ctx->pc = 0x1B5B94u;
            goto label_1b5b94;
        }
    }
    ctx->pc = 0x1B5B80u;
    // 0x1b5b80: 0x8e250274  lw          $a1, 0x274($s1)
    ctx->pc = 0x1b5b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x1b5b84: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b5b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b5b88: 0xc085d2a  jal         func_2174A8
    ctx->pc = 0x1B5B88u;
    SET_GPR_U32(ctx, 31, 0x1B5B90u);
    ctx->pc = 0x1B5B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B88u;
    // 0x1b5b8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2174A8u, 0x1B5B88u, 0x1B5B90u)) {
        return;
    }
    ctx->pc = 0x1B5B90u;
label_1b5b90:
    // 0x1b5b90: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1b5b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1b5b94:
    // 0x1b5b94: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1b5b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5b98: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1b5b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5b9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5ba0: 0x0  nop
    ctx->pc = 0x1b5ba0u;
    // NOP
    // 0x1b5ba4: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5BA4u;
    {
        const bool branch_taken_0x1b5ba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5ba4) {
            ctx->pc = 0x1B5BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5BA4u;
            // 0x1b5ba8: 0xde220280  ld          $v0, 0x280($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5BC4u;
            goto label_1b5bc4;
        }
    }
    ctx->pc = 0x1B5BACu;
    // 0x1b5bac: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x1b5bacu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x1b5bb0: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x1b5bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5bb4: 0x0  nop
    ctx->pc = 0x1b5bb4u;
    // NOP
    // 0x1b5bb8: 0x4503ffe3  bc1tl       . + 4 + (-0x1D << 2)
    ctx->pc = 0x1B5BB8u;
    {
        const bool branch_taken_0x1b5bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5bb8) {
            ctx->pc = 0x1B5BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5BB8u;
            // 0x1b5bbc: 0x8e250274  lw          $a1, 0x274($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5b48;
        }
    }
    ctx->pc = 0x1B5BC0u;
label_1b5bc0:
    // 0x1b5bc0: 0xde220280  ld          $v0, 0x280($s1)
    ctx->pc = 0x1b5bc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 640)));
label_1b5bc4:
    // 0x1b5bc4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B5BC4u;
    {
        const bool branch_taken_0x1b5bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BC4u;
        // 0x1b5bc8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5bc4) {
            ctx->pc = 0x1B5C30u;
            goto label_1b5c30;
        }
    }
    ctx->pc = 0x1B5BCCu;
    // 0x1b5bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bd0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B5BD0u;
    SET_GPR_U32(ctx, 31, 0x1B5BD8u);
    ctx->pc = 0x1B5BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5BD0u;
    // 0x1b5bd4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B5BD0u, 0x1B5BD8u)) {
        return;
    }
    ctx->pc = 0x1B5BD8u;
label_1b5bd8:
    // 0x1b5bd8: 0xc6220280  lwc1        $f2, 0x280($s1)
    ctx->pc = 0x1b5bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b5bdc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5be0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1b5be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5be4: 0xc6230284  lwc1        $f3, 0x284($s1)
    ctx->pc = 0x1b5be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b5be8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b5be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b5bec: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1b5becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5bf0: 0x8e250274  lw          $a1, 0x274($s1)
    ctx->pc = 0x1b5bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x1b5bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b5bf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b5bfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b5bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c00: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1b5c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1b5c04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b5c04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b5c08: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1b5c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b5c0c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1b5c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1b5c10: 0x6ba80047  ldl         $t0, 0x47($sp)
    ctx->pc = 0x1b5c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1b5c14: 0x6fa80040  ldr         $t0, 0x40($sp)
    ctx->pc = 0x1b5c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1b5c18: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x1b5c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b5c1c: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x1b5c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b5c20: 0xc085cac  jal         func_2172B0
    ctx->pc = 0x1B5C20u;
    SET_GPR_U32(ctx, 31, 0x1B5C28u);
    ctx->pc = 0x1B5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C20u;
    // 0x1b5c24: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x1B5C20u, 0x1B5C28u)) {
        return;
    }
    ctx->pc = 0x1B5C28u;
label_1b5c28:
    // 0x1b5c28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5C28u;
    {
        const bool branch_taken_0x1b5c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C28u;
        // 0x1b5c2c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c28) {
            ctx->pc = 0x1B5C50u;
            goto label_1b5c50;
        }
    }
    ctx->pc = 0x1B5C30u;
label_1b5c30:
    // 0x1b5c30: 0x8e28029c  lw          $t0, 0x29C($s1)
    ctx->pc = 0x1b5c30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
    // 0x1b5c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c38: 0x8e250274  lw          $a1, 0x274($s1)
    ctx->pc = 0x1b5c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x1b5c3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b5c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b5c40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b5c44: 0xc085cec  jal         func_2173B0
    ctx->pc = 0x1B5C44u;
    SET_GPR_U32(ctx, 31, 0x1B5C4Cu);
    ctx->pc = 0x1B5C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C44u;
    // 0x1b5c48: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1B5C44u, 0x1B5C4Cu)) {
        return;
    }
    ctx->pc = 0x1B5C4Cu;
label_1b5c4c:
    // 0x1b5c4c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1b5c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b5c50:
    // 0x1b5c50: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1b5c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b5c54: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1b5c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b5c58: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1b5c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b5c5c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b5c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b5c60: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x1b5c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b5c64: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1b5c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b5c68: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1b5c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b5c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C6Cu;
        // 0x1b5c70: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5C74u;
    // 0x1b5c74: 0x0  nop
    ctx->pc = 0x1b5c74u;
    // NOP
    ctx->pc = 0x1b5c78u;
}
