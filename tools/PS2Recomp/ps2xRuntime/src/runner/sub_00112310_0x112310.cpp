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

// Function: sub_00112310
// Address: 0x112310 - 0x1124f8
void sub_00112310_0x112310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112310_0x112310");
#endif

    switch (ctx->pc) {
        case 0x112310u: goto label_112310;
        case 0x112314u: goto label_112314;
        case 0x112318u: goto label_112318;
        case 0x11231cu: goto label_11231c;
        case 0x112320u: goto label_112320;
        case 0x112324u: goto label_112324;
        case 0x112328u: goto label_112328;
        case 0x11232cu: goto label_11232c;
        case 0x112330u: goto label_112330;
        case 0x112334u: goto label_112334;
        case 0x112338u: goto label_112338;
        case 0x11233cu: goto label_11233c;
        case 0x112340u: goto label_112340;
        case 0x112344u: goto label_112344;
        case 0x112348u: goto label_112348;
        case 0x11234cu: goto label_11234c;
        case 0x112350u: goto label_112350;
        case 0x112354u: goto label_112354;
        case 0x112358u: goto label_112358;
        case 0x11235cu: goto label_11235c;
        case 0x112360u: goto label_112360;
        case 0x112364u: goto label_112364;
        case 0x112368u: goto label_112368;
        case 0x11236cu: goto label_11236c;
        case 0x112370u: goto label_112370;
        case 0x112374u: goto label_112374;
        case 0x112378u: goto label_112378;
        case 0x11237cu: goto label_11237c;
        case 0x112380u: goto label_112380;
        case 0x112384u: goto label_112384;
        case 0x112388u: goto label_112388;
        case 0x11238cu: goto label_11238c;
        case 0x112390u: goto label_112390;
        case 0x112394u: goto label_112394;
        case 0x112398u: goto label_112398;
        case 0x11239cu: goto label_11239c;
        case 0x1123a0u: goto label_1123a0;
        case 0x1123a4u: goto label_1123a4;
        case 0x1123a8u: goto label_1123a8;
        case 0x1123acu: goto label_1123ac;
        case 0x1123b0u: goto label_1123b0;
        case 0x1123b4u: goto label_1123b4;
        case 0x1123b8u: goto label_1123b8;
        case 0x1123bcu: goto label_1123bc;
        case 0x1123c0u: goto label_1123c0;
        case 0x1123c4u: goto label_1123c4;
        case 0x1123c8u: goto label_1123c8;
        case 0x1123ccu: goto label_1123cc;
        case 0x1123d0u: goto label_1123d0;
        case 0x1123d4u: goto label_1123d4;
        case 0x1123d8u: goto label_1123d8;
        case 0x1123dcu: goto label_1123dc;
        case 0x1123e0u: goto label_1123e0;
        case 0x1123e4u: goto label_1123e4;
        case 0x1123e8u: goto label_1123e8;
        case 0x1123ecu: goto label_1123ec;
        case 0x1123f0u: goto label_1123f0;
        case 0x1123f4u: goto label_1123f4;
        case 0x1123f8u: goto label_1123f8;
        case 0x1123fcu: goto label_1123fc;
        case 0x112400u: goto label_112400;
        case 0x112404u: goto label_112404;
        case 0x112408u: goto label_112408;
        case 0x11240cu: goto label_11240c;
        case 0x112410u: goto label_112410;
        case 0x112414u: goto label_112414;
        case 0x112418u: goto label_112418;
        case 0x11241cu: goto label_11241c;
        case 0x112420u: goto label_112420;
        case 0x112424u: goto label_112424;
        case 0x112428u: goto label_112428;
        case 0x11242cu: goto label_11242c;
        case 0x112430u: goto label_112430;
        case 0x112434u: goto label_112434;
        case 0x112438u: goto label_112438;
        case 0x11243cu: goto label_11243c;
        case 0x112440u: goto label_112440;
        case 0x112444u: goto label_112444;
        case 0x112448u: goto label_112448;
        case 0x11244cu: goto label_11244c;
        case 0x112450u: goto label_112450;
        case 0x112454u: goto label_112454;
        case 0x112458u: goto label_112458;
        case 0x11245cu: goto label_11245c;
        case 0x112460u: goto label_112460;
        case 0x112464u: goto label_112464;
        case 0x112468u: goto label_112468;
        case 0x11246cu: goto label_11246c;
        case 0x112470u: goto label_112470;
        case 0x112474u: goto label_112474;
        case 0x112478u: goto label_112478;
        case 0x11247cu: goto label_11247c;
        case 0x112480u: goto label_112480;
        case 0x112484u: goto label_112484;
        case 0x112488u: goto label_112488;
        case 0x11248cu: goto label_11248c;
        case 0x112490u: goto label_112490;
        case 0x112494u: goto label_112494;
        case 0x112498u: goto label_112498;
        case 0x11249cu: goto label_11249c;
        case 0x1124a0u: goto label_1124a0;
        case 0x1124a4u: goto label_1124a4;
        case 0x1124a8u: goto label_1124a8;
        case 0x1124acu: goto label_1124ac;
        case 0x1124b0u: goto label_1124b0;
        case 0x1124b4u: goto label_1124b4;
        case 0x1124b8u: goto label_1124b8;
        case 0x1124bcu: goto label_1124bc;
        case 0x1124c0u: goto label_1124c0;
        case 0x1124c4u: goto label_1124c4;
        case 0x1124c8u: goto label_1124c8;
        case 0x1124ccu: goto label_1124cc;
        case 0x1124d0u: goto label_1124d0;
        case 0x1124d4u: goto label_1124d4;
        case 0x1124d8u: goto label_1124d8;
        case 0x1124dcu: goto label_1124dc;
        case 0x1124e0u: goto label_1124e0;
        case 0x1124e4u: goto label_1124e4;
        case 0x1124e8u: goto label_1124e8;
        case 0x1124ecu: goto label_1124ec;
        case 0x1124f0u: goto label_1124f0;
        case 0x1124f4u: goto label_1124f4;
        default: break;
    }

    ctx->pc = 0x112310u;

label_112310:
    // 0x112310: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x112310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_112314:
    // 0x112314: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x112314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_112318:
    // 0x112318: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x112318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_11231c:
    // 0x11231c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11231cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_112320:
    // 0x112320: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x112320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_112324:
    // 0x112324: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x112324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_112328:
    // 0x112328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11232c:
    // 0x11232c: 0x10e00033  beqz        $a3, . + 4 + (0x33 << 2)
label_112330:
    if (ctx->pc == 0x112330u) {
        ctx->pc = 0x112330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11232Cu;
        // 0x112330: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x112334u;
        goto label_112334;
    }
    ctx->pc = 0x11232Cu;
    {
        const bool branch_taken_0x11232c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x112330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11232Cu;
        // 0x112330: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11232c) {
            ctx->pc = 0x1123FCu;
            goto label_1123fc;
        }
    }
    ctx->pc = 0x112334u;
label_112334:
    // 0x112334: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x112334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_112338:
    // 0x112338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11233c:
    // 0x11233c: 0x10430031  beq         $v0, $v1, . + 4 + (0x31 << 2)
label_112340:
    if (ctx->pc == 0x112340u) {
        ctx->pc = 0x112340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11233Cu;
        // 0x112340: 0x261100d8  addiu       $s1, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112344u;
        goto label_112344;
    }
    ctx->pc = 0x11233Cu;
    {
        const bool branch_taken_0x11233c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x112340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11233Cu;
        // 0x112340: 0x261100d8  addiu       $s1, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11233c) {
            ctx->pc = 0x112404u;
            goto label_112404;
        }
    }
    ctx->pc = 0x112344u;
label_112344:
    // 0x112344: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x112344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_112348:
    // 0x112348: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x112348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11234c:
    // 0x11234c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x11234cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_112350:
    // 0x112350: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x112350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_112354:
    // 0x112354: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x112354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_112358:
    // 0x112358: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x112358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11235c:
    // 0x11235c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x11235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_112360:
    // 0x112360: 0x68820017  ldl         $v0, 0x17($a0)
    ctx->pc = 0x112360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_112364:
    // 0x112364: 0x6c820010  ldr         $v0, 0x10($a0)
    ctx->pc = 0x112364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_112368:
    // 0x112368: 0x6883001f  ldl         $v1, 0x1F($a0)
    ctx->pc = 0x112368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_11236c:
    // 0x11236c: 0x6c830018  ldr         $v1, 0x18($a0)
    ctx->pc = 0x11236cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_112370:
    // 0x112370: 0x68850027  ldl         $a1, 0x27($a0)
    ctx->pc = 0x112370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_112374:
    // 0x112374: 0x6c850020  ldr         $a1, 0x20($a0)
    ctx->pc = 0x112374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_112378:
    // 0x112378: 0x6886002f  ldl         $a2, 0x2F($a0)
    ctx->pc = 0x112378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_11237c:
    // 0x11237c: 0x6c860028  ldr         $a2, 0x28($a0)
    ctx->pc = 0x11237cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_112380:
    // 0x112380: 0xb2020047  sdl         $v0, 0x47($s0)
    ctx->pc = 0x112380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_112384:
    // 0x112384: 0xb6020040  sdr         $v0, 0x40($s0)
    ctx->pc = 0x112384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_112388:
    // 0x112388: 0xb203004f  sdl         $v1, 0x4F($s0)
    ctx->pc = 0x112388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11238c:
    // 0x11238c: 0xb6030048  sdr         $v1, 0x48($s0)
    ctx->pc = 0x11238cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_112390:
    // 0x112390: 0xb2050057  sdl         $a1, 0x57($s0)
    ctx->pc = 0x112390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_112394:
    // 0x112394: 0xb6050050  sdr         $a1, 0x50($s0)
    ctx->pc = 0x112394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_112398:
    // 0x112398: 0xb206005f  sdl         $a2, 0x5F($s0)
    ctx->pc = 0x112398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11239c:
    // 0x11239c: 0xb6060058  sdr         $a2, 0x58($s0)
    ctx->pc = 0x11239cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1123a0:
    // 0x1123a0: 0x68820037  ldl         $v0, 0x37($a0)
    ctx->pc = 0x1123a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1123a4:
    // 0x1123a4: 0x6c820030  ldr         $v0, 0x30($a0)
    ctx->pc = 0x1123a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1123a8:
    // 0x1123a8: 0x6883003f  ldl         $v1, 0x3F($a0)
    ctx->pc = 0x1123a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1123ac:
    // 0x1123ac: 0x6c830038  ldr         $v1, 0x38($a0)
    ctx->pc = 0x1123acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1123b0:
    // 0x1123b0: 0x68850047  ldl         $a1, 0x47($a0)
    ctx->pc = 0x1123b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1123b4:
    // 0x1123b4: 0x6c850040  ldr         $a1, 0x40($a0)
    ctx->pc = 0x1123b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1123b8:
    // 0x1123b8: 0x6886004f  ldl         $a2, 0x4F($a0)
    ctx->pc = 0x1123b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1123bc:
    // 0x1123bc: 0x6c860048  ldr         $a2, 0x48($a0)
    ctx->pc = 0x1123bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1123c0:
    // 0x1123c0: 0xb2020067  sdl         $v0, 0x67($s0)
    ctx->pc = 0x1123c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1123c4:
    // 0x1123c4: 0xb6020060  sdr         $v0, 0x60($s0)
    ctx->pc = 0x1123c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1123c8:
    // 0x1123c8: 0xb203006f  sdl         $v1, 0x6F($s0)
    ctx->pc = 0x1123c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1123cc:
    // 0x1123cc: 0xb6030068  sdr         $v1, 0x68($s0)
    ctx->pc = 0x1123ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1123d0:
    // 0x1123d0: 0xb2050077  sdl         $a1, 0x77($s0)
    ctx->pc = 0x1123d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1123d4:
    // 0x1123d4: 0xb6050070  sdr         $a1, 0x70($s0)
    ctx->pc = 0x1123d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1123d8:
    // 0x1123d8: 0xb206007f  sdl         $a2, 0x7F($s0)
    ctx->pc = 0x1123d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1123dc:
    // 0x1123dc: 0xb6060078  sdr         $a2, 0x78($s0)
    ctx->pc = 0x1123dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1123e0:
    // 0x1123e0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1123e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1123e4:
    // 0x1123e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1123e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1123e8:
    // 0x1123e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1123e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1123ec:
    // 0x1123ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1123ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1123f0:
    // 0x1123f0: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1123f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1123f4:
    // 0x1123f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1123f8:
    if (ctx->pc == 0x1123F8u) {
        ctx->pc = 0x1123F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123F4u;
        // 0x1123f8: 0xe6000080  swc1        $f0, 0x80($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1123FCu;
        goto label_1123fc;
    }
    ctx->pc = 0x1123F4u;
    {
        const bool branch_taken_0x1123f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123F4u;
        // 0x1123f8: 0xe6000080  swc1        $f0, 0x80($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123f4) {
            ctx->pc = 0x112404u;
            goto label_112404;
        }
    }
    ctx->pc = 0x1123FCu;
label_1123fc:
    // 0x1123fc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1123fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_112400:
    // 0x112400: 0x261100d8  addiu       $s1, $s0, 0xD8
    ctx->pc = 0x112400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_112404:
    // 0x112404: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x112404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_112408:
    // 0x112408: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_11240c:
    if (ctx->pc == 0x11240Cu) {
        ctx->pc = 0x11240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112408u;
        // 0x11240c: 0xae0000bc  sw          $zero, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112410u;
        goto label_112410;
    }
    ctx->pc = 0x112408u;
    {
        const bool branch_taken_0x112408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112408) {
            ctx->pc = 0x11240Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112408u;
            // 0x11240c: 0xae0000bc  sw          $zero, 0xBC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1124B8u;
            goto label_1124b8;
        }
    }
    ctx->pc = 0x112410u;
label_112410:
    // 0x112410: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x112410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_112414:
    // 0x112414: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x112414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_112418:
    // 0x112418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11241c:
    // 0x11241c: 0xc60c00a8  lwc1        $f12, 0xA8($s0)
    ctx->pc = 0x11241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_112420:
    // 0x112420: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x112420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_112424:
    // 0x112424: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x112424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_112428:
    // 0x112428: 0xc0446c6  jal         func_111B18
label_11242c:
    if (ctx->pc == 0x11242Cu) {
        ctx->pc = 0x11242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112428u;
        // 0x11242c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112430u;
        goto label_112430;
    }
    ctx->pc = 0x112428u;
    SET_GPR_U32(ctx, 31, 0x112430u);
    ctx->pc = 0x11242Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112428u;
    // 0x11242c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111B18u, 0x112428u, 0x112430u)) {
        return;
    }
    ctx->pc = 0x112430u;
label_112430:
    // 0x112430: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x112430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_112434:
    // 0x112434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112438:
    // 0x112438: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x112438u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_11243c:
    // 0x11243c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11243cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_112440:
    // 0x112440: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x112440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_112444:
    // 0x112444: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x112444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_112448:
    // 0x112448: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x112448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_11244c:
    // 0x11244c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x11244cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_112450:
    // 0x112450: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x112450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_112454:
    // 0x112454: 0x40f809  jalr        $v0
label_112458:
    if (ctx->pc == 0x112458u) {
        ctx->pc = 0x112458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112454u;
        // 0x112458: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11245Cu;
        goto label_11245c;
    }
    ctx->pc = 0x112454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11245Cu);
        ctx->pc = 0x112458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112454u;
        // 0x112458: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112454u, 0x11245Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11245Cu;
label_11245c:
    // 0x11245c: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x11245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_112460:
    // 0x112460: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x112460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_112464:
    // 0x112464: 0x0  nop
    ctx->pc = 0x112464u;
    // NOP
label_112468:
    // 0x112468: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_11246c:
    if (ctx->pc == 0x11246Cu) {
        ctx->pc = 0x11246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112468u;
        // 0x11246c: 0xae0000bc  sw          $zero, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112470u;
        goto label_112470;
    }
    ctx->pc = 0x112468u;
    {
        const bool branch_taken_0x112468 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x112468) {
            ctx->pc = 0x11246Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112468u;
            // 0x11246c: 0xae0000bc  sw          $zero, 0xBC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1124B8u;
            goto label_1124b8;
        }
    }
    ctx->pc = 0x112470u;
label_112470:
    // 0x112470: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x112470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112474:
    // 0x112474: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x112474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_112478:
    // 0x112478: 0x0  nop
    ctx->pc = 0x112478u;
    // NOP
label_11247c:
    // 0x11247c: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_112480:
    if (ctx->pc == 0x112480u) {
        ctx->pc = 0x112480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11247Cu;
        // 0x112480: 0xae0000bc  sw          $zero, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112484u;
        goto label_112484;
    }
    ctx->pc = 0x11247Cu;
    {
        const bool branch_taken_0x11247c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11247c) {
            ctx->pc = 0x112480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11247Cu;
            // 0x112480: 0xae0000bc  sw          $zero, 0xBC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1124B8u;
            goto label_1124b8;
        }
    }
    ctx->pc = 0x112484u;
label_112484:
    // 0x112484: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x112484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_112488:
    // 0x112488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11248c:
    // 0x11248c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_112490:
    // 0x112490: 0xc04f0cc  jal         func_13C330
label_112494:
    if (ctx->pc == 0x112494u) {
        ctx->pc = 0x112494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112490u;
        // 0x112494: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112498u;
        goto label_112498;
    }
    ctx->pc = 0x112490u;
    SET_GPR_U32(ctx, 31, 0x112498u);
    ctx->pc = 0x112494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112490u;
    // 0x112494: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x112490u, 0x112498u)) {
        return;
    }
    ctx->pc = 0x112498u;
label_112498:
    // 0x112498: 0x6a0300d3  ldl         $v1, 0xD3($s0)
    ctx->pc = 0x112498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_11249c:
    // 0x11249c: 0x6e0300cc  ldr         $v1, 0xCC($s0)
    ctx->pc = 0x11249cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1124a0:
    // 0x1124a0: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x1124a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_1124a4:
    // 0x1124a4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1124a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1124a8:
    // 0x1124a8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1124a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1124ac:
    // 0x1124ac: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1124acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_1124b0:
    // 0x1124b0: 0xe61400bc  swc1        $f20, 0xBC($s0)
    ctx->pc = 0x1124b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_1124b4:
    // 0x1124b4: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x1124b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_1124b8:
    // 0x1124b8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1124b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1124bc:
    // 0x1124bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1124bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1124c0:
    // 0x1124c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1124c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1124c4:
    // 0x1124c4: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x1124c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1124c8:
    // 0x1124c8: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1124c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1124cc:
    // 0x1124cc: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1124ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1124d0:
    // 0x1124d0: 0x40f809  jalr        $v0
label_1124d4:
    if (ctx->pc == 0x1124D4u) {
        ctx->pc = 0x1124D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124D0u;
        // 0x1124d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1124D8u;
        goto label_1124d8;
    }
    ctx->pc = 0x1124D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1124D8u);
        ctx->pc = 0x1124D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124D0u;
        // 0x1124d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1124D0u, 0x1124D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1124D8u;
label_1124d8:
    // 0x1124d8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1124d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_1124dc:
    // 0x1124dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1124dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1124e0:
    // 0x1124e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1124e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1124e4:
    // 0x1124e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1124e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1124e8:
    // 0x1124e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1124e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1124ec:
    // 0x1124ec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1124ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1124f0:
    // 0x1124f0: 0x3e00008  jr          $ra
label_1124f4:
    if (ctx->pc == 0x1124F4u) {
        ctx->pc = 0x1124F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124F0u;
        // 0x1124f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1124F8u;
        goto label_fallthrough_0x1124f0;
    }
    ctx->pc = 0x1124F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1124F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124F0u;
        // 0x1124f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1124F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1124f0:
    ctx->pc = 0x1124F8u;
}
