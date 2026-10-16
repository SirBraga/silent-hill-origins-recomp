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

// Function: sub_002F4430
// Address: 0x2f4430 - 0x2f4900
void sub_002F4430_0x2f4430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4430_0x2f4430");
#endif

    switch (ctx->pc) {
        case 0x2f4490u: goto label_2f4490;
        case 0x2f44a8u: goto label_2f44a8;
        case 0x2f44c0u: goto label_2f44c0;
        case 0x2f44d8u: goto label_2f44d8;
        case 0x2f44f4u: goto label_2f44f4;
        case 0x2f4554u: goto label_2f4554;
        case 0x2f45b8u: goto label_2f45b8;
        case 0x2f4618u: goto label_2f4618;
        case 0x2f4664u: goto label_2f4664;
        case 0x2f46e8u: goto label_2f46e8;
        case 0x2f4714u: goto label_2f4714;
        case 0x2f4738u: goto label_2f4738;
        case 0x2f4758u: goto label_2f4758;
        case 0x2f4788u: goto label_2f4788;
        case 0x2f47ecu: goto label_2f47ec;
        case 0x2f483cu: goto label_2f483c;
        case 0x2f4868u: goto label_2f4868;
        case 0x2f4890u: goto label_2f4890;
        default: break;
    }

    ctx->pc = 0x2f4430u;

    // 0x2f4430: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x2f4430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x2f4434: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f4434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4438: 0xffb20430  sd          $s2, 0x430($sp)
    ctx->pc = 0x2f4438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 18));
    // 0x2f443c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f443cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4440: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x2f4440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x2f4444: 0xffb70480  sd          $s7, 0x480($sp)
    ctx->pc = 0x2f4444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 23));
    // 0x2f4448: 0x2e420001  sltiu       $v0, $s2, 0x1
    ctx->pc = 0x2f4448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f444c: 0xffb50460  sd          $s5, 0x460($sp)
    ctx->pc = 0x2f444cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 21));
    // 0x2f4450: 0x3c178101  lui         $s7, 0x8101
    ctx->pc = 0x2f4450u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4454: 0xffb40450  sd          $s4, 0x450($sp)
    ctx->pc = 0x2f4454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 20));
    // 0x2f4458: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f4458u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f445c: 0xffb30440  sd          $s3, 0x440($sp)
    ctx->pc = 0x2f445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 19));
    // 0x2f4460: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f4460u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4464: 0xffb10420  sd          $s1, 0x420($sp)
    ctx->pc = 0x2f4464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 17));
    // 0x2f4468: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2f4468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f446c: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x2f446cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
    // 0x2f4470: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2f4470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4474: 0xffbe0490  sd          $fp, 0x490($sp)
    ctx->pc = 0x2f4474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 30));
    // 0x2f4478: 0x36f7006f  ori         $s7, $s7, 0x6F
    ctx->pc = 0x2f4478u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)111);
    // 0x2f447c: 0xffb60470  sd          $s6, 0x470($sp)
    ctx->pc = 0x2f447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 22));
    // 0x2f4480: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x2f4480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x2f4484: 0xafa20404  sw          $v0, 0x404($sp)
    ctx->pc = 0x2f4484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 2));
    // 0x2f4488: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x2f4488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x2f448c: 0x0  nop
    ctx->pc = 0x2f448cu;
    // NOP
label_2f4490:
    // 0x2f4490: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4494: 0x3c050072  lui         $a1, 0x72
    ctx->pc = 0x2f4494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)114 << 16));
    // 0x2f4498: 0x24a5c880  addiu       $a1, $a1, -0x3780
    ctx->pc = 0x2f4498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953088));
    // 0x2f449c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f449cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f44a0: 0xc0bdb5e  jal         func_2F6D78
    ctx->pc = 0x2F44A0u;
    SET_GPR_U32(ctx, 31, 0x2F44A8u);
    ctx->pc = 0x2F44A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F44A0u;
    // 0x2f44a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D78u, 0x2F44A0u, 0x2F44A8u)) {
        return;
    }
    ctx->pc = 0x2F44A8u;
label_2f44a8:
    // 0x2f44a8: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x2F44A8u;
    {
        const bool branch_taken_0x2f44a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44A8u;
        // 0x2f44ac: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44a8) {
            ctx->pc = 0x2F48C4u;
            goto label_2f48c4;
        }
    }
    ctx->pc = 0x2F44B0u;
    // 0x2f44b0: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f44b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f44b4: 0x2610c880  addiu       $s0, $s0, -0x3780
    ctx->pc = 0x2f44b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953088));
    // 0x2f44b8: 0x3c1e006b  lui         $fp, 0x6B
    ctx->pc = 0x2f44b8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)107 << 16));
    // 0x2f44bc: 0x0  nop
    ctx->pc = 0x2f44bcu;
    // NOP
label_2f44c0:
    // 0x2f44c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2f44c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f44c4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2f44c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2f44c8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2F44C8u;
    {
        const bool branch_taken_0x2f44c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44C8u;
        // 0x2f44cc: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44c8) {
            ctx->pc = 0x2F45A0u;
            goto label_2f45a0;
        }
    }
    ctx->pc = 0x2F44D0u;
    // 0x2f44d0: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F44D0u;
    SET_GPR_U32(ctx, 31, 0x2F44D8u);
    ctx->pc = 0x2F44D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F44D0u;
    // 0x2f44d4: 0x27c50140  addiu       $a1, $fp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F44D0u, 0x2F44D8u)) {
        return;
    }
    ctx->pc = 0x2F44D8u;
label_2f44d8:
    // 0x2f44d8: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F44D8u;
    {
        const bool branch_taken_0x2f44d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f44d8) {
            ctx->pc = 0x2F44DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F44D8u;
            // 0x2f44dc: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F458Cu;
            goto label_2f458c;
        }
    }
    ctx->pc = 0x2F44E0u;
    // 0x2f44e0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2f44e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2f44e4: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x2f44e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2f44e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F44E8u;
    {
        const bool branch_taken_0x2f44e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44E8u;
        // 0x2f44ec: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44e8) {
            ctx->pc = 0x2F4550u;
            goto label_2f4550;
        }
    }
    ctx->pc = 0x2F44F0u;
    // 0x2f44f0: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x2f44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_2f44f4:
    // 0x2f44f4: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2f44f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f44f8: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2f44f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f44fc: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2f44fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f4500: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2f4500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f4504: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x2f4504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f4508: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x2f4508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f450c: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2f450cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f4510: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2f4510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f4514: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2f4514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4518: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2f4518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f451c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2f451cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4520: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2f4520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4524: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2f4524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4528: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2f4528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f452c: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2f452cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4530: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2f4530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4534: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f4534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f4538: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2f4538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2f453c: 0x0  nop
    ctx->pc = 0x2f453cu;
    // NOP
    // 0x2f4540: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F4540u;
    {
        const bool branch_taken_0x2f4540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4540) {
            ctx->pc = 0x2F44F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f44f4;
        }
    }
    ctx->pc = 0x2F4548u;
    // 0x2f4548: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F4548u;
    {
        const bool branch_taken_0x2f4548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4548u;
        // 0x2f454c: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4548) {
            ctx->pc = 0x2F458Cu;
            goto label_2f458c;
        }
    }
    ctx->pc = 0x2F4550u;
label_2f4550:
    // 0x2f4550: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x2f4550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_2f4554:
    // 0x2f4554: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x2f4554u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f4558: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x2f4558u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f455c: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x2f455cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f4560: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x2f4560u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2f4564: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x2f4564u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x2f4568: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x2f4568u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x2f456c: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x2f456cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x2f4570: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x2f4570u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x2f4574: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f4574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f4578: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2f4578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2f457c: 0x0  nop
    ctx->pc = 0x2f457cu;
    // NOP
    // 0x2f4580: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F4580u;
    {
        const bool branch_taken_0x2f4580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4580) {
            ctx->pc = 0x2F4554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4554;
        }
    }
    ctx->pc = 0x2F4588u;
    // 0x2f4588: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2f4588u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2f458c:
    // 0x2f458c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2f458cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2f4590: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4590u;
    {
        const bool branch_taken_0x2f4590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4590) {
            ctx->pc = 0x2F4594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4590u;
            // 0x2f4594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F45A4u;
            goto label_2f45a4;
        }
    }
    ctx->pc = 0x2F4598u;
    // 0x2f4598: 0x1660003c  bnez        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x2F4598u;
    {
        const bool branch_taken_0x2f4598 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4598u;
        // 0x2f459c: 0x8fa80400  lw          $t0, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4598) {
            ctx->pc = 0x2F468Cu;
            goto label_2f468c;
        }
    }
    ctx->pc = 0x2F45A0u;
label_2f45a0:
    // 0x2f45a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f45a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f45a4:
    // 0x2f45a4: 0x2a41025  or          $v0, $s5, $a0
    ctx->pc = 0x2f45a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 4));
    // 0x2f45a8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f45a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f45ac: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F45ACu;
    {
        const bool branch_taken_0x2f45ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45ACu;
        // 0x2f45b0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45ac) {
            ctx->pc = 0x2F4614u;
            goto label_2f4614;
        }
    }
    ctx->pc = 0x2F45B4u;
    // 0x2f45b4: 0x26a20200  addiu       $v0, $s5, 0x200
    ctx->pc = 0x2f45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 512));
label_2f45b8:
    // 0x2f45b8: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x2f45b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f45bc: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x2f45bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f45c0: 0x6869000f  ldl         $t1, 0xF($v1)
    ctx->pc = 0x2f45c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2f45c4: 0x6c690008  ldr         $t1, 0x8($v1)
    ctx->pc = 0x2f45c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2f45c8: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x2f45c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f45cc: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x2f45ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f45d0: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x2f45d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f45d4: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x2f45d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f45d8: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x2f45d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f45dc: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x2f45dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f45e0: 0xb089000f  sdl         $t1, 0xF($a0)
    ctx->pc = 0x2f45e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f45e4: 0xb4890008  sdr         $t1, 0x8($a0)
    ctx->pc = 0x2f45e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f45e8: 0xb0850017  sdl         $a1, 0x17($a0)
    ctx->pc = 0x2f45e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f45ec: 0xb4850010  sdr         $a1, 0x10($a0)
    ctx->pc = 0x2f45ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f45f0: 0xb086001f  sdl         $a2, 0x1F($a0)
    ctx->pc = 0x2f45f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f45f4: 0xb4860018  sdr         $a2, 0x18($a0)
    ctx->pc = 0x2f45f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f45f8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f45fc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2f45fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2f4600: 0x0  nop
    ctx->pc = 0x2f4600u;
    // NOP
    // 0x2f4604: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F4604u;
    {
        const bool branch_taken_0x2f4604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4604) {
            ctx->pc = 0x2F45B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f45b8;
        }
    }
    ctx->pc = 0x2F460Cu;
    // 0x2f460c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F460Cu;
    {
        const bool branch_taken_0x2f460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F460Cu;
        // 0x2f4610: 0x3c060072  lui         $a2, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f460c) {
            ctx->pc = 0x2F4650u;
            goto label_2f4650;
        }
    }
    ctx->pc = 0x2F4614u;
label_2f4614:
    // 0x2f4614: 0x26a20200  addiu       $v0, $s5, 0x200
    ctx->pc = 0x2f4614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 512));
label_2f4618:
    // 0x2f4618: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x2f4618u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f461c: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x2f461cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f4620: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x2f4620u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f4624: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x2f4624u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2f4628: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x2f4628u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x2f462c: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x2f462cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x2f4630: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x2f4630u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x2f4634: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x2f4634u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x2f4638: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f4638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f463c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2f463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2f4640: 0x0  nop
    ctx->pc = 0x2f4640u;
    // NOP
    // 0x2f4644: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F4644u;
    {
        const bool branch_taken_0x2f4644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4644) {
            ctx->pc = 0x2F4618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4618;
        }
    }
    ctx->pc = 0x2F464Cu;
    // 0x2f464c: 0x3c060072  lui         $a2, 0x72
    ctx->pc = 0x2f464cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)114 << 16));
label_2f4650:
    // 0x2f4650: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4654: 0x24c5c880  addiu       $a1, $a2, -0x3780
    ctx->pc = 0x2f4654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953088));
    // 0x2f4658: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f4658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f465c: 0xc0bdb66  jal         func_2F6D98
    ctx->pc = 0x2F465Cu;
    SET_GPR_U32(ctx, 31, 0x2F4664u);
    ctx->pc = 0x2F4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F465Cu;
    // 0x2f4660: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D98u, 0x2F465Cu, 0x2F4664u)) {
        return;
    }
    ctx->pc = 0x2F4664u;
label_2f4664:
    // 0x2f4664: 0x50400098  beql        $v0, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x2F4664u;
    {
        const bool branch_taken_0x2f4664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4664) {
            ctx->pc = 0x2F4668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4664u;
            // 0x2f4668: 0xae370000  sw          $s7, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F48C8u;
            goto label_2f48c8;
        }
    }
    ctx->pc = 0x2F466Cu;
    // 0x2f466c: 0x5660008b  bnel        $s3, $zero, . + 4 + (0x8B << 2)
    ctx->pc = 0x2F466Cu;
    {
        const bool branch_taken_0x2f466c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f466c) {
            ctx->pc = 0x2F4670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F466Cu;
            // 0x2f4670: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F489Cu;
            goto label_2f489c;
        }
    }
    ctx->pc = 0x2F4674u;
    // 0x2f4674: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x2f4674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2f4678: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f4678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f467c: 0x10c7008c  beq         $a2, $a3, . + 4 + (0x8C << 2)
    ctx->pc = 0x2F467Cu;
    {
        const bool branch_taken_0x2f467c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2F4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F467Cu;
        // 0x2f4680: 0x8fa70214  lw          $a3, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f467c) {
            ctx->pc = 0x2F48B0u;
            goto label_2f48b0;
        }
    }
    ctx->pc = 0x2F4684u;
    // 0x2f4684: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2F4684u;
    {
        const bool branch_taken_0x2f4684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4684u;
        // 0x2f4688: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4684) {
            ctx->pc = 0x2F4860u;
            goto label_2f4860;
        }
    }
    ctx->pc = 0x2F468Cu;
label_2f468c:
    // 0x2f468c: 0x13102a  slt         $v0, $zero, $s3
    ctx->pc = 0x2f468cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2f4690: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f4690u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2f4694: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x2f4694u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2f4698: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2f4698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2f469c: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x2f469cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x2f46a0: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x2f46a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f46a4: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x2F46A4u;
    {
        const bool branch_taken_0x2f46a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46A4u;
        // 0x2f46a8: 0xafa80400  sw          $t0, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46a4) {
            ctx->pc = 0x2F44C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f44c0;
        }
    }
    ctx->pc = 0x2F46ACu;
    // 0x2f46ac: 0x8fa90404  lw          $t1, 0x404($sp)
    ctx->pc = 0x2f46acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
    // 0x2f46b0: 0x15200009  bnez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F46B0u;
    {
        const bool branch_taken_0x2f46b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46B0u;
        // 0x2f46b4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46b0) {
            ctx->pc = 0x2F46D8u;
            goto label_2f46d8;
        }
    }
    ctx->pc = 0x2F46B8u;
    // 0x2f46b8: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x2f46b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2f46bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F46BCu;
    {
        const bool branch_taken_0x2f46bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46BCu;
        // 0x2f46c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46bc) {
            ctx->pc = 0x2F46DCu;
            goto label_2f46dc;
        }
    }
    ctx->pc = 0x2F46C4u;
    // 0x2f46c4: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f46c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f46cc: 0x34630017  ori         $v1, $v1, 0x17
    ctx->pc = 0x2f46ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23);
    // 0x2f46d0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2F46D0u;
    {
        const bool branch_taken_0x2f46d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46D0u;
        // 0x2f46d4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46d0) {
            ctx->pc = 0x2F48CCu;
            goto label_2f48cc;
        }
    }
    ctx->pc = 0x2F46D8u;
label_2f46d8:
    // 0x2f46d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f46d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f46dc:
    // 0x2f46dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f46dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f46e0: 0xc0bc95c  jal         func_2F2570
    ctx->pc = 0x2F46E0u;
    SET_GPR_U32(ctx, 31, 0x2F46E8u);
    ctx->pc = 0x2F46E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F46E0u;
    // 0x2f46e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2570u, 0x2F46E0u, 0x2F46E8u)) {
        return;
    }
    ctx->pc = 0x2F46E8u;
label_2f46e8:
    // 0x2f46e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f46e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f46ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f46ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f46f0: 0x14600076  bnez        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x2F46F0u;
    {
        const bool branch_taken_0x2f46f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F46F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46F0u;
        // 0x2f46f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46f0) {
            ctx->pc = 0x2F48CCu;
            goto label_2f48cc;
        }
    }
    ctx->pc = 0x2F46F8u;
    // 0x2f46f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f46fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f46fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f4700: 0x16420068  bne         $s2, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2F4700u;
    {
        const bool branch_taken_0x2f4700 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4700u;
        // 0x2f4704: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4700) {
            ctx->pc = 0x2F48A4u;
            goto label_2f48a4;
        }
    }
    ctx->pc = 0x2F4708u;
    // 0x2f4708: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f470c: 0xc0bc9d4  jal         func_2F2750
    ctx->pc = 0x2F470Cu;
    SET_GPR_U32(ctx, 31, 0x2F4714u);
    ctx->pc = 0x2F4710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F470Cu;
    // 0x2f4710: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2750u, 0x2F470Cu, 0x2F4714u)) {
        return;
    }
    ctx->pc = 0x2F4714u;
label_2f4714:
    // 0x2f4714: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f4714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4718: 0x1460006b  bnez        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2F4718u;
    {
        const bool branch_taken_0x2f4718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4718u;
        // 0x2f471c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4718) {
            ctx->pc = 0x2F48C8u;
            goto label_2f48c8;
        }
    }
    ctx->pc = 0x2F4720u;
    // 0x2f4720: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2f4720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2f4724: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4728: 0x2463025  or          $a2, $s2, $a2
    ctx->pc = 0x2f4728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | GPR_U64(ctx, 6));
    // 0x2f472c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4730: 0xc0bc988  jal         func_2F2620
    ctx->pc = 0x2F4730u;
    SET_GPR_U32(ctx, 31, 0x2F4738u);
    ctx->pc = 0x2F4734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4730u;
    // 0x2f4734: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2620u, 0x2F4730u, 0x2F4738u)) {
        return;
    }
    ctx->pc = 0x2F4738u;
label_2f4738:
    // 0x2f4738: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f4738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f473c: 0x14600063  bnez        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2F473Cu;
    {
        const bool branch_taken_0x2f473c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F473Cu;
        // 0x2f4740: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f473c) {
            ctx->pc = 0x2F48CCu;
            goto label_2f48cc;
        }
    }
    ctx->pc = 0x2F4744u;
    // 0x2f4744: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4748: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f4748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f474c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f474cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4750: 0xc0bc988  jal         func_2F2620
    ctx->pc = 0x2F4750u;
    SET_GPR_U32(ctx, 31, 0x2F4758u);
    ctx->pc = 0x2F4754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4750u;
    // 0x2f4754: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2620u, 0x2F4750u, 0x2F4758u)) {
        return;
    }
    ctx->pc = 0x2F4758u;
label_2f4758:
    // 0x2f4758: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f4758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f475c: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F475Cu;
    {
        const bool branch_taken_0x2f475c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F475Cu;
        // 0x2f4760: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f475c) {
            ctx->pc = 0x2F48CCu;
            goto label_2f48cc;
        }
    }
    ctx->pc = 0x2F4764u;
    // 0x2f4764: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f4764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f4768: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2f4768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f476c: 0x2450c880  addiu       $s0, $v0, -0x3780
    ctx->pc = 0x2f476cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
    // 0x2f4770: 0xb01025  or          $v0, $a1, $s0
    ctx->pc = 0x2f4770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x2f4774: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f4774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f4778: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F4778u;
    {
        const bool branch_taken_0x2f4778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4778u;
        // 0x2f477c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4778) {
            ctx->pc = 0x2F47E4u;
            goto label_2f47e4;
        }
    }
    ctx->pc = 0x2F4780u;
    // 0x2f4780: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x2f4780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x2f4784: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x2f4784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_2f4788:
    // 0x2f4788: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x2f4788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f478c: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x2f478cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f4790: 0x68a7000f  ldl         $a3, 0xF($a1)
    ctx->pc = 0x2f4790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f4794: 0x6ca70008  ldr         $a3, 0x8($a1)
    ctx->pc = 0x2f4794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f4798: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x2f4798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f479c: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x2f479cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f47a0: 0x68a9001f  ldl         $t1, 0x1F($a1)
    ctx->pc = 0x2f47a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2f47a4: 0x6ca90018  ldr         $t1, 0x18($a1)
    ctx->pc = 0x2f47a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2f47a8: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x2f47a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f47ac: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x2f47acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f47b0: 0xb0c7000f  sdl         $a3, 0xF($a2)
    ctx->pc = 0x2f47b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f47b4: 0xb4c70008  sdr         $a3, 0x8($a2)
    ctx->pc = 0x2f47b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f47b8: 0xb0c80017  sdl         $t0, 0x17($a2)
    ctx->pc = 0x2f47b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f47bc: 0xb4c80010  sdr         $t0, 0x10($a2)
    ctx->pc = 0x2f47bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f47c0: 0xb0c9001f  sdl         $t1, 0x1F($a2)
    ctx->pc = 0x2f47c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f47c4: 0xb4c90018  sdr         $t1, 0x18($a2)
    ctx->pc = 0x2f47c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f47c8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2f47c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f47cc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f47ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f47d0: 0x0  nop
    ctx->pc = 0x2f47d0u;
    // NOP
    // 0x2f47d4: 0x14a3ffec  bne         $a1, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F47D4u;
    {
        const bool branch_taken_0x2f47d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f47d4) {
            ctx->pc = 0x2F4788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4788;
        }
    }
    ctx->pc = 0x2F47DCu;
    // 0x2f47dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F47DCu;
    {
        const bool branch_taken_0x2f47dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47DCu;
        // 0x2f47e0: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47dc) {
            ctx->pc = 0x2F4824u;
            goto label_2f4824;
        }
    }
    ctx->pc = 0x2F47E4u;
label_2f47e4:
    // 0x2f47e4: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x2f47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x2f47e8: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x2f47e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_2f47ec:
    // 0x2f47ec: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2f47ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f47f0: 0xdca70008  ld          $a3, 0x8($a1)
    ctx->pc = 0x2f47f0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f47f4: 0xdca80010  ld          $t0, 0x10($a1)
    ctx->pc = 0x2f47f4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2f47f8: 0xdca90018  ld          $t1, 0x18($a1)
    ctx->pc = 0x2f47f8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2f47fc: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2f47fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2f4800: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x2f4800u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x2f4804: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x2f4804u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
    // 0x2f4808: 0xfcc90018  sd          $t1, 0x18($a2)
    ctx->pc = 0x2f4808u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 9));
    // 0x2f480c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2f480cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f4810: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f4810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f4814: 0x0  nop
    ctx->pc = 0x2f4814u;
    // NOP
    // 0x2f4818: 0x14a3fff4  bne         $a1, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F4818u;
    {
        const bool branch_taken_0x2f4818 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f4818) {
            ctx->pc = 0x2F47ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f47ec;
        }
    }
    ctx->pc = 0x2F4820u;
    // 0x2f4820: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2f4820u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_2f4824:
    // 0x2f4824: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f4824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4828: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f4828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f482c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f482cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4830: 0x2445c880  addiu       $a1, $v0, -0x3780
    ctx->pc = 0x2f4830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
    // 0x2f4834: 0xc0bdb66  jal         func_2F6D98
    ctx->pc = 0x2F4834u;
    SET_GPR_U32(ctx, 31, 0x2F483Cu);
    ctx->pc = 0x2F4838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4834u;
    // 0x2f4838: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D98u, 0x2F4834u, 0x2F483Cu)) {
        return;
    }
    ctx->pc = 0x2F483Cu;
label_2f483c:
    // 0x2f483c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F483Cu;
    {
        const bool branch_taken_0x2f483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F483Cu;
        // 0x2f4840: 0x8fa60210  lw          $a2, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f483c) {
            ctx->pc = 0x2F48C4u;
            goto label_2f48c4;
        }
    }
    ctx->pc = 0x2F4844u;
    // 0x2f4844: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f4844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4848: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4848u;
    {
        const bool branch_taken_0x2f4848 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4848u;
        // 0x2f484c: 0x8fa70214  lw          $a3, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4848) {
            ctx->pc = 0x2F485Cu;
            goto label_2f485c;
        }
    }
    ctx->pc = 0x2F4850u;
    // 0x2f4850: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f4850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4854: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2F4854u;
    {
        const bool branch_taken_0x2f4854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4854u;
        // 0x2f4858: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4854) {
            ctx->pc = 0x2F48CCu;
            goto label_2f48cc;
        }
    }
    ctx->pc = 0x2F485Cu;
label_2f485c:
    // 0x2f485c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f485cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f4860:
    // 0x2f4860: 0xc0bca56  jal         func_2F2958
    ctx->pc = 0x2F4860u;
    SET_GPR_U32(ctx, 31, 0x2F4868u);
    ctx->pc = 0x2F4864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4860u;
    // 0x2f4864: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2958u, 0x2F4860u, 0x2F4868u)) {
        return;
    }
    ctx->pc = 0x2F4868u;
label_2f4868:
    // 0x2f4868: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F4868u;
    {
        const bool branch_taken_0x2f4868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4868u;
        // 0x2f486c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4868) {
            ctx->pc = 0x2F48C8u;
            goto label_2f48c8;
        }
    }
    ctx->pc = 0x2F4870u;
    // 0x2f4870: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2f4870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f4874: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4878: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x2f4878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2f487c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f487cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4880: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4884: 0x8fa70214  lw          $a3, 0x214($sp)
    ctx->pc = 0x2f4884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x2f4888: 0xc0bd056  jal         func_2F4158
    ctx->pc = 0x2F4888u;
    SET_GPR_U32(ctx, 31, 0x2F4890u);
    ctx->pc = 0x2F488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4888u;
    // 0x2f488c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4158u, 0x2F4888u, 0x2F4890u)) {
        return;
    }
    ctx->pc = 0x2F4890u;
label_2f4890:
    // 0x2f4890: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F4890u;
    {
        const bool branch_taken_0x2f4890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4890u;
        // 0x2f4894: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4890) {
            ctx->pc = 0x2F48C8u;
            goto label_2f48c8;
        }
    }
    ctx->pc = 0x2F4898u;
    // 0x2f4898: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f4898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f489c:
    // 0x2f489c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F489Cu;
    {
        const bool branch_taken_0x2f489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F489Cu;
        // 0x2f48a0: 0x8fa20400  lw          $v0, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f489c) {
            ctx->pc = 0x2F48CCu;
            goto label_2f48cc;
        }
    }
    ctx->pc = 0x2F48A4u;
label_2f48a4:
    // 0x2f48a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f48a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f48a8: 0x1000fef9  b           . + 4 + (-0x107 << 2)
    ctx->pc = 0x2F48A8u;
    {
        const bool branch_taken_0x2f48a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48A8u;
        // 0x2f48ac: 0x2429024  and         $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48a8) {
            ctx->pc = 0x2F4490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4490;
        }
    }
    ctx->pc = 0x2F48B0u;
label_2f48b0:
    // 0x2f48b0: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f48b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f48b8: 0x34639002  ori         $v1, $v1, 0x9002
    ctx->pc = 0x2f48b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36866);
    // 0x2f48bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F48BCu;
    {
        const bool branch_taken_0x2f48bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48BCu;
        // 0x2f48c0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48bc) {
            ctx->pc = 0x2F48CCu;
            goto label_2f48cc;
        }
    }
    ctx->pc = 0x2F48C4u;
label_2f48c4:
    // 0x2f48c4: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x2f48c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
label_2f48c8:
    // 0x2f48c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f48cc:
    // 0x2f48cc: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x2f48ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x2f48d0: 0xdfbe0490  ld          $fp, 0x490($sp)
    ctx->pc = 0x2f48d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2f48d4: 0xdfb70480  ld          $s7, 0x480($sp)
    ctx->pc = 0x2f48d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2f48d8: 0xdfb60470  ld          $s6, 0x470($sp)
    ctx->pc = 0x2f48d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2f48dc: 0xdfb50460  ld          $s5, 0x460($sp)
    ctx->pc = 0x2f48dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2f48e0: 0xdfb40450  ld          $s4, 0x450($sp)
    ctx->pc = 0x2f48e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x2f48e4: 0xdfb30440  ld          $s3, 0x440($sp)
    ctx->pc = 0x2f48e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x2f48e8: 0xdfb20430  ld          $s2, 0x430($sp)
    ctx->pc = 0x2f48e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2f48ec: 0xdfb10420  ld          $s1, 0x420($sp)
    ctx->pc = 0x2f48ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2f48f0: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x2f48f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2f48f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F48F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48F4u;
        // 0x2f48f8: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F48F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F48FCu;
    // 0x2f48fc: 0x0  nop
    ctx->pc = 0x2f48fcu;
    // NOP
    ctx->pc = 0x2f4900u;
}
