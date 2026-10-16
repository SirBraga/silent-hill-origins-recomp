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

// Function: sub_002F6578
// Address: 0x2f6578 - 0x2f6690
void sub_002F6578_0x2f6578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6578_0x2f6578");
#endif

    switch (ctx->pc) {
        case 0x2f65a8u: goto label_2f65a8;
        case 0x2f65dcu: goto label_2f65dc;
        case 0x2f6638u: goto label_2f6638;
        default: break;
    }

    ctx->pc = 0x2f6578u;

    // 0x2f6578: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f6578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f657c: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f657cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f6580: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f6580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f6584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f658c: 0x24510cc0  addiu       $s1, $v0, 0xCC0
    ctx->pc = 0x2f658cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3264));
    // 0x2f6590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f6594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f6598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f6598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f659c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f659cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f65a0: 0xc0bde5a  jal         func_2F7968
    ctx->pc = 0x2F65A0u;
    SET_GPR_U32(ctx, 31, 0x2F65A8u);
    ctx->pc = 0x2F65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F65A0u;
    // 0x2f65a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7968u, 0x2F65A0u, 0x2F65A8u)) {
        return;
    }
    ctx->pc = 0x2F65A8u;
label_2f65a8:
    // 0x2f65a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F65A8u;
    {
        const bool branch_taken_0x2f65a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65A8u;
        // 0x2f65ac: 0x24040184  addiu       $a0, $zero, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65a8) {
            ctx->pc = 0x2F65B8u;
            goto label_2f65b8;
        }
    }
    ctx->pc = 0x2F65B0u;
    // 0x2f65b0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2F65B0u;
    {
        const bool branch_taken_0x2f65b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65B0u;
        // 0x2f65b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65b0) {
            ctx->pc = 0x2F6678u;
            goto label_2f6678;
        }
    }
    ctx->pc = 0x2F65B8u;
label_2f65b8:
    // 0x2f65b8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2f65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2f65bc: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2f65bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f65c0: 0x24636340  addiu       $v1, $v1, 0x6340
    ctx->pc = 0x2f65c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25408));
    // 0x2f65c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f65c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f65c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2f65c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f65cc: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x2f65ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2f65d0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f65d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f65d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F65D4u;
    {
        const bool branch_taken_0x2f65d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65D4u;
        // 0x2f65d8: 0x24a20180  addiu       $v0, $a1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65d4) {
            ctx->pc = 0x2F6638u;
            goto label_2f6638;
        }
    }
    ctx->pc = 0x2F65DCu;
label_2f65dc:
    // 0x2f65dc: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x2f65dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f65e0: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x2f65e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f65e4: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x2f65e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f65e8: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x2f65e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f65ec: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x2f65ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f65f0: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x2f65f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f65f4: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x2f65f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f65f8: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x2f65f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f65fc: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x2f65fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6600: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x2f6600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6604: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2f6604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6608: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2f6608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f660c: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2f660cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6610: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2f6610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6614: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2f6614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6618: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2f6618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f661c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2f661cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f6620: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2f6620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2f6624: 0x0  nop
    ctx->pc = 0x2f6624u;
    // NOP
    // 0x2f6628: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F6628u;
    {
        const bool branch_taken_0x2f6628 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6628) {
            ctx->pc = 0x2F65DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f65dc;
        }
    }
    ctx->pc = 0x2F6630u;
    // 0x2f6630: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F6630u;
    {
        const bool branch_taken_0x2f6630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6630) {
            ctx->pc = 0x2F666Cu;
            goto label_2f666c;
        }
    }
    ctx->pc = 0x2F6638u;
label_2f6638:
    // 0x2f6638: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2f6638u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f663c: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x2f663cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f6640: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x2f6640u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2f6644: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x2f6644u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2f6648: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2f6648u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2f664c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x2f664cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2f6650: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x2f6650u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x2f6654: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x2f6654u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x2f6658: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2f6658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f665c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2f665cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2f6660: 0x0  nop
    ctx->pc = 0x2f6660u;
    // NOP
    // 0x2f6664: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F6664u;
    {
        const bool branch_taken_0x2f6664 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6664) {
            ctx->pc = 0x2F6638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6638;
        }
    }
    ctx->pc = 0x2F666Cu;
label_2f666c:
    // 0x2f666c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6670: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2f6670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2f6674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6678:
    // 0x2f6678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f6678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f667c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f667cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6684: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6684u;
        // 0x2f6688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F668Cu;
    // 0x2f668c: 0x0  nop
    ctx->pc = 0x2f668cu;
    // NOP
    ctx->pc = 0x2f6690u;
}
