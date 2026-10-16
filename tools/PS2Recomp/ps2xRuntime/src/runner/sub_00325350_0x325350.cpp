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

// Function: sub_00325350
// Address: 0x325350 - 0x325428
void sub_00325350_0x325350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325350_0x325350");
#endif

    switch (ctx->pc) {
        case 0x325358u: goto label_325358;
        case 0x3253a0u: goto label_3253a0;
        case 0x3253a4u: goto label_3253a4;
        case 0x3253dcu: goto label_3253dc;
        case 0x325414u: goto label_325414;
        default: break;
    }

    ctx->pc = 0x325350u;

    // 0x325350: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x325350u;
    {
        const bool branch_taken_0x325350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325350u;
        // 0x325354: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325350) {
            ctx->pc = 0x3253A4u;
            goto label_3253a4;
        }
    }
    ctx->pc = 0x325358u;
label_325358:
    // 0x325358: 0x8a070017  lwl         $a3, 0x17($s0)
    ctx->pc = 0x325358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x32535c: 0x9a070014  lwr         $a3, 0x14($s0)
    ctx->pc = 0x32535cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x325360: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x325360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x325364: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x325364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x325368: 0x8a04001b  lwl         $a0, 0x1B($s0)
    ctx->pc = 0x325368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x32536c: 0x9a040018  lwr         $a0, 0x18($s0)
    ctx->pc = 0x32536cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x325370: 0xaba40017  swl         $a0, 0x17($sp)
    ctx->pc = 0x325370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x325374: 0xbba40014  swr         $a0, 0x14($sp)
    ctx->pc = 0x325374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x325378: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x325378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x32537c: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x32537cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x325380: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x325380u;
    {
        const bool branch_taken_0x325380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325380u;
        // 0x325384: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325380) {
            ctx->pc = 0x325398u;
            goto label_325398;
        }
    }
    ctx->pc = 0x325388u;
    // 0x325388: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x325388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x32538c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x32538cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x325390: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x325390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x325394: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x325394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_325398:
    // 0x325398: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x325398u;
    SET_GPR_U32(ctx, 31, 0x3253A0u);
    ctx->pc = 0x32539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325398u;
    // 0x32539c: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x325398u, 0x3253A0u)) {
        return;
    }
    ctx->pc = 0x3253A0u;
label_3253a0:
    // 0x3253a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3253a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3253a4:
    // 0x3253a4: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3253A4u;
    {
        const bool branch_taken_0x3253a4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3253A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253A4u;
        // 0x3253a8: 0x3c070068  lui         $a3, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3253a4) {
            ctx->pc = 0x32540Cu;
            goto label_32540c;
        }
    }
    ctx->pc = 0x3253ACu;
    // 0x3253ac: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3253acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3253b0: 0x8ce37558  lw          $v1, 0x7558($a3)
    ctx->pc = 0x3253b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 30040)));
    // 0x3253b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3253b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253b8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3253b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3253bc: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3253BCu;
    {
        const bool branch_taken_0x3253bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3253C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253BCu;
        // 0x3253c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3253bc) {
            ctx->pc = 0x3253D8u;
            goto label_3253d8;
        }
    }
    ctx->pc = 0x3253C4u;
    // 0x3253c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3253c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3253c8: 0xace27558  sw          $v0, 0x7558($a3)
    ctx->pc = 0x3253c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 30040), GPR_U32(ctx, 2));
    // 0x3253cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3253CCu;
    {
        const bool branch_taken_0x3253cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3253D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253CCu;
        // 0x3253d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3253cc) {
            ctx->pc = 0x325418u;
            goto label_325418;
        }
    }
    ctx->pc = 0x3253D4u;
    // 0x3253d4: 0x0  nop
    ctx->pc = 0x3253d4u;
    // NOP
label_3253d8:
    // 0x3253d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3253d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3253dc:
    // 0x3253dc: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3253dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3253e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3253E0u;
    {
        const bool branch_taken_0x3253e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3253E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253E0u;
        // 0x3253e4: 0x24e27558  addiu       $v0, $a3, 0x7558 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3253e0) {
            ctx->pc = 0x325414u;
            goto label_325414;
        }
    }
    ctx->pc = 0x3253E8u;
    // 0x3253e8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3253e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3253ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3253ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3253f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3253f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3253f4: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3253F4u;
    {
        const bool branch_taken_0x3253f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3253F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253F4u;
        // 0x3253f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3253f4) {
            ctx->pc = 0x3253DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3253dc;
        }
    }
    ctx->pc = 0x3253FCu;
    // 0x3253fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3253fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x325400: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x325400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x325404: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x325404u;
    {
        const bool branch_taken_0x325404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325404u;
        // 0x325408: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325404) {
            ctx->pc = 0x325418u;
            goto label_325418;
        }
    }
    ctx->pc = 0x32540Cu;
label_32540c:
    // 0x32540c: 0xc0c84d4  jal         func_321350
    ctx->pc = 0x32540Cu;
    SET_GPR_U32(ctx, 31, 0x325414u);
    ctx->pc = 0x321350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321350u, 0x32540Cu, 0x325414u)) {
        return;
    }
    ctx->pc = 0x325414u;
label_325414:
    // 0x325414: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x325414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_325418:
    // 0x325418: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x325418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32541c: 0x3e00008  jr          $ra
    ctx->pc = 0x32541Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32541Cu;
        // 0x325420: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32541Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325424u;
    // 0x325424: 0x0  nop
    ctx->pc = 0x325424u;
    // NOP
    ctx->pc = 0x325428u;
}
