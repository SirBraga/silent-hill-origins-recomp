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

// Function: sub_00154530
// Address: 0x154530 - 0x154758
void sub_00154530_0x154530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154530_0x154530");
#endif

    switch (ctx->pc) {
        case 0x154554u: goto label_154554;
        case 0x1545b8u: goto label_1545b8;
        case 0x1545c8u: goto label_1545c8;
        case 0x1545e8u: goto label_1545e8;
        case 0x1545f8u: goto label_1545f8;
        case 0x154608u: goto label_154608;
        case 0x154618u: goto label_154618;
        case 0x154628u: goto label_154628;
        case 0x154638u: goto label_154638;
        case 0x154678u: goto label_154678;
        case 0x15468cu: goto label_15468c;
        case 0x1546a8u: goto label_1546a8;
        case 0x1546bcu: goto label_1546bc;
        case 0x1546d8u: goto label_1546d8;
        case 0x1546ecu: goto label_1546ec;
        case 0x154708u: goto label_154708;
        case 0x15471cu: goto label_15471c;
        case 0x154728u: goto label_154728;
        case 0x154730u: goto label_154730;
        default: break;
    }

    ctx->pc = 0x154530u;

    // 0x154530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x154530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x154534: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x154534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x154538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x154538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15453c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15453cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x154540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154544: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x154544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x154548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15454c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x15454Cu;
    SET_GPR_U32(ctx, 31, 0x154554u);
    ctx->pc = 0x154550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15454Cu;
    // 0x154550: 0x26130038  addiu       $s3, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x15454Cu, 0x154554u)) {
        return;
    }
    ctx->pc = 0x154554u;
label_154554:
    // 0x154554: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x154554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x154558: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x154558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x15455c: 0x24632978  addiu       $v1, $v1, 0x2978
    ctx->pc = 0x15455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10616));
    // 0x154560: 0x24422998  addiu       $v0, $v0, 0x2998
    ctx->pc = 0x154560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10648));
    // 0x154564: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x154564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x154568: 0x260400e4  addiu       $a0, $s0, 0xE4
    ctx->pc = 0x154568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    // 0x15456c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x15456cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x154570: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x154570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154574: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x154574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x154578: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x154578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15457c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x15457cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x154580: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x154580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x154584: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x154584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x154588: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x154588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x15458c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x15458cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x154590: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x154590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x154594: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x154594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x154598: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x154598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x15459c: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x15459cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x1545a0: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1545a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1545a4: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1545a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1545a8: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1545a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1545ac: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1545acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1545b0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1545B0u;
    SET_GPR_U32(ctx, 31, 0x1545B8u);
    ctx->pc = 0x1545B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1545B0u;
    // 0x1545b4: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1545B0u, 0x1545B8u)) {
        return;
    }
    ctx->pc = 0x1545B8u;
label_1545b8:
    // 0x1545b8: 0x260400e8  addiu       $a0, $s0, 0xE8
    ctx->pc = 0x1545b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    // 0x1545bc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1545bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1545c0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1545C0u;
    SET_GPR_U32(ctx, 31, 0x1545C8u);
    ctx->pc = 0x1545C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1545C0u;
    // 0x1545c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1545C0u, 0x1545C8u)) {
        return;
    }
    ctx->pc = 0x1545C8u;
label_1545c8:
    // 0x1545c8: 0x8a0200e7  lwl         $v0, 0xE7($s0)
    ctx->pc = 0x1545c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 231); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1545cc: 0x9a0200e4  lwr         $v0, 0xE4($s0)
    ctx->pc = 0x1545ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 228); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1545d0: 0xaa0200ef  swl         $v0, 0xEF($s0)
    ctx->pc = 0x1545d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 239); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1545d4: 0xba0200ec  swr         $v0, 0xEC($s0)
    ctx->pc = 0x1545d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 236); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1545d8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1545d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1545dc: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x1545dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x1545e0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1545E0u;
    SET_GPR_U32(ctx, 31, 0x1545E8u);
    ctx->pc = 0x1545E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1545E0u;
    // 0x1545e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1545E0u, 0x1545E8u)) {
        return;
    }
    ctx->pc = 0x1545E8u;
label_1545e8:
    // 0x1545e8: 0x26040088  addiu       $a0, $s0, 0x88
    ctx->pc = 0x1545e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x1545ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1545ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545f0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1545F0u;
    SET_GPR_U32(ctx, 31, 0x1545F8u);
    ctx->pc = 0x1545F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1545F0u;
    // 0x1545f4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1545F0u, 0x1545F8u)) {
        return;
    }
    ctx->pc = 0x1545F8u;
label_1545f8:
    // 0x1545f8: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x1545f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x1545fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1545fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154600: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x154600u;
    SET_GPR_U32(ctx, 31, 0x154608u);
    ctx->pc = 0x154604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154600u;
    // 0x154604: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x154600u, 0x154608u)) {
        return;
    }
    ctx->pc = 0x154608u;
label_154608:
    // 0x154608: 0x260400b4  addiu       $a0, $s0, 0xB4
    ctx->pc = 0x154608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x15460c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15460cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154610: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x154610u;
    SET_GPR_U32(ctx, 31, 0x154618u);
    ctx->pc = 0x154614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154610u;
    // 0x154614: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x154610u, 0x154618u)) {
        return;
    }
    ctx->pc = 0x154618u;
label_154618:
    // 0x154618: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x154618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x15461c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15461cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154620: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x154620u;
    SET_GPR_U32(ctx, 31, 0x154628u);
    ctx->pc = 0x154624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154620u;
    // 0x154624: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x154620u, 0x154628u)) {
        return;
    }
    ctx->pc = 0x154628u;
label_154628:
    // 0x154628: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x154628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x15462c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15462cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154630: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x154630u;
    SET_GPR_U32(ctx, 31, 0x154638u);
    ctx->pc = 0x154634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154630u;
    // 0x154634: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x154630u, 0x154638u)) {
        return;
    }
    ctx->pc = 0x154638u;
label_154638:
    // 0x154638: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x154638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
    // 0x15463c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x15463cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x154640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x154640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154644: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x154644u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x154648: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x154648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x15464c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15464cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154650: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x154650u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x154654: 0x265228e0  addiu       $s2, $s2, 0x28E0
    ctx->pc = 0x154654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 10464));
    // 0x154658: 0x263146d0  addiu       $s1, $s1, 0x46D0
    ctx->pc = 0x154658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18128));
    // 0x15465c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x15465cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x154660: 0xe60000cc  swc1        $f0, 0xCC($s0)
    ctx->pc = 0x154660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x154664: 0xe60100f4  swc1        $f1, 0xF4($s0)
    ctx->pc = 0x154664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x154668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15466c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15466cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154670: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x154670u;
    SET_GPR_U32(ctx, 31, 0x154678u);
    ctx->pc = 0x154674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154670u;
    // 0x154674: 0x24a528c0  addiu       $a1, $a1, 0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x154670u, 0x154678u)) {
        return;
    }
    ctx->pc = 0x154678u;
label_154678:
    // 0x154678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15467c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x15467cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x154680: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x154680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154684: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x154684u;
    SET_GPR_U32(ctx, 31, 0x15468Cu);
    ctx->pc = 0x154688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154684u;
    // 0x154688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x154684u, 0x15468Cu)) {
        return;
    }
    ctx->pc = 0x15468Cu;
label_15468c:
    // 0x15468c: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x15468cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x154690: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x154690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x154694: 0x263146d8  addiu       $s1, $s1, 0x46D8
    ctx->pc = 0x154694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18136));
    // 0x154698: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15469c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15469cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1546a0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1546A0u;
    SET_GPR_U32(ctx, 31, 0x1546A8u);
    ctx->pc = 0x1546A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1546A0u;
    // 0x1546a4: 0x24a528e8  addiu       $a1, $a1, 0x28E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1546A0u, 0x1546A8u)) {
        return;
    }
    ctx->pc = 0x1546A8u;
label_1546a8:
    // 0x1546a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1546a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1546ac: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1546acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1546b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1546b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1546b4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1546B4u;
    SET_GPR_U32(ctx, 31, 0x1546BCu);
    ctx->pc = 0x1546B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1546B4u;
    // 0x1546b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1546B4u, 0x1546BCu)) {
        return;
    }
    ctx->pc = 0x1546BCu;
label_1546bc:
    // 0x1546bc: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x1546bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x1546c0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1546c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1546c4: 0x263146e0  addiu       $s1, $s1, 0x46E0
    ctx->pc = 0x1546c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18144));
    // 0x1546c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1546c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1546cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1546ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1546d0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1546D0u;
    SET_GPR_U32(ctx, 31, 0x1546D8u);
    ctx->pc = 0x1546D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1546D0u;
    // 0x1546d4: 0x24a52908  addiu       $a1, $a1, 0x2908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1546D0u, 0x1546D8u)) {
        return;
    }
    ctx->pc = 0x1546D8u;
label_1546d8:
    // 0x1546d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1546d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1546dc: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1546dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1546e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1546e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1546e4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1546E4u;
    SET_GPR_U32(ctx, 31, 0x1546ECu);
    ctx->pc = 0x1546E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1546E4u;
    // 0x1546e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1546E4u, 0x1546ECu)) {
        return;
    }
    ctx->pc = 0x1546ECu;
label_1546ec:
    // 0x1546ec: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x1546ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x1546f0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1546f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1546f4: 0x2631f050  addiu       $s1, $s1, -0xFB0
    ctx->pc = 0x1546f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963280));
    // 0x1546f8: 0x24a52928  addiu       $a1, $a1, 0x2928
    ctx->pc = 0x1546f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10536));
    // 0x1546fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1546fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154700: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x154700u;
    SET_GPR_U32(ctx, 31, 0x154708u);
    ctx->pc = 0x154704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154700u;
    // 0x154704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x154700u, 0x154708u)) {
        return;
    }
    ctx->pc = 0x154708u;
label_154708:
    // 0x154708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15470c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x15470cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x154710: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x154710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154714: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x154714u;
    SET_GPR_U32(ctx, 31, 0x15471Cu);
    ctx->pc = 0x154718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154714u;
    // 0x154718: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x154714u, 0x15471Cu)) {
        return;
    }
    ctx->pc = 0x15471Cu;
label_15471c:
    // 0x15471c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15471cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154720: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x154720u;
    SET_GPR_U32(ctx, 31, 0x154728u);
    ctx->pc = 0x154724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154720u;
    // 0x154724: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x154720u, 0x154728u)) {
        return;
    }
    ctx->pc = 0x154728u;
label_154728:
    // 0x154728: 0xc0559e4  jal         func_156790
    ctx->pc = 0x154728u;
    SET_GPR_U32(ctx, 31, 0x154730u);
    ctx->pc = 0x15472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154728u;
    // 0x15472c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156790u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156790u, 0x154728u, 0x154730u)) {
        return;
    }
    ctx->pc = 0x154730u;
label_154730:
    // 0x154730: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x154730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x154734: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x154734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154738: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x154738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15473c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15473cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154744: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x154744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15474c: 0x3e00008  jr          $ra
    ctx->pc = 0x15474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15474Cu;
        // 0x154750: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15474Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154754u;
    // 0x154754: 0x0  nop
    ctx->pc = 0x154754u;
    // NOP
    ctx->pc = 0x154758u;
}
