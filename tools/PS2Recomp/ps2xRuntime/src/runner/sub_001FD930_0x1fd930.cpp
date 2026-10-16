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

// Function: sub_001FD930
// Address: 0x1fd930 - 0x1fdcc0
void sub_001FD930_0x1fd930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD930_0x1fd930");
#endif

    switch (ctx->pc) {
        case 0x1fd974u: goto label_1fd974;
        case 0x1fd998u: goto label_1fd998;
        case 0x1fda08u: goto label_1fda08;
        case 0x1fda80u: goto label_1fda80;
        default: break;
    }

    ctx->pc = 0x1fd930u;

    // 0x1fd930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fd930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fd934: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fd934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fd938: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fd938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fd93c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1fd93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fd940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fd944: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1fd944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd948: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fd948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1fd94c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fd94cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd954: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fd954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fd958: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD958u;
    {
        const bool branch_taken_0x1fd958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD958u;
        // 0x1fd95c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd958) {
            ctx->pc = 0x1FD97Cu;
            goto label_1fd97c;
        }
    }
    ctx->pc = 0x1FD960u;
    // 0x1fd960: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD960u;
    {
        const bool branch_taken_0x1fd960 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD960u;
        // 0x1fd964: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd960) {
            ctx->pc = 0x1FD980u;
            goto label_1fd980;
        }
    }
    ctx->pc = 0x1FD968u;
    // 0x1fd968: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fd968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fd96c: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1FD96Cu;
    SET_GPR_U32(ctx, 31, 0x1FD974u);
    ctx->pc = 0x1FD970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD96Cu;
    // 0x1fd970: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1FD96Cu, 0x1FD974u)) {
        return;
    }
    ctx->pc = 0x1FD974u;
label_1fd974:
    // 0x1fd974: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FD974u;
    {
        const bool branch_taken_0x1fd974 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1FD978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD974u;
        // 0x1fd978: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd974) {
            ctx->pc = 0x1FD9F0u;
            goto label_1fd9f0;
        }
    }
    ctx->pc = 0x1FD97Cu;
label_1fd97c:
    // 0x1fd97c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1fd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1fd980:
    // 0x1fd980: 0x24448290  addiu       $a0, $v0, -0x7D70
    ctx->pc = 0x1fd980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x1fd984: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fd984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fd988: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD988u;
    {
        const bool branch_taken_0x1fd988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd988) {
            ctx->pc = 0x1FD98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD988u;
            // 0x1fd98c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD9A0u;
            goto label_1fd9a0;
        }
    }
    ctx->pc = 0x1FD990u;
    // 0x1fd990: 0xc076936  jal         func_1DA4D8
    ctx->pc = 0x1FD990u;
    SET_GPR_U32(ctx, 31, 0x1FD998u);
    ctx->pc = 0x1FD994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD990u;
    // 0x1fd994: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA4D8u, 0x1FD990u, 0x1FD998u)) {
        return;
    }
    ctx->pc = 0x1FD998u;
label_1fd998:
    // 0x1fd998: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD998u;
    {
        const bool branch_taken_0x1fd998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD998u;
        // 0x1fd99c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd998) {
            ctx->pc = 0x1FD9A4u;
            goto label_1fd9a4;
        }
    }
    ctx->pc = 0x1FD9A0u;
label_1fd9a0:
    // 0x1fd9a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1fd9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1fd9a4:
    // 0x1fd9a4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1fd9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1fd9a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD9A8u;
    {
        const bool branch_taken_0x1fd9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9A8u;
        // 0x1fd9ac: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9a8) {
            ctx->pc = 0x1FD9C0u;
            goto label_1fd9c0;
        }
    }
    ctx->pc = 0x1FD9B0u;
    // 0x1fd9b0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x1fd9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1fd9b4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x1fd9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1fd9b8: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x1fd9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fd9bc: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x1fd9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1fd9c0:
    // 0x1fd9c0: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x1fd9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x1fd9c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fd9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fd9c8: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD9C8u;
    {
        const bool branch_taken_0x1fd9c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd9c8) {
            ctx->pc = 0x1FD9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD9C8u;
            // 0x1fd9cc: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD9E0u;
            goto label_1fd9e0;
        }
    }
    ctx->pc = 0x1FD9D0u;
    // 0x1fd9d0: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x1fd9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x1fd9d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fd9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fd9d8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FD9D8u;
    {
        const bool branch_taken_0x1fd9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9D8u;
        // 0x1fd9dc: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9d8) {
            ctx->pc = 0x1FDA44u;
            goto label_1fda44;
        }
    }
    ctx->pc = 0x1FD9E0u;
label_1fd9e0:
    // 0x1fd9e0: 0x52020018  beql        $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FD9E0u;
    {
        const bool branch_taken_0x1fd9e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd9e0) {
            ctx->pc = 0x1FD9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD9E0u;
            // 0x1fd9e4: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDA44u;
            goto label_1fda44;
        }
    }
    ctx->pc = 0x1FD9E8u;
    // 0x1fd9e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FD9E8u;
    {
        const bool branch_taken_0x1fd9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9E8u;
        // 0x1fd9ec: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9e8) {
            ctx->pc = 0x1FDA48u;
            goto label_1fda48;
        }
    }
    ctx->pc = 0x1FD9F0u;
label_1fd9f0:
    // 0x1fd9f0: 0x24448290  addiu       $a0, $v0, -0x7D70
    ctx->pc = 0x1fd9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x1fd9f4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fd9f8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD9F8u;
    {
        const bool branch_taken_0x1fd9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd9f8) {
            ctx->pc = 0x1FD9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD9F8u;
            // 0x1fd9fc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDA10u;
            goto label_1fda10;
        }
    }
    ctx->pc = 0x1FDA00u;
    // 0x1fda00: 0xc076936  jal         func_1DA4D8
    ctx->pc = 0x1FDA00u;
    SET_GPR_U32(ctx, 31, 0x1FDA08u);
    ctx->pc = 0x1FDA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDA00u;
    // 0x1fda04: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA4D8u, 0x1FDA00u, 0x1FDA08u)) {
        return;
    }
    ctx->pc = 0x1FDA08u;
label_1fda08:
    // 0x1fda08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDA08u;
    {
        const bool branch_taken_0x1fda08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA08u;
        // 0x1fda0c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda08) {
            ctx->pc = 0x1FDA14u;
            goto label_1fda14;
        }
    }
    ctx->pc = 0x1FDA10u;
label_1fda10:
    // 0x1fda10: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1fda10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1fda14:
    // 0x1fda14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1fda14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1fda18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDA18u;
    {
        const bool branch_taken_0x1fda18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA18u;
        // 0x1fda1c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda18) {
            ctx->pc = 0x1FDA30u;
            goto label_1fda30;
        }
    }
    ctx->pc = 0x1FDA20u;
    // 0x1fda20: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x1fda20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1fda24: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x1fda24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1fda28: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x1fda28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fda2c: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x1fda2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1fda30:
    // 0x1fda30: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x1fda30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x1fda34: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fda34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fda38: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fda38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fda3c: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FDA3Cu;
    {
        const bool branch_taken_0x1fda3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fda3c) {
            ctx->pc = 0x1FDA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDA3Cu;
            // 0x1fda40: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDA44u;
            goto label_1fda44;
        }
    }
    ctx->pc = 0x1FDA44u;
label_1fda44:
    // 0x1fda44: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x1fda44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_1fda48:
    // 0x1fda48: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1fda48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fda4c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1fda4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1fda50: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1fda50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1fda54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fda54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fda58: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1fda58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1fda5c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fda5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fda60: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1FDA60u;
    {
        const bool branch_taken_0x1fda60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FDA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA60u;
        // 0x1fda64: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda60) {
            ctx->pc = 0x1FDC84u;
            goto label_1fdc84;
        }
    }
    ctx->pc = 0x1FDA68u;
    // 0x1fda68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fda68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fda6c: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x1FDA6Cu;
    {
        const bool branch_taken_0x1fda6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fda6c) {
            ctx->pc = 0x1FDA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDA6Cu;
            // 0x1fda70: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC88u;
            goto label_1fdc88;
        }
    }
    ctx->pc = 0x1FDA74u;
    // 0x1fda74: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fda74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fda78: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1fda78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1fda7c: 0x0  nop
    ctx->pc = 0x1fda7cu;
    // NOP
label_1fda80:
    // 0x1fda80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fda80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fda84: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1fda84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fda88: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1FDA88u;
    {
        const bool branch_taken_0x1fda88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1fda88) {
            ctx->pc = 0x1FDB74u;
            goto label_1fdb74;
        }
    }
    ctx->pc = 0x1FDA90u;
    // 0x1fda90: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fda90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fda94: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDA94u;
    {
        const bool branch_taken_0x1fda94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fda94) {
            ctx->pc = 0x1FDA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDA94u;
            // 0x1fda98: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAB4u;
            goto label_1fdab4;
        }
    }
    ctx->pc = 0x1FDA9Cu;
    // 0x1fda9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fdaa0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDAA0u;
    {
        const bool branch_taken_0x1fdaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdaa0) {
            ctx->pc = 0x1FDAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDAA0u;
            // 0x1fdaa4: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAB4u;
            goto label_1fdab4;
        }
    }
    ctx->pc = 0x1FDAA8u;
    // 0x1fdaa8: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1fdaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1fdaac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1FDAACu;
    {
        const bool branch_taken_0x1fdaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAACu;
        // 0x1fdab0: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdaac) {
            ctx->pc = 0x1FDB90u;
            goto label_1fdb90;
        }
    }
    ctx->pc = 0x1FDAB4u;
label_1fdab4:
    // 0x1fdab4: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1fdab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fdab8: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FDAB8u;
    {
        const bool branch_taken_0x1fdab8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x1fdab8) {
            ctx->pc = 0x1FDABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDAB8u;
            // 0x1fdabc: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB10u;
            goto label_1fdb10;
        }
    }
    ctx->pc = 0x1FDAC0u;
    // 0x1fdac0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fdac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fdac4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1fdac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdac8: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x1fdac8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x1fdacc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fdaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fdad0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FDAD0u;
    {
        const bool branch_taken_0x1fdad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdad0) {
            ctx->pc = 0x1FDAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDAD0u;
            // 0x1fdad4: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAD8u;
            goto label_1fdad8;
        }
    }
    ctx->pc = 0x1FDAD8u;
label_1fdad8:
    // 0x1fdad8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1fdad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1fdadc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fdadcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1fdae0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fdae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fdae4: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDAE4u;
    {
        const bool branch_taken_0x1fdae4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fdae4) {
            ctx->pc = 0x1FDAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDAE4u;
            // 0x1fdae8: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAF4u;
            goto label_1fdaf4;
        }
    }
    ctx->pc = 0x1FDAECu;
    // 0x1fdaec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDAECu;
    {
        const bool branch_taken_0x1fdaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAECu;
        // 0x1fdaf0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdaec) {
            ctx->pc = 0x1FDB04u;
            goto label_1fdb04;
        }
    }
    ctx->pc = 0x1FDAF4u;
label_1fdaf4:
    // 0x1fdaf4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fdaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fdaf8: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDAF8u;
    {
        const bool branch_taken_0x1fdaf8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fdaf8) {
            ctx->pc = 0x1FDAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDAF8u;
            // 0x1fdafc: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB04u;
            goto label_1fdb04;
        }
    }
    ctx->pc = 0x1FDB00u;
    // 0x1fdb00: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1fdb00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1fdb04:
    // 0x1fdb04: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fdb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1fdb08: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1fdb08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1fdb0c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1fdb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1fdb10:
    // 0x1fdb10: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x1fdb10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x1fdb14: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1fdb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1fdb18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fdb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fdb1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fdb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1fdb20: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1fdb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1fdb24: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1fdb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fdb28: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1fdb28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fdb2c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1fdb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fdb30: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1fdb30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1fdb34: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1fdb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fdb38: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FDB38u;
    {
        const bool branch_taken_0x1fdb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb38) {
            ctx->pc = 0x1FDB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB38u;
            // 0x1fdb3c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB40u;
            goto label_1fdb40;
        }
    }
    ctx->pc = 0x1FDB40u;
label_1fdb40:
    // 0x1fdb40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1fdb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fdb44: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1fdb44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1fdb48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fdb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fdb4c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDB4Cu;
    {
        const bool branch_taken_0x1fdb4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fdb4c) {
            ctx->pc = 0x1FDB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB4Cu;
            // 0x1fdb50: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB5Cu;
            goto label_1fdb5c;
        }
    }
    ctx->pc = 0x1FDB54u;
    // 0x1fdb54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDB54u;
    {
        const bool branch_taken_0x1fdb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB54u;
        // 0x1fdb58: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb54) {
            ctx->pc = 0x1FDB6Cu;
            goto label_1fdb6c;
        }
    }
    ctx->pc = 0x1FDB5Cu;
label_1fdb5c:
    // 0x1fdb5c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fdb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fdb60: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDB60u;
    {
        const bool branch_taken_0x1fdb60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fdb60) {
            ctx->pc = 0x1FDB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB60u;
            // 0x1fdb64: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB6Cu;
            goto label_1fdb6c;
        }
    }
    ctx->pc = 0x1FDB68u;
    // 0x1fdb68: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1fdb68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_1fdb6c:
    // 0x1fdb6c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1FDB6Cu;
    {
        const bool branch_taken_0x1fdb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB6Cu;
        // 0x1fdb70: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb6c) {
            ctx->pc = 0x1FDC64u;
            goto label_1fdc64;
        }
    }
    ctx->pc = 0x1FDB74u;
label_1fdb74:
    // 0x1fdb74: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FDB74u;
    {
        const bool branch_taken_0x1fdb74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb74) {
            ctx->pc = 0x1FDB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB74u;
            // 0x1fdb78: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDBA8u;
            goto label_1fdba8;
        }
    }
    ctx->pc = 0x1FDB7Cu;
    // 0x1fdb7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fdb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fdb80: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FDB80u;
    {
        const bool branch_taken_0x1fdb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb80) {
            ctx->pc = 0x1FDB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB80u;
            // 0x1fdb84: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDBA8u;
            goto label_1fdba8;
        }
    }
    ctx->pc = 0x1FDB88u;
    // 0x1fdb88: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x1fdb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x1fdb8c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1fdb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_1fdb90:
    // 0x1fdb90: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1fdb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1fdb94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1fdb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fdb98: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fdb98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1fdb9c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1fdb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1fdba0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1FDBA0u;
    {
        const bool branch_taken_0x1fdba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBA0u;
        // 0x1fdba4: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdba0) {
            ctx->pc = 0x1FDC68u;
            goto label_1fdc68;
        }
    }
    ctx->pc = 0x1FDBA8u;
label_1fdba8:
    // 0x1fdba8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1fdba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fdbac: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FDBACu;
    {
        const bool branch_taken_0x1fdbac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x1fdbac) {
            ctx->pc = 0x1FDBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDBACu;
            // 0x1fdbb0: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC04u;
            goto label_1fdc04;
        }
    }
    ctx->pc = 0x1FDBB4u;
    // 0x1fdbb4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fdbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fdbb8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1fdbb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdbbc: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x1fdbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x1fdbc0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fdbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fdbc4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FDBC4u;
    {
        const bool branch_taken_0x1fdbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdbc4) {
            ctx->pc = 0x1FDBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDBC4u;
            // 0x1fdbc8: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDBCCu;
            goto label_1fdbcc;
        }
    }
    ctx->pc = 0x1FDBCCu;
label_1fdbcc:
    // 0x1fdbcc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1fdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1fdbd0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fdbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1fdbd4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fdbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fdbd8: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDBD8u;
    {
        const bool branch_taken_0x1fdbd8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fdbd8) {
            ctx->pc = 0x1FDBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDBD8u;
            // 0x1fdbdc: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDBE8u;
            goto label_1fdbe8;
        }
    }
    ctx->pc = 0x1FDBE0u;
    // 0x1fdbe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDBE0u;
    {
        const bool branch_taken_0x1fdbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBE0u;
        // 0x1fdbe4: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdbe0) {
            ctx->pc = 0x1FDBF8u;
            goto label_1fdbf8;
        }
    }
    ctx->pc = 0x1FDBE8u;
label_1fdbe8:
    // 0x1fdbe8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fdbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fdbec: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDBECu;
    {
        const bool branch_taken_0x1fdbec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fdbec) {
            ctx->pc = 0x1FDBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDBECu;
            // 0x1fdbf0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDBF8u;
            goto label_1fdbf8;
        }
    }
    ctx->pc = 0x1FDBF4u;
    // 0x1fdbf4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1fdbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_1fdbf8:
    // 0x1fdbf8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1fdbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1fdbfc: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1fdbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1fdc00: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1fdc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1fdc04:
    // 0x1fdc04: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x1fdc04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x1fdc08: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1fdc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1fdc0c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fdc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fdc10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fdc10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1fdc14: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1fdc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1fdc18: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1fdc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fdc1c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1fdc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fdc20: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1fdc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fdc24: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1fdc24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1fdc28: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1fdc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fdc2c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FDC2Cu;
    {
        const bool branch_taken_0x1fdc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc2c) {
            ctx->pc = 0x1FDC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDC2Cu;
            // 0x1fdc30: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC34u;
            goto label_1fdc34;
        }
    }
    ctx->pc = 0x1FDC34u;
label_1fdc34:
    // 0x1fdc34: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1fdc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fdc38: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1fdc38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1fdc3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fdc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fdc40: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDC40u;
    {
        const bool branch_taken_0x1fdc40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fdc40) {
            ctx->pc = 0x1FDC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDC40u;
            // 0x1fdc44: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC50u;
            goto label_1fdc50;
        }
    }
    ctx->pc = 0x1FDC48u;
    // 0x1fdc48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDC48u;
    {
        const bool branch_taken_0x1fdc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC48u;
        // 0x1fdc4c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc48) {
            ctx->pc = 0x1FDC60u;
            goto label_1fdc60;
        }
    }
    ctx->pc = 0x1FDC50u;
label_1fdc50:
    // 0x1fdc50: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fdc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fdc54: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDC54u;
    {
        const bool branch_taken_0x1fdc54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fdc54) {
            ctx->pc = 0x1FDC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDC54u;
            // 0x1fdc58: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC60u;
            goto label_1fdc60;
        }
    }
    ctx->pc = 0x1FDC5Cu;
    // 0x1fdc5c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1fdc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_1fdc60:
    // 0x1fdc60: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1fdc60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_1fdc64:
    // 0x1fdc64: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1fdc64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_1fdc68:
    // 0x1fdc68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fdc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fdc6c: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDC6Cu;
    {
        const bool branch_taken_0x1fdc6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fdc6c) {
            ctx->pc = 0x1FDC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDC6Cu;
            // 0x1fdc70: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC88u;
            goto label_1fdc88;
        }
    }
    ctx->pc = 0x1FDC74u;
    // 0x1fdc74: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1fdc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1fdc78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fdc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fdc7c: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
    ctx->pc = 0x1FDC7Cu;
    {
        const bool branch_taken_0x1fdc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc7c) {
            ctx->pc = 0x1FDC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDC7Cu;
            // 0x1fdc80: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fda80;
        }
    }
    ctx->pc = 0x1FDC84u;
label_1fdc84:
    // 0x1fdc84: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1fdc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fdc88:
    // 0x1fdc88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fdc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdc8c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1fdc8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fdc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fdc94: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1fdc94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1fdc98: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fdc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fdc9c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1fdc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fdca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fdca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdca4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fdca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fdca8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1fdca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1fdcac: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x1fdcacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x1fdcb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fdcb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdcb4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fdcb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCB8u;
        // 0x1fdcbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDCC0u;
}
