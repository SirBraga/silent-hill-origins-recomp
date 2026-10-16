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

// Function: sub_002FB920
// Address: 0x2fb920 - 0x2fd6c8
void sub_002FB920_0x2fb920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB920_0x2fb920");
#endif

    switch (ctx->pc) {
        case 0x2fb998u: goto label_2fb998;
        case 0x2fba28u: goto label_2fba28;
        case 0x2fbac0u: goto label_2fbac0;
        case 0x2fbbe0u: goto label_2fbbe0;
        case 0x2fbc70u: goto label_2fbc70;
        case 0x2fbd00u: goto label_2fbd00;
        case 0x2fbd90u: goto label_2fbd90;
        case 0x2fbe20u: goto label_2fbe20;
        case 0x2fbeb0u: goto label_2fbeb0;
        case 0x2fbf40u: goto label_2fbf40;
        case 0x2fbfd0u: goto label_2fbfd0;
        case 0x2fc068u: goto label_2fc068;
        case 0x2fc100u: goto label_2fc100;
        case 0x2fc190u: goto label_2fc190;
        case 0x2fc220u: goto label_2fc220;
        case 0x2fc2b0u: goto label_2fc2b0;
        case 0x2fc340u: goto label_2fc340;
        case 0x2fc3c8u: goto label_2fc3c8;
        case 0x2fc478u: goto label_2fc478;
        case 0x2fc510u: goto label_2fc510;
        case 0x2fc5a0u: goto label_2fc5a0;
        case 0x2fc630u: goto label_2fc630;
        case 0x2fc6c0u: goto label_2fc6c0;
        case 0x2fc750u: goto label_2fc750;
        case 0x2fc7d8u: goto label_2fc7d8;
        case 0x2fc888u: goto label_2fc888;
        case 0x2fc920u: goto label_2fc920;
        case 0x2fc9c0u: goto label_2fc9c0;
        case 0x2fca50u: goto label_2fca50;
        case 0x2fcae0u: goto label_2fcae0;
        case 0x2fcb70u: goto label_2fcb70;
        case 0x2fcbf8u: goto label_2fcbf8;
        case 0x2fcc88u: goto label_2fcc88;
        case 0x2fcd18u: goto label_2fcd18;
        case 0x2fcda0u: goto label_2fcda0;
        case 0x2fce28u: goto label_2fce28;
        case 0x2fcea0u: goto label_2fcea0;
        case 0x2fcee0u: goto label_2fcee0;
        case 0x2fcf78u: goto label_2fcf78;
        case 0x2fd010u: goto label_2fd010;
        case 0x2fd0a0u: goto label_2fd0a0;
        case 0x2fd110u: goto label_2fd110;
        case 0x2fd140u: goto label_2fd140;
        case 0x2fd220u: goto label_2fd220;
        case 0x2fd2d8u: goto label_2fd2d8;
        case 0x2fd3b0u: goto label_2fd3b0;
        case 0x2fd4b8u: goto label_2fd4b8;
        case 0x2fd590u: goto label_2fd590;
        case 0x2fd650u: goto label_2fd650;
        default: break;
    }

    ctx->pc = 0x2fb920u;

    // 0x2fb920: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fb920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fb924: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2fb924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb928: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2fb928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2fb92c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2fb92cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2fb930: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2fb930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2fb934: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2fb934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb938: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2fb938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2fb93c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2fb93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2fb940: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2fb940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2fb944: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2fb944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fb948: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x2fb948u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fb94c: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x2fb94cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
    // 0x2fb950: 0x24a90740  addiu       $t1, $a1, 0x740
    ctx->pc = 0x2fb950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1856));
    // 0x2fb954: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x2fb954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2fb958: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x2fb958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2fb95c: 0x6924000f  ldl         $a0, 0xF($t1)
    ctx->pc = 0x2fb95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2fb960: 0x6d240008  ldr         $a0, 0x8($t1)
    ctx->pc = 0x2fb960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2fb964: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2fb964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fb968: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2fb968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fb96c: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x2fb96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fb970: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x2fb970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fb974: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x2fb974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x2fb978: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2fb978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fb97c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x2fb97cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x2fb980: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x2fb980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x2fb984: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb988: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB988u;
    {
        const bool branch_taken_0x2fb988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB988u;
        // 0x2fb98c: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb988) {
            ctx->pc = 0x2FB9ECu;
            goto label_2fb9ec;
        }
    }
    ctx->pc = 0x2FB990u;
    // 0x2fb990: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fb990u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fb994: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fb994u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_2fb998:
    // 0x2fb998: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fb998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fb99c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fb99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fb9a0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fb9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fb9a4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fb9a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fb9a8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fb9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fb9ac: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fb9acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fb9b0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fb9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fb9b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fb9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fb9b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fb9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fb9bc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fb9bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fb9c0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fb9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fb9c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB9C4u;
    {
        const bool branch_taken_0x2fb9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9C4u;
        // 0x2fb9c8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb9c4) {
            ctx->pc = 0x2FB9D4u;
            goto label_2fb9d4;
        }
    }
    ctx->pc = 0x2FB9CCu;
    // 0x2fb9cc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fb9d0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fb9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fb9d4:
    // 0x2fb9d4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fb9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fb9d8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fb9d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fb9dc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FB9DCu;
    {
        const bool branch_taken_0x2fb9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9DCu;
        // 0x2fb9e0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb9dc) {
            ctx->pc = 0x2FB998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb998;
        }
    }
    ctx->pc = 0x2FB9E4u;
    // 0x2fb9e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB9E4u;
    {
        const bool branch_taken_0x2fb9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9E4u;
        // 0x2fb9e8: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb9e4) {
            ctx->pc = 0x2FB9F4u;
            goto label_2fb9f4;
        }
    }
    ctx->pc = 0x2FB9ECu;
label_2fb9ec:
    // 0x2fb9ec: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fb9ecu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fb9f0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fb9f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fb9f4:
    // 0x2fb9f4: 0x65450018  daddiu      $a1, $t2, 0x18
    ctx->pc = 0x2fb9f4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)24);
    // 0x2fb9f8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fb9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fb9fc: 0x2463e  dsrl32      $t0, $v0, 24
    ctx->pc = 0x2fb9fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 24));
    // 0x2fba00: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fba00u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fba04: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2fba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2fba08: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2fba08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2fba0c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fba10: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fba10u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fba14: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FBA14u;
    {
        const bool branch_taken_0x2fba14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA14u;
        // 0x2fba18: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba14) {
            ctx->pc = 0x2FBA7Cu;
            goto label_2fba7c;
        }
    }
    ctx->pc = 0x2FBA1Cu;
    // 0x2fba1c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fba1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fba20: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fba20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba24: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x2fba24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
label_2fba28:
    // 0x2fba28: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fba28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fba2c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fba30: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fba30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fba34: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fba34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fba38: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fba38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fba3c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fba3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fba40: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fba40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fba44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fba48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fba48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fba4c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fba4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fba50: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fba50u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fba54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBA54u;
    {
        const bool branch_taken_0x2fba54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA54u;
        // 0x2fba58: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba54) {
            ctx->pc = 0x2FBA64u;
            goto label_2fba64;
        }
    }
    ctx->pc = 0x2FBA5Cu;
    // 0x2fba5c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fba60: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fba60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fba64:
    // 0x2fba64: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fba68: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fba68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fba6c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FBA6Cu;
    {
        const bool branch_taken_0x2fba6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA6Cu;
        // 0x2fba70: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba6c) {
            ctx->pc = 0x2FBA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fba28;
        }
    }
    ctx->pc = 0x2FBA74u;
    // 0x2fba74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FBA74u;
    {
        const bool branch_taken_0x2fba74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA74u;
        // 0x2fba78: 0x65420008  daddiu      $v0, $t2, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba74) {
            ctx->pc = 0x2FBA88u;
            goto label_2fba88;
        }
    }
    ctx->pc = 0x2FBA7Cu;
label_2fba7c:
    // 0x2fba7c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fba7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba80: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x2fba80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2fba84: 0x65420008  daddiu      $v0, $t2, 0x8
    ctx->pc = 0x2fba84u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
label_2fba88:
    // 0x2fba88: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fba88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fba8c: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2fba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x2fba90: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x2fba90u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x2fba94: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2fba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2fba98: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fba98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fba9c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x2fba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x2fbaa0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fbaa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbaa4: 0x25c3e  dsrl32      $t3, $v0, 16
    ctx->pc = 0x2fbaa4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x2fbaa8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fbaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fbaac: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FBAACu;
    {
        const bool branch_taken_0x2fbaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAACu;
        // 0x2fbab0: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbaac) {
            ctx->pc = 0x2FBB14u;
            goto label_2fbb14;
        }
    }
    ctx->pc = 0x2FBAB4u;
    // 0x2fbab4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fbab4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fbab8: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fbab8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fbabc: 0x0  nop
    ctx->pc = 0x2fbabcu;
    // NOP
label_2fbac0:
    // 0x2fbac0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fbac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fbac4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fbac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fbac8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fbac8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbacc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fbaccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbad0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fbad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fbad4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fbad4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbad8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fbad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fbadc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fbadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fbae0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fbae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fbae4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fbae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fbae8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fbae8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fbaec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBAECu;
    {
        const bool branch_taken_0x2fbaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAECu;
        // 0x2fbaf0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbaec) {
            ctx->pc = 0x2FBAFCu;
            goto label_2fbafc;
        }
    }
    ctx->pc = 0x2FBAF4u;
    // 0x2fbaf4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fbaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fbaf8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fbaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fbafc:
    // 0x2fbafc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fbafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fbb00: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fbb00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbb04: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FBB04u;
    {
        const bool branch_taken_0x2fbb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB04u;
        // 0x2fbb08: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb04) {
            ctx->pc = 0x2FBAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbac0;
        }
    }
    ctx->pc = 0x2FBB0Cu;
    // 0x2fbb0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBB0Cu;
    {
        const bool branch_taken_0x2fbb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB0Cu;
        // 0x2fbb10: 0x65420010  daddiu      $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb0c) {
            ctx->pc = 0x2FBB1Cu;
            goto label_2fbb1c;
        }
    }
    ctx->pc = 0x2FBB14u;
label_2fbb14:
    // 0x2fbb14: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fbb14u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fbb18: 0x65420010  daddiu      $v0, $t2, 0x10
    ctx->pc = 0x2fbb18u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
label_2fbb1c:
    // 0x2fbb1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fbb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fbb20: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2fbb20u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x2fbb24: 0x3404bc00  ori         $a0, $zero, 0xBC00
    ctx->pc = 0x2fbb24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x2fbb28: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x2fbb28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x2fbb2c: 0xaccb0008  sw          $t3, 0x8($a2)
    ctx->pc = 0x2fbb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 11));
    // 0x2fbb30: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x2fbb30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fbb34: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x2fbb34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x2fbb38: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fbb38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbb3c: 0x10a4064d  beq         $a1, $a0, . + 4 + (0x64D << 2)
    ctx->pc = 0x2FBB3Cu;
    {
        const bool branch_taken_0x2fbb3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2FBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB3Cu;
        // 0x2fbb40: 0xfcc30018  sd          $v1, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb3c) {
            ctx->pc = 0x2FD474u;
            goto label_2fd474;
        }
    }
    ctx->pc = 0x2FBB44u;
    // 0x2fbb44: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x2fbb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x2fbb48: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fbb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fbb4c: 0x10a2062d  beq         $a1, $v0, . + 4 + (0x62D << 2)
    ctx->pc = 0x2FBB4Cu;
    {
        const bool branch_taken_0x2fbb4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fbb4c) {
            ctx->pc = 0x2FD404u;
            goto label_2fd404;
        }
    }
    ctx->pc = 0x2FBB54u;
    // 0x2fbb54: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x2fbb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x2fbb58: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fbb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fbb5c: 0x10a20629  beq         $a1, $v0, . + 4 + (0x629 << 2)
    ctx->pc = 0x2FBB5Cu;
    {
        const bool branch_taken_0x2fbb5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fbb5c) {
            ctx->pc = 0x2FD404u;
            goto label_2fd404;
        }
    }
    ctx->pc = 0x2FBB64u;
    // 0x2fbb64: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x2fbb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x2fbb68: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fbb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fbb6c: 0x10a20625  beq         $a1, $v0, . + 4 + (0x625 << 2)
    ctx->pc = 0x2FBB6Cu;
    {
        const bool branch_taken_0x2fbb6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fbb6c) {
            ctx->pc = 0x2FD404u;
            goto label_2fd404;
        }
    }
    ctx->pc = 0x2FBB74u;
    // 0x2fbb74: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x2fbb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x2fbb78: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fbb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fbb7c: 0x10a20621  beq         $a1, $v0, . + 4 + (0x621 << 2)
    ctx->pc = 0x2FBB7Cu;
    {
        const bool branch_taken_0x2fbb7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fbb7c) {
            ctx->pc = 0x2FD404u;
            goto label_2fd404;
        }
    }
    ctx->pc = 0x2FBB84u;
    // 0x2fbb84: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x2fbb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2fbb88: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fbb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fbb8c: 0x10a2061d  beq         $a1, $v0, . + 4 + (0x61D << 2)
    ctx->pc = 0x2FBB8Cu;
    {
        const bool branch_taken_0x2fbb8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fbb8c) {
            ctx->pc = 0x2FD404u;
            goto label_2fd404;
        }
    }
    ctx->pc = 0x2FBB94u;
    // 0x2fbb94: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x2fbb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x2fbb98: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fbb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fbb9c: 0x10a20619  beq         $a1, $v0, . + 4 + (0x619 << 2)
    ctx->pc = 0x2FBB9Cu;
    {
        const bool branch_taken_0x2fbb9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fbb9c) {
            ctx->pc = 0x2FD404u;
            goto label_2fd404;
        }
    }
    ctx->pc = 0x2FBBA4u;
    // 0x2fbba4: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x2fbba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x2fbba8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fbba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fbbac: 0x10a20615  beq         $a1, $v0, . + 4 + (0x615 << 2)
    ctx->pc = 0x2FBBACu;
    {
        const bool branch_taken_0x2fbbac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fbbac) {
            ctx->pc = 0x2FD404u;
            goto label_2fd404;
        }
    }
    ctx->pc = 0x2FBBB4u;
    // 0x2fbbb4: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fbbb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbbb8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fbbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbbbc: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x2fbbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x2fbbc0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2fbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2fbbc4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fbbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fbbc8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fbbc8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbbcc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FBBCCu;
    {
        const bool branch_taken_0x2fbbcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBCCu;
        // 0x2fbbd0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbcc) {
            ctx->pc = 0x2FBC34u;
            goto label_2fbc34;
        }
    }
    ctx->pc = 0x2FBBD4u;
    // 0x2fbbd4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fbbd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fbbd8: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fbbd8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fbbdc: 0x0  nop
    ctx->pc = 0x2fbbdcu;
    // NOP
label_2fbbe0:
    // 0x2fbbe0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fbbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fbbe4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fbbe8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fbbe8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbbec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fbbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbbf0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fbbf4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fbbf4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbbf8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fbbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fbbfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fbbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fbc00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fbc00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fbc04: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fbc04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fbc08: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fbc08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fbc0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBC0Cu;
    {
        const bool branch_taken_0x2fbc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC0Cu;
        // 0x2fbc10: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc0c) {
            ctx->pc = 0x2FBC1Cu;
            goto label_2fbc1c;
        }
    }
    ctx->pc = 0x2FBC14u;
    // 0x2fbc14: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fbc18: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fbc18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fbc1c:
    // 0x2fbc1c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fbc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fbc20: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fbc20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbc24: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FBC24u;
    {
        const bool branch_taken_0x2fbc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC24u;
        // 0x2fbc28: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc24) {
            ctx->pc = 0x2FBBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbbe0;
        }
    }
    ctx->pc = 0x2FBC2Cu;
    // 0x2fbc2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBC2Cu;
    {
        const bool branch_taken_0x2fbc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC2Cu;
        // 0x2fbc30: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc2c) {
            ctx->pc = 0x2FBC3Cu;
            goto label_2fbc3c;
        }
    }
    ctx->pc = 0x2FBC34u;
label_2fbc34:
    // 0x2fbc34: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fbc34u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fbc38: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fbc38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fbc3c:
    // 0x2fbc3c: 0x65450002  daddiu      $a1, $t2, 0x2
    ctx->pc = 0x2fbc3cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x2fbc40: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fbc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbc44: 0x25fbe  dsrl32      $t3, $v0, 30
    ctx->pc = 0x2fbc44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) >> (32 + 30));
    // 0x2fbc48: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fbc48u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fbc4c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2fbc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2fbc50: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x2fbc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x2fbc54: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fbc54u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fbc58: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fbc58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbc5c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FBC5Cu;
    {
        const bool branch_taken_0x2fbc5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC5Cu;
        // 0x2fbc60: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc5c) {
            ctx->pc = 0x2FBCC4u;
            goto label_2fbcc4;
        }
    }
    ctx->pc = 0x2FBC64u;
    // 0x2fbc64: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fbc64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fbc68: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbc68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbc6c: 0x0  nop
    ctx->pc = 0x2fbc6cu;
    // NOP
label_2fbc70:
    // 0x2fbc70: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fbc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fbc74: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fbc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fbc78: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fbc78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbc7c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fbc7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbc80: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fbc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fbc84: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fbc84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbc88: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fbc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fbc8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fbc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fbc90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fbc90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fbc94: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fbc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fbc98: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fbc98u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fbc9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBC9Cu;
    {
        const bool branch_taken_0x2fbc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC9Cu;
        // 0x2fbca0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc9c) {
            ctx->pc = 0x2FBCACu;
            goto label_2fbcac;
        }
    }
    ctx->pc = 0x2FBCA4u;
    // 0x2fbca4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fbca8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fbca8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fbcac:
    // 0x2fbcac: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fbcb0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fbcb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbcb4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FBCB4u;
    {
        const bool branch_taken_0x2fbcb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCB4u;
        // 0x2fbcb8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcb4) {
            ctx->pc = 0x2FBC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbc70;
        }
    }
    ctx->pc = 0x2FBCBCu;
    // 0x2fbcbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBCBCu;
    {
        const bool branch_taken_0x2fbcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCBCu;
        // 0x2fbcc0: 0xaccb000c  sw          $t3, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcbc) {
            ctx->pc = 0x2FBCCCu;
            goto label_2fbccc;
        }
    }
    ctx->pc = 0x2FBCC4u;
label_2fbcc4:
    // 0x2fbcc4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbcc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbcc8: 0xaccb000c  sw          $t3, 0xC($a2)
    ctx->pc = 0x2fbcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 11));
label_2fbccc:
    // 0x2fbccc: 0x65450002  daddiu      $a1, $t2, 0x2
    ctx->pc = 0x2fbcccu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x2fbcd0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fbcd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbcd4: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fbcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbcd8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x2fbcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x2fbcdc: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fbcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fbce0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2fbce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2fbce4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fbce4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fbce8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fbce8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbcec: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FBCECu;
    {
        const bool branch_taken_0x2fbcec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCECu;
        // 0x2fbcf0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcec) {
            ctx->pc = 0x2FBD54u;
            goto label_2fbd54;
        }
    }
    ctx->pc = 0x2FBCF4u;
    // 0x2fbcf4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fbcf4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fbcf8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbcf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbcfc: 0x0  nop
    ctx->pc = 0x2fbcfcu;
    // NOP
label_2fbd00:
    // 0x2fbd00: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fbd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fbd04: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fbd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fbd08: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fbd08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbd0c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fbd0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbd10: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fbd14: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fbd14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbd18: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fbd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fbd1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fbd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fbd20: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fbd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fbd24: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fbd24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fbd28: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fbd28u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fbd2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBD2Cu;
    {
        const bool branch_taken_0x2fbd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD2Cu;
        // 0x2fbd30: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd2c) {
            ctx->pc = 0x2FBD3Cu;
            goto label_2fbd3c;
        }
    }
    ctx->pc = 0x2FBD34u;
    // 0x2fbd34: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fbd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fbd38: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fbd38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fbd3c:
    // 0x2fbd3c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fbd40: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fbd40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbd44: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FBD44u;
    {
        const bool branch_taken_0x2fbd44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD44u;
        // 0x2fbd48: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd44) {
            ctx->pc = 0x2FBD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbd00;
        }
    }
    ctx->pc = 0x2FBD4Cu;
    // 0x2fbd4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBD4Cu;
    {
        const bool branch_taken_0x2fbd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD4Cu;
        // 0x2fbd50: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd4c) {
            ctx->pc = 0x2FBD5Cu;
            goto label_2fbd5c;
        }
    }
    ctx->pc = 0x2FBD54u;
label_2fbd54:
    // 0x2fbd54: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbd54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd58: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fbd58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fbd5c:
    // 0x2fbd5c: 0x65450004  daddiu      $a1, $t2, 0x4
    ctx->pc = 0x2fbd5cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x2fbd60: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fbd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbd64: 0x27fbe  dsrl32      $t7, $v0, 30
    ctx->pc = 0x2fbd64u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 30));
    // 0x2fbd68: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fbd68u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fbd6c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2fbd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2fbd70: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x2fbd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x2fbd74: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fbd74u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fbd78: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fbd78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbd7c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FBD7Cu;
    {
        const bool branch_taken_0x2fbd7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD7Cu;
        // 0x2fbd80: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd7c) {
            ctx->pc = 0x2FBDE4u;
            goto label_2fbde4;
        }
    }
    ctx->pc = 0x2FBD84u;
    // 0x2fbd84: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fbd84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fbd88: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbd88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd8c: 0x31eb0002  andi        $t3, $t7, 0x2
    ctx->pc = 0x2fbd8cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
label_2fbd90:
    // 0x2fbd90: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fbd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fbd94: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fbd98: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fbd98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbd9c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fbd9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbda0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fbda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fbda4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fbda4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbda8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fbda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fbdac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fbdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fbdb0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fbdb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fbdb4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fbdb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fbdb8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fbdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fbdbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBDBCu;
    {
        const bool branch_taken_0x2fbdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDBCu;
        // 0x2fbdc0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdbc) {
            ctx->pc = 0x2FBDCCu;
            goto label_2fbdcc;
        }
    }
    ctx->pc = 0x2FBDC4u;
    // 0x2fbdc4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fbdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fbdc8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fbdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fbdcc:
    // 0x2fbdcc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fbdd0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fbdd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbdd4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FBDD4u;
    {
        const bool branch_taken_0x2fbdd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDD4u;
        // 0x2fbdd8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdd4) {
            ctx->pc = 0x2FBD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbd90;
        }
    }
    ctx->pc = 0x2FBDDCu;
    // 0x2fbddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FBDDCu;
    {
        const bool branch_taken_0x2fbddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDDCu;
        // 0x2fbde0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbddc) {
            ctx->pc = 0x2FBDF0u;
            goto label_2fbdf0;
        }
    }
    ctx->pc = 0x2FBDE4u;
label_2fbde4:
    // 0x2fbde4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbde4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbde8: 0x31eb0002  andi        $t3, $t7, 0x2
    ctx->pc = 0x2fbde8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
    // 0x2fbdec: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fbdecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fbdf0:
    // 0x2fbdf0: 0x65450002  daddiu      $a1, $t2, 0x2
    ctx->pc = 0x2fbdf0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x2fbdf4: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fbdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbdf8: 0x287fe  dsrl32      $s0, $v0, 31
    ctx->pc = 0x2fbdf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x2fbdfc: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fbdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fbe00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fbe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fbe04: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fbe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fbe08: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fbe08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fbe0c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fbe0cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbe10: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FBE10u;
    {
        const bool branch_taken_0x2fbe10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE10u;
        // 0x2fbe14: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe10) {
            ctx->pc = 0x2FBE74u;
            goto label_2fbe74;
        }
    }
    ctx->pc = 0x2FBE18u;
    // 0x2fbe18: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fbe18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fbe1c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbe1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fbe20:
    // 0x2fbe20: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fbe20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fbe24: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fbe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fbe28: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fbe28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbe2c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fbe2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbe30: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fbe30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fbe34: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fbe34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbe38: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fbe38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fbe3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fbe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fbe40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fbe40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fbe44: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fbe44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fbe48: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fbe48u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fbe4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBE4Cu;
    {
        const bool branch_taken_0x2fbe4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE4Cu;
        // 0x2fbe50: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe4c) {
            ctx->pc = 0x2FBE5Cu;
            goto label_2fbe5c;
        }
    }
    ctx->pc = 0x2FBE54u;
    // 0x2fbe54: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fbe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fbe58: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fbe58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fbe5c:
    // 0x2fbe5c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fbe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fbe60: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fbe60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbe64: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FBE64u;
    {
        const bool branch_taken_0x2fbe64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE64u;
        // 0x2fbe68: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe64) {
            ctx->pc = 0x2FBE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbe20;
        }
    }
    ctx->pc = 0x2FBE6Cu;
    // 0x2fbe6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBE6Cu;
    {
        const bool branch_taken_0x2fbe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE6Cu;
        // 0x2fbe70: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe6c) {
            ctx->pc = 0x2FBE7Cu;
            goto label_2fbe7c;
        }
    }
    ctx->pc = 0x2FBE74u;
label_2fbe74:
    // 0x2fbe74: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbe74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe78: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fbe78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fbe7c:
    // 0x2fbe7c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2fbe7cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fbe80: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fbe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbe84: 0x2cf3e  dsrl32      $t9, $v0, 28
    ctx->pc = 0x2fbe84u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x2fbe88: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fbe88u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fbe8c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2fbe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2fbe90: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x2fbe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x2fbe94: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fbe94u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fbe98: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fbe98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbe9c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FBE9Cu;
    {
        const bool branch_taken_0x2fbe9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE9Cu;
        // 0x2fbea0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe9c) {
            ctx->pc = 0x2FBF04u;
            goto label_2fbf04;
        }
    }
    ctx->pc = 0x2FBEA4u;
    // 0x2fbea4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fbea4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fbea8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbea8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbeac: 0x0  nop
    ctx->pc = 0x2fbeacu;
    // NOP
label_2fbeb0:
    // 0x2fbeb0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fbeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fbeb4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fbeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fbeb8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fbeb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbebc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fbebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbec0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fbec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fbec4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fbec4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbec8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fbec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fbecc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fbeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fbed0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fbed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fbed4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fbed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fbed8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fbed8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fbedc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBEDCu;
    {
        const bool branch_taken_0x2fbedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEDCu;
        // 0x2fbee0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbedc) {
            ctx->pc = 0x2FBEECu;
            goto label_2fbeec;
        }
    }
    ctx->pc = 0x2FBEE4u;
    // 0x2fbee4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fbee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fbee8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fbee8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fbeec:
    // 0x2fbeec: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fbeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fbef0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fbef0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbef4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FBEF4u;
    {
        const bool branch_taken_0x2fbef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEF4u;
        // 0x2fbef8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbef4) {
            ctx->pc = 0x2FBEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbeb0;
        }
    }
    ctx->pc = 0x2FBEFCu;
    // 0x2fbefc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBEFCu;
    {
        const bool branch_taken_0x2fbefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEFCu;
        // 0x2fbf00: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbefc) {
            ctx->pc = 0x2FBF0Cu;
            goto label_2fbf0c;
        }
    }
    ctx->pc = 0x2FBF04u;
label_2fbf04:
    // 0x2fbf04: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbf04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf08: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fbf08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fbf0c:
    // 0x2fbf0c: 0x65450004  daddiu      $a1, $t2, 0x4
    ctx->pc = 0x2fbf0cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x2fbf10: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fbf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbf14: 0x28ffe  dsrl32      $s1, $v0, 31
    ctx->pc = 0x2fbf14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x2fbf18: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fbf18u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fbf1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fbf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fbf20: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fbf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fbf24: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fbf24u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fbf28: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fbf28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbf2c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FBF2Cu;
    {
        const bool branch_taken_0x2fbf2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF2Cu;
        // 0x2fbf30: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf2c) {
            ctx->pc = 0x2FBF94u;
            goto label_2fbf94;
        }
    }
    ctx->pc = 0x2FBF34u;
    // 0x2fbf34: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fbf34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fbf38: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbf38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf3c: 0x0  nop
    ctx->pc = 0x2fbf3cu;
    // NOP
label_2fbf40:
    // 0x2fbf40: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fbf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fbf44: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fbf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fbf48: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fbf48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbf4c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fbf4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbf50: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fbf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fbf54: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fbf54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbf58: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fbf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fbf5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fbf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fbf60: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fbf60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fbf64: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fbf64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fbf68: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fbf68u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fbf6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBF6Cu;
    {
        const bool branch_taken_0x2fbf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF6Cu;
        // 0x2fbf70: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf6c) {
            ctx->pc = 0x2FBF7Cu;
            goto label_2fbf7c;
        }
    }
    ctx->pc = 0x2FBF74u;
    // 0x2fbf74: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fbf78: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fbf78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fbf7c:
    // 0x2fbf7c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fbf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fbf80: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fbf80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbf84: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FBF84u;
    {
        const bool branch_taken_0x2fbf84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF84u;
        // 0x2fbf88: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf84) {
            ctx->pc = 0x2FBF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbf40;
        }
    }
    ctx->pc = 0x2FBF8Cu;
    // 0x2fbf8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBF8Cu;
    {
        const bool branch_taken_0x2fbf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF8Cu;
        // 0x2fbf90: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf8c) {
            ctx->pc = 0x2FBF9Cu;
            goto label_2fbf9c;
        }
    }
    ctx->pc = 0x2FBF94u;
label_2fbf94:
    // 0x2fbf94: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbf94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf98: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fbf98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fbf9c:
    // 0x2fbf9c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2fbf9cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fbfa0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fbfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbfa4: 0x2963e  dsrl32      $s2, $v0, 24
    ctx->pc = 0x2fbfa4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> (32 + 24));
    // 0x2fbfa8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fbfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fbfac: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2fbfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2fbfb0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2fbfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2fbfb4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fbfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fbfb8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fbfb8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fbfbc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FBFBCu;
    {
        const bool branch_taken_0x2fbfbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFBCu;
        // 0x2fbfc0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbfbc) {
            ctx->pc = 0x2FC024u;
            goto label_2fc024;
        }
    }
    ctx->pc = 0x2FBFC4u;
    // 0x2fbfc4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fbfc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fbfc8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fbfc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbfcc: 0x0  nop
    ctx->pc = 0x2fbfccu;
    // NOP
label_2fbfd0:
    // 0x2fbfd0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fbfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fbfd4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fbfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fbfd8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fbfd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fbfdc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fbfdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbfe0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fbfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fbfe4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fbfe4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbfe8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fbfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fbfec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fbfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fbff0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fbff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fbff4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fbff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fbff8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fbff8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fbffc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBFFCu;
    {
        const bool branch_taken_0x2fbffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFFCu;
        // 0x2fc000: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbffc) {
            ctx->pc = 0x2FC00Cu;
            goto label_2fc00c;
        }
    }
    ctx->pc = 0x2FC004u;
    // 0x2fc004: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc008: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc00c:
    // 0x2fc00c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc010: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc014: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC014u;
    {
        const bool branch_taken_0x2fc014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC014u;
        // 0x2fc018: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc014) {
            ctx->pc = 0x2FBFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbfd0;
        }
    }
    ctx->pc = 0x2FC01Cu;
    // 0x2fc01c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC01Cu;
    {
        const bool branch_taken_0x2fc01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC01Cu;
        // 0x2fc020: 0x65450008  daddiu      $a1, $t2, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc01c) {
            ctx->pc = 0x2FC02Cu;
            goto label_2fc02c;
        }
    }
    ctx->pc = 0x2FC024u;
label_2fc024:
    // 0x2fc024: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc024u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc028: 0x65450008  daddiu      $a1, $t2, 0x8
    ctx->pc = 0x2fc028u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
label_2fc02c:
    // 0x2fc02c: 0x5c03c  dsll32      $t8, $a1, 0
    ctx->pc = 0x2fc02cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fc030: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x2fc030u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x2fc034: 0x11600103  beqz        $t3, . + 4 + (0x103 << 2)
    ctx->pc = 0x2FC034u;
    {
        const bool branch_taken_0x2fc034 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC034u;
        // 0x2fc038: 0xfce50008  sd          $a1, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc034) {
            ctx->pc = 0x2FC444u;
            goto label_2fc444;
        }
    }
    ctx->pc = 0x2FC03Cu;
    // 0x2fc03c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc03cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc040: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc044: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x2fc044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x2fc048: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2fc048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2fc04c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc04cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc050: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc050u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc054: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC054u;
    {
        const bool branch_taken_0x2fc054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC054u;
        // 0x2fc058: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc054) {
            ctx->pc = 0x2FC0BCu;
            goto label_2fc0bc;
        }
    }
    ctx->pc = 0x2FC05Cu;
    // 0x2fc05c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc05cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc060: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc060u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc064: 0x0  nop
    ctx->pc = 0x2fc064u;
    // NOP
label_2fc068:
    // 0x2fc068: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc06c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc070: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc070u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc074: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc078: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc07c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc07cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc080: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc084: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc088: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc08c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc08cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc090: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc090u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc094: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC094u;
    {
        const bool branch_taken_0x2fc094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC094u;
        // 0x2fc098: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc094) {
            ctx->pc = 0x2FC0A4u;
            goto label_2fc0a4;
        }
    }
    ctx->pc = 0x2FC09Cu;
    // 0x2fc09c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc0a0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc0a4:
    // 0x2fc0a4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc0a8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc0a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc0ac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC0ACu;
    {
        const bool branch_taken_0x2fc0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0ACu;
        // 0x2fc0b0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc0ac) {
            ctx->pc = 0x2FC068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc068;
        }
    }
    ctx->pc = 0x2FC0B4u;
    // 0x2fc0b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC0B4u;
    {
        const bool branch_taken_0x2fc0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0B4u;
        // 0x2fc0b8: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc0b4) {
            ctx->pc = 0x2FC0C4u;
            goto label_2fc0c4;
        }
    }
    ctx->pc = 0x2FC0BCu;
label_2fc0bc:
    // 0x2fc0bc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc0bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc0c0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc0c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fc0c4:
    // 0x2fc0c4: 0x65480004  daddiu      $t0, $t2, 0x4
    ctx->pc = 0x2fc0c4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x2fc0c8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc0cc: 0x22f7e  dsrl32      $a1, $v0, 29
    ctx->pc = 0x2fc0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x2fc0d0: 0xfce80008  sd          $t0, 0x8($a3)
    ctx->pc = 0x2fc0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 8));
    // 0x2fc0d4: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x2fc0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x2fc0d8: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x2fc0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x2fc0dc: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc0e0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc0e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc0e4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FC0E4u;
    {
        const bool branch_taken_0x2fc0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0E4u;
        // 0x2fc0e8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc0e4) {
            ctx->pc = 0x2FC154u;
            goto label_2fc154;
        }
    }
    ctx->pc = 0x2FC0ECu;
    // 0x2fc0ec: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc0ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc0f0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2fc0f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc0f4: 0x56882  srl         $t5, $a1, 2
    ctx->pc = 0x2fc0f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x2fc0f8: 0x56780  sll         $t4, $a1, 30
    ctx->pc = 0x2fc0f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x2fc0fc: 0x0  nop
    ctx->pc = 0x2fc0fcu;
    // NOP
label_2fc100:
    // 0x2fc100: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc104: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc108: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc10c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc10cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc110: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc114: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc114u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc118: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc11c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc120: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc124: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc128: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc128u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc12c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC12Cu;
    {
        const bool branch_taken_0x2fc12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC12Cu;
        // 0x2fc130: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc12c) {
            ctx->pc = 0x2FC13Cu;
            goto label_2fc13c;
        }
    }
    ctx->pc = 0x2FC134u;
    // 0x2fc134: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc138: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc138u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc13c:
    // 0x2fc13c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc140: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc140u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc144: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC144u;
    {
        const bool branch_taken_0x2fc144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC144u;
        // 0x2fc148: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc144) {
            ctx->pc = 0x2FC100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc100;
        }
    }
    ctx->pc = 0x2FC14Cu;
    // 0x2fc14c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC14Cu;
    {
        const bool branch_taken_0x2fc14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC14Cu;
        // 0x2fc150: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc14c) {
            ctx->pc = 0x2FC164u;
            goto label_2fc164;
        }
    }
    ctx->pc = 0x2FC154u;
label_2fc154:
    // 0x2fc154: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2fc154u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc158: 0x56882  srl         $t5, $a1, 2
    ctx->pc = 0x2fc158u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x2fc15c: 0x56780  sll         $t4, $a1, 30
    ctx->pc = 0x2fc15cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x2fc160: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc160u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fc164:
    // 0x2fc164: 0x65450003  daddiu      $a1, $t2, 0x3
    ctx->pc = 0x2fc164u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)3);
    // 0x2fc168: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc16c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fc16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fc170: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fc170u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fc174: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fc174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fc178: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc178u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc17c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc17cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc180: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FC180u;
    {
        const bool branch_taken_0x2fc180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC180u;
        // 0x2fc184: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc180) {
            ctx->pc = 0x2FC1E4u;
            goto label_2fc1e4;
        }
    }
    ctx->pc = 0x2FC188u;
    // 0x2fc188: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc188u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc18c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc18cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fc190:
    // 0x2fc190: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc194: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc198: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc198u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc19c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc19cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc1a0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc1a4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc1a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc1a8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc1ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc1b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc1b4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc1b8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc1bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC1BCu;
    {
        const bool branch_taken_0x2fc1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1BCu;
        // 0x2fc1c0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc1bc) {
            ctx->pc = 0x2FC1CCu;
            goto label_2fc1cc;
        }
    }
    ctx->pc = 0x2FC1C4u;
    // 0x2fc1c4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc1c8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc1cc:
    // 0x2fc1cc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc1d0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc1d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc1d4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC1D4u;
    {
        const bool branch_taken_0x2fc1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1D4u;
        // 0x2fc1d8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc1d4) {
            ctx->pc = 0x2FC190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc190;
        }
    }
    ctx->pc = 0x2FC1DCu;
    // 0x2fc1dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC1DCu;
    {
        const bool branch_taken_0x2fc1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1DCu;
        // 0x2fc1e0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc1dc) {
            ctx->pc = 0x2FC1ECu;
            goto label_2fc1ec;
        }
    }
    ctx->pc = 0x2FC1E4u;
label_2fc1e4:
    // 0x2fc1e4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc1e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc1e8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc1e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fc1ec:
    // 0x2fc1ec: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2fc1ecu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fc1f0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc1f4: 0x2447e  dsrl32      $t0, $v0, 17
    ctx->pc = 0x2fc1f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x2fc1f8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fc1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fc1fc: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x2fc1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x2fc200: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x2fc200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x2fc204: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc204u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc208: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc208u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc20c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC20Cu;
    {
        const bool branch_taken_0x2fc20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC20Cu;
        // 0x2fc210: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc20c) {
            ctx->pc = 0x2FC274u;
            goto label_2fc274;
        }
    }
    ctx->pc = 0x2FC214u;
    // 0x2fc214: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc214u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc218: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc218u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc21c: 0x85bc0  sll         $t3, $t0, 15
    ctx->pc = 0x2fc21cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
label_2fc220:
    // 0x2fc220: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc224: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc228: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc228u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc22c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc22cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc230: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc234: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc234u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc238: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc23c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc240: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc244: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc248: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc248u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc24c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC24Cu;
    {
        const bool branch_taken_0x2fc24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC24Cu;
        // 0x2fc250: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc24c) {
            ctx->pc = 0x2FC25Cu;
            goto label_2fc25c;
        }
    }
    ctx->pc = 0x2FC254u;
    // 0x2fc254: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc258: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc258u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc25c:
    // 0x2fc25c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc260: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc264: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC264u;
    {
        const bool branch_taken_0x2fc264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC264u;
        // 0x2fc268: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc264) {
            ctx->pc = 0x2FC220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc220;
        }
    }
    ctx->pc = 0x2FC26Cu;
    // 0x2fc26c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC26Cu;
    {
        const bool branch_taken_0x2fc26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC26Cu;
        // 0x2fc270: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc26c) {
            ctx->pc = 0x2FC280u;
            goto label_2fc280;
        }
    }
    ctx->pc = 0x2FC274u;
label_2fc274:
    // 0x2fc274: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc274u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc278: 0x85bc0  sll         $t3, $t0, 15
    ctx->pc = 0x2fc278u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x2fc27c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc27cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fc280:
    // 0x2fc280: 0x6545000f  daddiu      $a1, $t2, 0xF
    ctx->pc = 0x2fc280u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)15);
    // 0x2fc284: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc288: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fc288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fc28c: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fc28cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fc290: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fc290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fc294: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc294u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc298: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc298u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc29c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC29Cu;
    {
        const bool branch_taken_0x2fc29c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC29Cu;
        // 0x2fc2a0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc29c) {
            ctx->pc = 0x2FC304u;
            goto label_2fc304;
        }
    }
    ctx->pc = 0x2FC2A4u;
    // 0x2fc2a4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc2a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc2a8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc2a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc2ac: 0x0  nop
    ctx->pc = 0x2fc2acu;
    // NOP
label_2fc2b0:
    // 0x2fc2b0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc2b4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc2b8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc2bc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc2bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc2c0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc2c4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc2c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc2c8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc2cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc2d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc2d4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc2d8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc2dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC2DCu;
    {
        const bool branch_taken_0x2fc2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2DCu;
        // 0x2fc2e0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc2dc) {
            ctx->pc = 0x2FC2ECu;
            goto label_2fc2ec;
        }
    }
    ctx->pc = 0x2FC2E4u;
    // 0x2fc2e4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc2e8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc2ec:
    // 0x2fc2ec: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc2f0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc2f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc2f4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC2F4u;
    {
        const bool branch_taken_0x2fc2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2F4u;
        // 0x2fc2f8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc2f4) {
            ctx->pc = 0x2FC2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc2b0;
        }
    }
    ctx->pc = 0x2FC2FCu;
    // 0x2fc2fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC2FCu;
    {
        const bool branch_taken_0x2fc2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2FCu;
        // 0x2fc300: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc2fc) {
            ctx->pc = 0x2FC30Cu;
            goto label_2fc30c;
        }
    }
    ctx->pc = 0x2FC304u;
label_2fc304:
    // 0x2fc304: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc304u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc308: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc308u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fc30c:
    // 0x2fc30c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2fc30cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fc310: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc314: 0x2747e  dsrl32      $t6, $v0, 17
    ctx->pc = 0x2fc314u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x2fc318: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fc318u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fc31c: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x2fc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x2fc320: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x2fc320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x2fc324: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc324u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc328: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc328u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc32c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC32Cu;
    {
        const bool branch_taken_0x2fc32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC32Cu;
        // 0x2fc330: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc32c) {
            ctx->pc = 0x2FC394u;
            goto label_2fc394;
        }
    }
    ctx->pc = 0x2FC334u;
    // 0x2fc334: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc334u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc338: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc338u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc33c: 0x0  nop
    ctx->pc = 0x2fc33cu;
    // NOP
label_2fc340:
    // 0x2fc340: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc344: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc348: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc34c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc34cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc350: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc354: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc354u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc358: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc35c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc360: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc364: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc368: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc368u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc36c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC36Cu;
    {
        const bool branch_taken_0x2fc36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC36Cu;
        // 0x2fc370: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc36c) {
            ctx->pc = 0x2FC37Cu;
            goto label_2fc37c;
        }
    }
    ctx->pc = 0x2FC374u;
    // 0x2fc374: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc378: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc378u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc37c:
    // 0x2fc37c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc380: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc380u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc384: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC384u;
    {
        const bool branch_taken_0x2fc384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC384u;
        // 0x2fc388: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc384) {
            ctx->pc = 0x2FC340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc340;
        }
    }
    ctx->pc = 0x2FC38Cu;
    // 0x2fc38c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC38Cu;
    {
        const bool branch_taken_0x2fc38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC38Cu;
        // 0x2fc390: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc38c) {
            ctx->pc = 0x2FC39Cu;
            goto label_2fc39c;
        }
    }
    ctx->pc = 0x2FC394u;
label_2fc394:
    // 0x2fc394: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc398: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc398u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fc39c:
    // 0x2fc39c: 0x6545000f  daddiu      $a1, $t2, 0xF
    ctx->pc = 0x2fc39cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)15);
    // 0x2fc3a0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc3a4: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fc3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fc3a8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fc3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fc3ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fc3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fc3b0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc3b4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc3b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc3b8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FC3B8u;
    {
        const bool branch_taken_0x2fc3b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3B8u;
        // 0x2fc3bc: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc3b8) {
            ctx->pc = 0x2FC41Cu;
            goto label_2fc41c;
        }
    }
    ctx->pc = 0x2FC3C0u;
    // 0x2fc3c0: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc3c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc3c4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc3c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fc3c8:
    // 0x2fc3c8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc3cc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc3d0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc3d4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc3d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc3d8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc3dc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc3dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc3e0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc3e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc3e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc3e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc3ec: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc3ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc3f0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc3f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC3F4u;
    {
        const bool branch_taken_0x2fc3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3F4u;
        // 0x2fc3f8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc3f4) {
            ctx->pc = 0x2FC404u;
            goto label_2fc404;
        }
    }
    ctx->pc = 0x2FC3FCu;
    // 0x2fc3fc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc400: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc404:
    // 0x2fc404: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc408: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc40c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC40Cu;
    {
        const bool branch_taken_0x2fc40c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC40Cu;
        // 0x2fc410: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc40c) {
            ctx->pc = 0x2FC3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc3c8;
        }
    }
    ctx->pc = 0x2FC414u;
    // 0x2fc414: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC414u;
    {
        const bool branch_taken_0x2fc414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC414u;
        // 0x2fc418: 0x18b1025  or          $v0, $t4, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc414) {
            ctx->pc = 0x2FC424u;
            goto label_2fc424;
        }
    }
    ctx->pc = 0x2FC41Cu;
label_2fc41c:
    // 0x2fc41c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc41cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc420: 0x18b1025  or          $v0, $t4, $t3
    ctx->pc = 0x2fc420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_2fc424:
    // 0x2fc424: 0x65440001  daddiu      $a0, $t2, 0x1
    ctx->pc = 0x2fc424u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fc428: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x2fc428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x2fc42c: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x2fc42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2fc430: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fc430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fc434: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x2fc434u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x2fc438: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fc438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fc43c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2fc43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2fc440: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x2fc440u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_2fc444:
    // 0x2fc444: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fc444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fc448: 0x15e20103  bne         $t7, $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x2FC448u;
    {
        const bool branch_taken_0x2fc448 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC448u;
        // 0x2fc44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc448) {
            ctx->pc = 0x2FC858u;
            goto label_2fc858;
        }
    }
    ctx->pc = 0x2FC450u;
    // 0x2fc450: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc450u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc454: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc458: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x2fc458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x2fc45c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2fc45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2fc460: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc460u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc464: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc464u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc468: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FC468u;
    {
        const bool branch_taken_0x2fc468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC468u;
        // 0x2fc46c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc468) {
            ctx->pc = 0x2FC4CCu;
            goto label_2fc4cc;
        }
    }
    ctx->pc = 0x2FC470u;
    // 0x2fc470: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc470u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc474: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fc474u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_2fc478:
    // 0x2fc478: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc47c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc480: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc480u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc484: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc488: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc48c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc48cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc490: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc494: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc498: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc49c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc49cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc4a0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc4a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC4A4u;
    {
        const bool branch_taken_0x2fc4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC4A4u;
        // 0x2fc4a8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc4a4) {
            ctx->pc = 0x2FC4B4u;
            goto label_2fc4b4;
        }
    }
    ctx->pc = 0x2FC4ACu;
    // 0x2fc4ac: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc4b0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc4b4:
    // 0x2fc4b4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc4b8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc4b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc4bc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC4BCu;
    {
        const bool branch_taken_0x2fc4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC4BCu;
        // 0x2fc4c0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc4bc) {
            ctx->pc = 0x2FC478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc478;
        }
    }
    ctx->pc = 0x2FC4C4u;
    // 0x2fc4c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC4C4u;
    {
        const bool branch_taken_0x2fc4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC4C4u;
        // 0x2fc4c8: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc4c4) {
            ctx->pc = 0x2FC4D4u;
            goto label_2fc4d4;
        }
    }
    ctx->pc = 0x2FC4CCu;
label_2fc4cc:
    // 0x2fc4cc: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fc4ccu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fc4d0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc4d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fc4d4:
    // 0x2fc4d4: 0x65480004  daddiu      $t0, $t2, 0x4
    ctx->pc = 0x2fc4d4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x2fc4d8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc4dc: 0x22f7e  dsrl32      $a1, $v0, 29
    ctx->pc = 0x2fc4dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x2fc4e0: 0xfce80008  sd          $t0, 0x8($a3)
    ctx->pc = 0x2fc4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 8));
    // 0x2fc4e4: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x2fc4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x2fc4e8: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x2fc4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x2fc4ec: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc4f0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc4f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc4f4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FC4F4u;
    {
        const bool branch_taken_0x2fc4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC4F4u;
        // 0x2fc4f8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc4f4) {
            ctx->pc = 0x2FC564u;
            goto label_2fc564;
        }
    }
    ctx->pc = 0x2FC4FCu;
    // 0x2fc4fc: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc500: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2fc500u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc504: 0x56882  srl         $t5, $a1, 2
    ctx->pc = 0x2fc504u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x2fc508: 0x56780  sll         $t4, $a1, 30
    ctx->pc = 0x2fc508u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x2fc50c: 0x0  nop
    ctx->pc = 0x2fc50cu;
    // NOP
label_2fc510:
    // 0x2fc510: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc514: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc518: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc518u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc51c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc51cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc520: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc520u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc524: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc524u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc528: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc52c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc530: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc534: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc538: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc538u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc53c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC53Cu;
    {
        const bool branch_taken_0x2fc53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC53Cu;
        // 0x2fc540: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc53c) {
            ctx->pc = 0x2FC54Cu;
            goto label_2fc54c;
        }
    }
    ctx->pc = 0x2FC544u;
    // 0x2fc544: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc548: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc548u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc54c:
    // 0x2fc54c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc550: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc550u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc554: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC554u;
    {
        const bool branch_taken_0x2fc554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC554u;
        // 0x2fc558: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc554) {
            ctx->pc = 0x2FC510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc510;
        }
    }
    ctx->pc = 0x2FC55Cu;
    // 0x2fc55c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC55Cu;
    {
        const bool branch_taken_0x2fc55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC55Cu;
        // 0x2fc560: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc55c) {
            ctx->pc = 0x2FC574u;
            goto label_2fc574;
        }
    }
    ctx->pc = 0x2FC564u;
label_2fc564:
    // 0x2fc564: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2fc564u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc568: 0x56882  srl         $t5, $a1, 2
    ctx->pc = 0x2fc568u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x2fc56c: 0x56780  sll         $t4, $a1, 30
    ctx->pc = 0x2fc56cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x2fc570: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc570u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fc574:
    // 0x2fc574: 0x65450003  daddiu      $a1, $t2, 0x3
    ctx->pc = 0x2fc574u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)3);
    // 0x2fc578: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc57c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fc57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fc580: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fc580u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fc584: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fc584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fc588: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc588u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc58c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc58cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc590: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FC590u;
    {
        const bool branch_taken_0x2fc590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC590u;
        // 0x2fc594: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc590) {
            ctx->pc = 0x2FC5F4u;
            goto label_2fc5f4;
        }
    }
    ctx->pc = 0x2FC598u;
    // 0x2fc598: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc598u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc59c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc59cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fc5a0:
    // 0x2fc5a0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc5a4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc5a8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc5ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc5acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc5b0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc5b4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc5b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc5b8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc5bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc5c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc5c4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc5c8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc5cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC5CCu;
    {
        const bool branch_taken_0x2fc5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC5CCu;
        // 0x2fc5d0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc5cc) {
            ctx->pc = 0x2FC5DCu;
            goto label_2fc5dc;
        }
    }
    ctx->pc = 0x2FC5D4u;
    // 0x2fc5d4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc5d8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc5dc:
    // 0x2fc5dc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc5e0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc5e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc5e4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC5E4u;
    {
        const bool branch_taken_0x2fc5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC5E4u;
        // 0x2fc5e8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc5e4) {
            ctx->pc = 0x2FC5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc5a0;
        }
    }
    ctx->pc = 0x2FC5ECu;
    // 0x2fc5ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC5ECu;
    {
        const bool branch_taken_0x2fc5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC5ECu;
        // 0x2fc5f0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc5ec) {
            ctx->pc = 0x2FC5FCu;
            goto label_2fc5fc;
        }
    }
    ctx->pc = 0x2FC5F4u;
label_2fc5f4:
    // 0x2fc5f4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc5f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc5f8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc5f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fc5fc:
    // 0x2fc5fc: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2fc5fcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fc600: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc604: 0x2447e  dsrl32      $t0, $v0, 17
    ctx->pc = 0x2fc604u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x2fc608: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fc608u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fc60c: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x2fc60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x2fc610: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x2fc610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x2fc614: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc614u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc618: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc618u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc61c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC61Cu;
    {
        const bool branch_taken_0x2fc61c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC61Cu;
        // 0x2fc620: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc61c) {
            ctx->pc = 0x2FC684u;
            goto label_2fc684;
        }
    }
    ctx->pc = 0x2FC624u;
    // 0x2fc624: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc624u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc628: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc628u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc62c: 0x85bc0  sll         $t3, $t0, 15
    ctx->pc = 0x2fc62cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
label_2fc630:
    // 0x2fc630: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc634: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc638: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc638u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc63c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc640: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc640u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc644: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc644u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc648: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc64c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc650: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc654: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc658: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc658u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc65c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC65Cu;
    {
        const bool branch_taken_0x2fc65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC65Cu;
        // 0x2fc660: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc65c) {
            ctx->pc = 0x2FC66Cu;
            goto label_2fc66c;
        }
    }
    ctx->pc = 0x2FC664u;
    // 0x2fc664: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc668: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc668u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc66c:
    // 0x2fc66c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc670: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc670u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc674: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC674u;
    {
        const bool branch_taken_0x2fc674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC674u;
        // 0x2fc678: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc674) {
            ctx->pc = 0x2FC630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc630;
        }
    }
    ctx->pc = 0x2FC67Cu;
    // 0x2fc67c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC67Cu;
    {
        const bool branch_taken_0x2fc67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC67Cu;
        // 0x2fc680: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc67c) {
            ctx->pc = 0x2FC690u;
            goto label_2fc690;
        }
    }
    ctx->pc = 0x2FC684u;
label_2fc684:
    // 0x2fc684: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc684u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc688: 0x85bc0  sll         $t3, $t0, 15
    ctx->pc = 0x2fc688u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x2fc68c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc68cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fc690:
    // 0x2fc690: 0x6545000f  daddiu      $a1, $t2, 0xF
    ctx->pc = 0x2fc690u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)15);
    // 0x2fc694: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc698: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fc698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fc69c: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fc69cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fc6a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fc6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fc6a4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc6a8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc6a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc6ac: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC6ACu;
    {
        const bool branch_taken_0x2fc6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6ACu;
        // 0x2fc6b0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc6ac) {
            ctx->pc = 0x2FC714u;
            goto label_2fc714;
        }
    }
    ctx->pc = 0x2FC6B4u;
    // 0x2fc6b4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc6b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc6b8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc6b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc6bc: 0x0  nop
    ctx->pc = 0x2fc6bcu;
    // NOP
label_2fc6c0:
    // 0x2fc6c0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc6c4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc6c8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc6cc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc6d0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc6d4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc6d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc6d8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc6dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc6e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc6e4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc6e8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc6ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC6ECu;
    {
        const bool branch_taken_0x2fc6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC6ECu;
        // 0x2fc6f0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc6ec) {
            ctx->pc = 0x2FC6FCu;
            goto label_2fc6fc;
        }
    }
    ctx->pc = 0x2FC6F4u;
    // 0x2fc6f4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc6f8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc6fc:
    // 0x2fc6fc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc700: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc704: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC704u;
    {
        const bool branch_taken_0x2fc704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC704u;
        // 0x2fc708: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc704) {
            ctx->pc = 0x2FC6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc6c0;
        }
    }
    ctx->pc = 0x2FC70Cu;
    // 0x2fc70c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC70Cu;
    {
        const bool branch_taken_0x2fc70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC70Cu;
        // 0x2fc710: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc70c) {
            ctx->pc = 0x2FC71Cu;
            goto label_2fc71c;
        }
    }
    ctx->pc = 0x2FC714u;
label_2fc714:
    // 0x2fc714: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc714u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc718: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc718u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fc71c:
    // 0x2fc71c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2fc71cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fc720: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc724: 0x2747e  dsrl32      $t6, $v0, 17
    ctx->pc = 0x2fc724u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x2fc728: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fc728u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fc72c: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x2fc72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x2fc730: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x2fc730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x2fc734: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc734u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc738: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc738u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc73c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC73Cu;
    {
        const bool branch_taken_0x2fc73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC73Cu;
        // 0x2fc740: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc73c) {
            ctx->pc = 0x2FC7A4u;
            goto label_2fc7a4;
        }
    }
    ctx->pc = 0x2FC744u;
    // 0x2fc744: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc744u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc748: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc748u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc74c: 0x0  nop
    ctx->pc = 0x2fc74cu;
    // NOP
label_2fc750:
    // 0x2fc750: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc754: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc758: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc758u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc75c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc75cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc760: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc760u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc764: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc764u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc768: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc76c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc770: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc774: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc778: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc778u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc77c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC77Cu;
    {
        const bool branch_taken_0x2fc77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC77Cu;
        // 0x2fc780: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc77c) {
            ctx->pc = 0x2FC78Cu;
            goto label_2fc78c;
        }
    }
    ctx->pc = 0x2FC784u;
    // 0x2fc784: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc788: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc788u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc78c:
    // 0x2fc78c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc790: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc794: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC794u;
    {
        const bool branch_taken_0x2fc794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC794u;
        // 0x2fc798: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc794) {
            ctx->pc = 0x2FC750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc750;
        }
    }
    ctx->pc = 0x2FC79Cu;
    // 0x2fc79c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC79Cu;
    {
        const bool branch_taken_0x2fc79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC79Cu;
        // 0x2fc7a0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc79c) {
            ctx->pc = 0x2FC7ACu;
            goto label_2fc7ac;
        }
    }
    ctx->pc = 0x2FC7A4u;
label_2fc7a4:
    // 0x2fc7a4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc7a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc7a8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc7a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fc7ac:
    // 0x2fc7ac: 0x6545000f  daddiu      $a1, $t2, 0xF
    ctx->pc = 0x2fc7acu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)15);
    // 0x2fc7b0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc7b4: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fc7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fc7b8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fc7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fc7bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fc7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fc7c0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc7c4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc7c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc7c8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FC7C8u;
    {
        const bool branch_taken_0x2fc7c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7C8u;
        // 0x2fc7cc: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc7c8) {
            ctx->pc = 0x2FC82Cu;
            goto label_2fc82c;
        }
    }
    ctx->pc = 0x2FC7D0u;
    // 0x2fc7d0: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc7d4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc7d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fc7d8:
    // 0x2fc7d8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc7dc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc7e0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc7e4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc7e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc7e8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc7ec: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc7ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc7f0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc7f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc7f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc7fc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc7fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc800: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc800u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC804u;
    {
        const bool branch_taken_0x2fc804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC804u;
        // 0x2fc808: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc804) {
            ctx->pc = 0x2FC814u;
            goto label_2fc814;
        }
    }
    ctx->pc = 0x2FC80Cu;
    // 0x2fc80c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc810: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc810u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc814:
    // 0x2fc814: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc818: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc818u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc81c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC81Cu;
    {
        const bool branch_taken_0x2fc81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC81Cu;
        // 0x2fc820: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc81c) {
            ctx->pc = 0x2FC7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc7d8;
        }
    }
    ctx->pc = 0x2FC824u;
    // 0x2fc824: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC824u;
    {
        const bool branch_taken_0x2fc824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC824u;
        // 0x2fc828: 0x18b1025  or          $v0, $t4, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc824) {
            ctx->pc = 0x2FC834u;
            goto label_2fc834;
        }
    }
    ctx->pc = 0x2FC82Cu;
label_2fc82c:
    // 0x2fc82c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fc82cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc830: 0x18b1025  or          $v0, $t4, $t3
    ctx->pc = 0x2fc830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_2fc834:
    // 0x2fc834: 0x65440001  daddiu      $a0, $t2, 0x1
    ctx->pc = 0x2fc834u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fc838: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x2fc838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x2fc83c: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x2fc83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2fc840: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fc840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fc844: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x2fc844u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x2fc848: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fc848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fc84c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2fc84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2fc850: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x2fc850u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x2fc854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fc854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fc858:
    // 0x2fc858: 0x16020023  bne         $s0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2FC858u;
    {
        const bool branch_taken_0x2fc858 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fc858) {
            ctx->pc = 0x2FC8E8u;
            goto label_2fc8e8;
        }
    }
    ctx->pc = 0x2FC860u;
    // 0x2fc860: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc860u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc864: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc868: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2fc868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2fc86c: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2fc86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2fc870: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc870u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc874: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc874u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc878: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FC878u;
    {
        const bool branch_taken_0x2fc878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC878u;
        // 0x2fc87c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc878) {
            ctx->pc = 0x2FC8DCu;
            goto label_2fc8dc;
        }
    }
    ctx->pc = 0x2FC880u;
    // 0x2fc880: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc880u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc884: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fc884u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_2fc888:
    // 0x2fc888: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc88c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc890: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc890u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc894: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc898: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc898u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc89c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc89cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc8a0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc8a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc8a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc8a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc8ac: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc8acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc8b0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc8b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC8B4u;
    {
        const bool branch_taken_0x2fc8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8B4u;
        // 0x2fc8b8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc8b4) {
            ctx->pc = 0x2FC8C4u;
            goto label_2fc8c4;
        }
    }
    ctx->pc = 0x2FC8BCu;
    // 0x2fc8bc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc8c0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc8c4:
    // 0x2fc8c4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc8c8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc8c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc8cc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC8CCu;
    {
        const bool branch_taken_0x2fc8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8CCu;
        // 0x2fc8d0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc8cc) {
            ctx->pc = 0x2FC888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc888;
        }
    }
    ctx->pc = 0x2FC8D4u;
    // 0x2fc8d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC8D4u;
    {
        const bool branch_taken_0x2fc8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8D4u;
        // 0x2fc8d8: 0x65420030  daddiu      $v0, $t2, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc8d4) {
            ctx->pc = 0x2FC8E4u;
            goto label_2fc8e4;
        }
    }
    ctx->pc = 0x2FC8DCu;
label_2fc8dc:
    // 0x2fc8dc: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fc8dcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fc8e0: 0x65420030  daddiu      $v0, $t2, 0x30
    ctx->pc = 0x2fc8e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)48);
label_2fc8e4:
    // 0x2fc8e4: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2fc8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_2fc8e8:
    // 0x2fc8e8: 0x13200026  beqz        $t9, . + 4 + (0x26 << 2)
    ctx->pc = 0x2FC8E8u;
    {
        const bool branch_taken_0x2fc8e8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8E8u;
        // 0x2fc8ec: 0x3b92021  addu        $a0, $sp, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc8e8) {
            ctx->pc = 0x2FC984u;
            goto label_2fc984;
        }
    }
    ctx->pc = 0x2FC8F0u;
    // 0x2fc8f0: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x2fc8f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc8f4: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x2fc8f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc8f8: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2fc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc8fc: 0xa31814  dsllv       $v1, $v1, $a1
    ctx->pc = 0x2fc8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x2fc900: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2fc900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2fc904: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x2fc904u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x2fc908: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x2fc908u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc90c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC90Cu;
    {
        const bool branch_taken_0x2fc90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC90Cu;
        // 0x2fc910: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc90c) {
            ctx->pc = 0x2FC974u;
            goto label_2fc974;
        }
    }
    ctx->pc = 0x2FC914u;
    // 0x2fc914: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc914u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc918: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2fc918u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc91c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fc91cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_2fc920:
    // 0x2fc920: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc924: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc928: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc928u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc92c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc92cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc930: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc930u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc934: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc934u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc938: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc93c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc940: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc944: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc948: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc948u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc94c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC94Cu;
    {
        const bool branch_taken_0x2fc94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC94Cu;
        // 0x2fc950: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc94c) {
            ctx->pc = 0x2FC95Cu;
            goto label_2fc95c;
        }
    }
    ctx->pc = 0x2FC954u;
    // 0x2fc954: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc958: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc958u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc95c:
    // 0x2fc95c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fc960: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fc960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc964: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FC964u;
    {
        const bool branch_taken_0x2fc964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC964u;
        // 0x2fc968: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc964) {
            ctx->pc = 0x2FC920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc920;
        }
    }
    ctx->pc = 0x2FC96Cu;
    // 0x2fc96c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC96Cu;
    {
        const bool branch_taken_0x2fc96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC96Cu;
        // 0x2fc970: 0x14b102d  daddu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc96c) {
            ctx->pc = 0x2FC980u;
            goto label_2fc980;
        }
    }
    ctx->pc = 0x2FC974u;
label_2fc974:
    // 0x2fc974: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fc974u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fc978: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2fc978u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc97c: 0x14b102d  daddu       $v0, $t2, $t3
    ctx->pc = 0x2fc97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 11));
label_2fc980:
    // 0x2fc980: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2fc980u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_2fc984:
    // 0x2fc984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fc984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc988: 0x1622020a  bne         $s1, $v0, . + 4 + (0x20A << 2)
    ctx->pc = 0x2FC988u;
    {
        const bool branch_taken_0x2fc988 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC988u;
        // 0x2fc98c: 0x300702d  daddu       $t6, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc988) {
            ctx->pc = 0x2FD1B4u;
            goto label_2fd1b4;
        }
    }
    ctx->pc = 0x2FC990u;
    // 0x2fc990: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fc990u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc994: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fc994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc998: 0x25ffe  dsrl32      $t3, $v0, 31
    ctx->pc = 0x2fc998u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x2fc99c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fc99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fc9a0: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fc9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fc9a4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fc9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fc9a8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fc9a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fc9ac: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC9ACu;
    {
        const bool branch_taken_0x2fc9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9ACu;
        // 0x2fc9b0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9ac) {
            ctx->pc = 0x2FCA14u;
            goto label_2fca14;
        }
    }
    ctx->pc = 0x2FC9B4u;
    // 0x2fc9b4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fc9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fc9b8: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fc9b8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fc9bc: 0x0  nop
    ctx->pc = 0x2fc9bcu;
    // NOP
label_2fc9c0:
    // 0x2fc9c0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fc9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fc9c4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fc9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fc9c8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fc9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fc9cc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fc9ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc9d0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fc9d4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fc9d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc9d8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fc9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fc9dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc9e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fc9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fc9e4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fc9e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fc9e8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fc9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fc9ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC9ECu;
    {
        const bool branch_taken_0x2fc9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9ECu;
        // 0x2fc9f0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9ec) {
            ctx->pc = 0x2FC9FCu;
            goto label_2fc9fc;
        }
    }
    ctx->pc = 0x2FC9F4u;
    // 0x2fc9f4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fc9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fc9f8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fc9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fc9fc:
    // 0x2fc9fc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fca00: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fca00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fca04: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FCA04u;
    {
        const bool branch_taken_0x2fca04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA04u;
        // 0x2fca08: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca04) {
            ctx->pc = 0x2FC9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc9c0;
        }
    }
    ctx->pc = 0x2FCA0Cu;
    // 0x2fca0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCA0Cu;
    {
        const bool branch_taken_0x2fca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA0Cu;
        // 0x2fca10: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca0c) {
            ctx->pc = 0x2FCA1Cu;
            goto label_2fca1c;
        }
    }
    ctx->pc = 0x2FCA14u;
label_2fca14:
    // 0x2fca14: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fca14u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fca18: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fca18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fca1c:
    // 0x2fca1c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2fca1cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fca20: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fca20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fca24: 0x277fe  dsrl32      $t6, $v0, 31
    ctx->pc = 0x2fca24u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x2fca28: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fca28u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fca2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fca30: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fca30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fca34: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fca34u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fca38: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fca38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fca3c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FCA3Cu;
    {
        const bool branch_taken_0x2fca3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA3Cu;
        // 0x2fca40: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca3c) {
            ctx->pc = 0x2FCAA4u;
            goto label_2fcaa4;
        }
    }
    ctx->pc = 0x2FCA44u;
    // 0x2fca44: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fca44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fca48: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fca48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fca4c: 0x0  nop
    ctx->pc = 0x2fca4cu;
    // NOP
label_2fca50:
    // 0x2fca50: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fca50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fca54: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fca58: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fca58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fca5c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fca5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fca60: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fca60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fca64: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fca64u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fca68: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fca68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fca6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fca6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fca70: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fca70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fca74: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fca74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fca78: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fca78u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fca7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCA7Cu;
    {
        const bool branch_taken_0x2fca7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA7Cu;
        // 0x2fca80: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca7c) {
            ctx->pc = 0x2FCA8Cu;
            goto label_2fca8c;
        }
    }
    ctx->pc = 0x2FCA84u;
    // 0x2fca84: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fca88: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fca88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fca8c:
    // 0x2fca8c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fca90: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fca90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fca94: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FCA94u;
    {
        const bool branch_taken_0x2fca94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA94u;
        // 0x2fca98: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca94) {
            ctx->pc = 0x2FCA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fca50;
        }
    }
    ctx->pc = 0x2FCA9Cu;
    // 0x2fca9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCA9Cu;
    {
        const bool branch_taken_0x2fca9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA9Cu;
        // 0x2fcaa0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca9c) {
            ctx->pc = 0x2FCAACu;
            goto label_2fcaac;
        }
    }
    ctx->pc = 0x2FCAA4u;
label_2fcaa4:
    // 0x2fcaa4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fcaa4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcaa8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fcaa8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fcaac:
    // 0x2fcaac: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2fcaacu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fcab0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fcab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcab4: 0x26ffe  dsrl32      $t5, $v0, 31
    ctx->pc = 0x2fcab4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x2fcab8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fcab8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fcabc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fcabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fcac0: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fcac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fcac4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fcac4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fcac8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fcac8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcacc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FCACCu;
    {
        const bool branch_taken_0x2fcacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCACCu;
        // 0x2fcad0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcacc) {
            ctx->pc = 0x2FCB34u;
            goto label_2fcb34;
        }
    }
    ctx->pc = 0x2FCAD4u;
    // 0x2fcad4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fcad4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fcad8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fcad8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcadc: 0x0  nop
    ctx->pc = 0x2fcadcu;
    // NOP
label_2fcae0:
    // 0x2fcae0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fcae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fcae4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fcae8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fcae8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcaec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fcaecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fcaf0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fcaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fcaf4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fcaf4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fcaf8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fcaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fcafc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fcafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fcb00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fcb00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fcb04: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fcb04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fcb08: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fcb08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fcb0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCB0Cu;
    {
        const bool branch_taken_0x2fcb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB0Cu;
        // 0x2fcb10: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb0c) {
            ctx->pc = 0x2FCB1Cu;
            goto label_2fcb1c;
        }
    }
    ctx->pc = 0x2FCB14u;
    // 0x2fcb14: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fcb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fcb18: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fcb18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fcb1c:
    // 0x2fcb1c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fcb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fcb20: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fcb20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcb24: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FCB24u;
    {
        const bool branch_taken_0x2fcb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB24u;
        // 0x2fcb28: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb24) {
            ctx->pc = 0x2FCAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcae0;
        }
    }
    ctx->pc = 0x2FCB2Cu;
    // 0x2fcb2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCB2Cu;
    {
        const bool branch_taken_0x2fcb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB2Cu;
        // 0x2fcb30: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb2c) {
            ctx->pc = 0x2FCB3Cu;
            goto label_2fcb3c;
        }
    }
    ctx->pc = 0x2FCB34u;
label_2fcb34:
    // 0x2fcb34: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fcb34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb38: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fcb38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fcb3c:
    // 0x2fcb3c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2fcb3cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fcb40: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fcb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcb44: 0x27ffe  dsrl32      $t7, $v0, 31
    ctx->pc = 0x2fcb44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x2fcb48: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fcb48u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fcb4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fcb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fcb50: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fcb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fcb54: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fcb54u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fcb58: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fcb58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcb5c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FCB5Cu;
    {
        const bool branch_taken_0x2fcb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB5Cu;
        // 0x2fcb60: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb5c) {
            ctx->pc = 0x2FCBC4u;
            goto label_2fcbc4;
        }
    }
    ctx->pc = 0x2FCB64u;
    // 0x2fcb64: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fcb64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fcb68: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fcb68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb6c: 0x0  nop
    ctx->pc = 0x2fcb6cu;
    // NOP
label_2fcb70:
    // 0x2fcb70: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fcb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fcb74: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fcb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fcb78: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fcb78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcb7c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fcb7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fcb80: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fcb84: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fcb84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fcb88: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fcb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fcb8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fcb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fcb90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fcb90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fcb94: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fcb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fcb98: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fcb98u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fcb9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCB9Cu;
    {
        const bool branch_taken_0x2fcb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB9Cu;
        // 0x2fcba0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb9c) {
            ctx->pc = 0x2FCBACu;
            goto label_2fcbac;
        }
    }
    ctx->pc = 0x2FCBA4u;
    // 0x2fcba4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fcba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fcba8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fcba8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fcbac:
    // 0x2fcbac: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fcbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fcbb0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fcbb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcbb4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FCBB4u;
    {
        const bool branch_taken_0x2fcbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBB4u;
        // 0x2fcbb8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbb4) {
            ctx->pc = 0x2FCB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcb70;
        }
    }
    ctx->pc = 0x2FCBBCu;
    // 0x2fcbbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCBBCu;
    {
        const bool branch_taken_0x2fcbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBBCu;
        // 0x2fcbc0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbbc) {
            ctx->pc = 0x2FCBCCu;
            goto label_2fcbcc;
        }
    }
    ctx->pc = 0x2FCBC4u;
label_2fcbc4:
    // 0x2fcbc4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fcbc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcbc8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fcbc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fcbcc:
    // 0x2fcbcc: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2fcbccu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fcbd0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fcbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcbd4: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x2fcbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x2fcbd8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fcbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fcbdc: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x2fcbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x2fcbe0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fcbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fcbe4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fcbe4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcbe8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FCBE8u;
    {
        const bool branch_taken_0x2fcbe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBE8u;
        // 0x2fcbec: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbe8) {
            ctx->pc = 0x2FCC4Cu;
            goto label_2fcc4c;
        }
    }
    ctx->pc = 0x2FCBF0u;
    // 0x2fcbf0: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fcbf0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fcbf4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fcbf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fcbf8:
    // 0x2fcbf8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fcbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fcbfc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fcbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fcc00: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fcc00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcc04: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fcc04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fcc08: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fcc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fcc0c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fcc0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fcc10: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fcc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fcc14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fcc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fcc18: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fcc18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fcc1c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fcc1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fcc20: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fcc20u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fcc24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCC24u;
    {
        const bool branch_taken_0x2fcc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC24u;
        // 0x2fcc28: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc24) {
            ctx->pc = 0x2FCC34u;
            goto label_2fcc34;
        }
    }
    ctx->pc = 0x2FCC2Cu;
    // 0x2fcc2c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fcc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fcc30: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fcc30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fcc34:
    // 0x2fcc34: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fcc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fcc38: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fcc38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcc3c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FCC3Cu;
    {
        const bool branch_taken_0x2fcc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC3Cu;
        // 0x2fcc40: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc3c) {
            ctx->pc = 0x2FCBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcbf8;
        }
    }
    ctx->pc = 0x2FCC44u;
    // 0x2fcc44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCC44u;
    {
        const bool branch_taken_0x2fcc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC44u;
        // 0x2fcc48: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc44) {
            ctx->pc = 0x2FCC54u;
            goto label_2fcc54;
        }
    }
    ctx->pc = 0x2FCC4Cu;
label_2fcc4c:
    // 0x2fcc4c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fcc4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc50: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fcc50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fcc54:
    // 0x2fcc54: 0x65450003  daddiu      $a1, $t2, 0x3
    ctx->pc = 0x2fcc54u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)3);
    // 0x2fcc58: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fcc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcc5c: 0x267fe  dsrl32      $t4, $v0, 31
    ctx->pc = 0x2fcc5cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x2fcc60: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fcc60u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fcc64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fcc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fcc68: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fcc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fcc6c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fcc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fcc70: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fcc70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcc74: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FCC74u;
    {
        const bool branch_taken_0x2fcc74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC74u;
        // 0x2fcc78: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc74) {
            ctx->pc = 0x2FCCDCu;
            goto label_2fccdc;
        }
    }
    ctx->pc = 0x2FCC7Cu;
    // 0x2fcc7c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fcc7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fcc80: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fcc80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc84: 0x0  nop
    ctx->pc = 0x2fcc84u;
    // NOP
label_2fcc88:
    // 0x2fcc88: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fcc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fcc8c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fcc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fcc90: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fcc90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcc94: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fcc94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fcc98: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fcc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fcc9c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fcc9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fcca0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fcca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fcca4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fcca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fcca8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fcca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fccac: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fccacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fccb0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fccb0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fccb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCCB4u;
    {
        const bool branch_taken_0x2fccb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCB4u;
        // 0x2fccb8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fccb4) {
            ctx->pc = 0x2FCCC4u;
            goto label_2fccc4;
        }
    }
    ctx->pc = 0x2FCCBCu;
    // 0x2fccbc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fccc0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fccc4:
    // 0x2fccc4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fccc8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fccc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcccc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FCCCCu;
    {
        const bool branch_taken_0x2fcccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCCCu;
        // 0x2fccd0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcccc) {
            ctx->pc = 0x2FCC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcc88;
        }
    }
    ctx->pc = 0x2FCCD4u;
    // 0x2fccd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCCD4u;
    {
        const bool branch_taken_0x2fccd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCD4u;
        // 0x2fccd8: 0x65450001  daddiu      $a1, $t2, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fccd4) {
            ctx->pc = 0x2FCCE4u;
            goto label_2fcce4;
        }
    }
    ctx->pc = 0x2FCCDCu;
label_2fccdc:
    // 0x2fccdc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fccdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcce0: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2fcce0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_2fcce4:
    // 0x2fcce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fcce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fcce8: 0x15620068  bne         $t3, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2FCCE8u;
    {
        const bool branch_taken_0x2fcce8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FCCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCE8u;
        // 0x2fccec: 0xfce50008  sd          $a1, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcce8) {
            ctx->pc = 0x2FCE8Cu;
            goto label_2fce8c;
        }
    }
    ctx->pc = 0x2FCCF0u;
    // 0x2fccf0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fccf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fccf4: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fccf8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2fccf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2fccfc: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2fccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2fcd00: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fcd00u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fcd04: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fcd04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcd08: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FCD08u;
    {
        const bool branch_taken_0x2fcd08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD08u;
        // 0x2fcd0c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd08) {
            ctx->pc = 0x2FCD6Cu;
            goto label_2fcd6c;
        }
    }
    ctx->pc = 0x2FCD10u;
    // 0x2fcd10: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fcd10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fcd14: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fcd14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fcd18:
    // 0x2fcd18: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fcd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fcd1c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fcd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fcd20: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fcd20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcd24: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fcd24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fcd28: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fcd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fcd2c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fcd2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fcd30: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fcd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fcd34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fcd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fcd38: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fcd38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fcd3c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fcd3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fcd40: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fcd40u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fcd44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCD44u;
    {
        const bool branch_taken_0x2fcd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD44u;
        // 0x2fcd48: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd44) {
            ctx->pc = 0x2FCD54u;
            goto label_2fcd54;
        }
    }
    ctx->pc = 0x2FCD4Cu;
    // 0x2fcd4c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fcd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fcd50: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fcd50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fcd54:
    // 0x2fcd54: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fcd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fcd58: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fcd58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcd5c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FCD5Cu;
    {
        const bool branch_taken_0x2fcd5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD5Cu;
        // 0x2fcd60: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd5c) {
            ctx->pc = 0x2FCD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcd18;
        }
    }
    ctx->pc = 0x2FCD64u;
    // 0x2fcd64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCD64u;
    {
        const bool branch_taken_0x2fcd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD64u;
        // 0x2fcd68: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd64) {
            ctx->pc = 0x2FCD74u;
            goto label_2fcd74;
        }
    }
    ctx->pc = 0x2FCD6Cu;
label_2fcd6c:
    // 0x2fcd6c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fcd6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd70: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fcd70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fcd74:
    // 0x2fcd74: 0x65450030  daddiu      $a1, $t2, 0x30
    ctx->pc = 0x2fcd74u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)48);
    // 0x2fcd78: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fcd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcd7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2fcd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2fcd80: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fcd80u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fcd84: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2fcd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2fcd88: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fcd88u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fcd8c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fcd8cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcd90: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FCD90u;
    {
        const bool branch_taken_0x2fcd90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD90u;
        // 0x2fcd94: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd90) {
            ctx->pc = 0x2FCDF4u;
            goto label_2fcdf4;
        }
    }
    ctx->pc = 0x2FCD98u;
    // 0x2fcd98: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fcd98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fcd9c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fcd9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fcda0:
    // 0x2fcda0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fcda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fcda4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fcda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fcda8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fcda8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcdac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fcdacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fcdb0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fcdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fcdb4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fcdb4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fcdb8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fcdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fcdbc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fcdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fcdc0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fcdc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fcdc4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fcdc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fcdc8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fcdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fcdcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCDCCu;
    {
        const bool branch_taken_0x2fcdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCDCCu;
        // 0x2fcdd0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcdcc) {
            ctx->pc = 0x2FCDDCu;
            goto label_2fcddc;
        }
    }
    ctx->pc = 0x2FCDD4u;
    // 0x2fcdd4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fcdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fcdd8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fcdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fcddc:
    // 0x2fcddc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fcddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fcde0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fcde0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcde4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FCDE4u;
    {
        const bool branch_taken_0x2fcde4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCDE4u;
        // 0x2fcde8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcde4) {
            ctx->pc = 0x2FCDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcda0;
        }
    }
    ctx->pc = 0x2FCDECu;
    // 0x2fcdec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCDECu;
    {
        const bool branch_taken_0x2fcdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCDECu;
        // 0x2fcdf0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcdec) {
            ctx->pc = 0x2FCDFCu;
            goto label_2fcdfc;
        }
    }
    ctx->pc = 0x2FCDF4u;
label_2fcdf4:
    // 0x2fcdf4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fcdf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcdf8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fcdf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fcdfc:
    // 0x2fcdfc: 0x65450030  daddiu      $a1, $t2, 0x30
    ctx->pc = 0x2fcdfcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)48);
    // 0x2fce00: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fce04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fce04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fce08: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fce08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fce0c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x2fce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2fce10: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fce10u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fce14: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fce14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fce18: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FCE18u;
    {
        const bool branch_taken_0x2fce18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE18u;
        // 0x2fce1c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce18) {
            ctx->pc = 0x2FCE7Cu;
            goto label_2fce7c;
        }
    }
    ctx->pc = 0x2FCE20u;
    // 0x2fce20: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fce20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fce24: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fce24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fce28:
    // 0x2fce28: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fce28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fce2c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fce30: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fce30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fce34: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fce34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fce38: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fce38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fce3c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fce3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fce40: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fce40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fce44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fce44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fce48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fce48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fce4c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fce4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fce50: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fce50u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fce54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCE54u;
    {
        const bool branch_taken_0x2fce54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE54u;
        // 0x2fce58: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce54) {
            ctx->pc = 0x2FCE64u;
            goto label_2fce64;
        }
    }
    ctx->pc = 0x2FCE5Cu;
    // 0x2fce5c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fce60: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fce60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fce64:
    // 0x2fce64: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fce68: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fce68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fce6c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FCE6Cu;
    {
        const bool branch_taken_0x2fce6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE6Cu;
        // 0x2fce70: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce6c) {
            ctx->pc = 0x2FCE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fce28;
        }
    }
    ctx->pc = 0x2FCE74u;
    // 0x2fce74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCE74u;
    {
        const bool branch_taken_0x2fce74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE74u;
        // 0x2fce78: 0x65420020  daddiu      $v0, $t2, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce74) {
            ctx->pc = 0x2FCE84u;
            goto label_2fce84;
        }
    }
    ctx->pc = 0x2FCE7Cu;
label_2fce7c:
    // 0x2fce7c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fce7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce80: 0x65420020  daddiu      $v0, $t2, 0x20
    ctx->pc = 0x2fce80u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
label_2fce84:
    // 0x2fce84: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2fce84u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x2fce88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fce8c:
    // 0x2fce8c: 0x15c20006  bne         $t6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCE8Cu;
    {
        const bool branch_taken_0x2fce8c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE8Cu;
        // 0x2fce90: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce8c) {
            ctx->pc = 0x2FCEA8u;
            goto label_2fcea8;
        }
    }
    ctx->pc = 0x2FCE94u;
    // 0x2fce94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fce94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce98: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x2FCE98u;
    SET_GPR_U32(ctx, 31, 0x2FCEA0u);
    ctx->pc = 0x2FCE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE98u;
    // 0x2fce9c: 0x24a50750  addiu       $a1, $a1, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2FCE98u, 0x2FCEA0u)) {
        return;
    }
    ctx->pc = 0x2FCEA0u;
label_2fcea0:
    // 0x2fcea0: 0x10000202  b           . + 4 + (0x202 << 2)
    ctx->pc = 0x2FCEA0u;
    {
        const bool branch_taken_0x2fcea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCEA0u;
        // 0x2fcea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcea0) {
            ctx->pc = 0x2FD6ACu;
            goto label_2fd6ac;
        }
    }
    ctx->pc = 0x2FCEA8u;
label_2fcea8:
    // 0x2fcea8: 0x15a20026  bne         $t5, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2FCEA8u;
    {
        const bool branch_taken_0x2fcea8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FCEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCEA8u;
        // 0x2fceac: 0x300702d  daddu       $t6, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcea8) {
            ctx->pc = 0x2FCF44u;
            goto label_2fcf44;
        }
    }
    ctx->pc = 0x2FCEB0u;
    // 0x2fceb0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fceb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fceb4: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fceb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fceb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fcebc: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2fcebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2fcec0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fcec0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fcec4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fcec4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcec8: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FCEC8u;
    {
        const bool branch_taken_0x2fcec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCEC8u;
        // 0x2fcecc: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcec8) {
            ctx->pc = 0x2FCF34u;
            goto label_2fcf34;
        }
    }
    ctx->pc = 0x2FCED0u;
    // 0x2fced0: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fced0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fced4: 0x300702d  daddu       $t6, $t8, $zero
    ctx->pc = 0x2fced4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fced8: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fced8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fcedc: 0x0  nop
    ctx->pc = 0x2fcedcu;
    // NOP
label_2fcee0:
    // 0x2fcee0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fcee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fcee4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fcee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fcee8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fcee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fceec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fceecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fcef0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fcef4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fcef4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fcef8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fcef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fcefc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fcefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fcf00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fcf00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fcf04: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fcf04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fcf08: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fcf08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fcf0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCF0Cu;
    {
        const bool branch_taken_0x2fcf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF0Cu;
        // 0x2fcf10: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf0c) {
            ctx->pc = 0x2FCF1Cu;
            goto label_2fcf1c;
        }
    }
    ctx->pc = 0x2FCF14u;
    // 0x2fcf14: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fcf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fcf18: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fcf18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fcf1c:
    // 0x2fcf1c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fcf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fcf20: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fcf20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcf24: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FCF24u;
    {
        const bool branch_taken_0x2fcf24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF24u;
        // 0x2fcf28: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf24) {
            ctx->pc = 0x2FCEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcee0;
        }
    }
    ctx->pc = 0x2FCF2Cu;
    // 0x2fcf2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCF2Cu;
    {
        const bool branch_taken_0x2fcf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF2Cu;
        // 0x2fcf30: 0x65420010  daddiu      $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf2c) {
            ctx->pc = 0x2FCF40u;
            goto label_2fcf40;
        }
    }
    ctx->pc = 0x2FCF34u;
label_2fcf34:
    // 0x2fcf34: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fcf34u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fcf38: 0x300702d  daddu       $t6, $t8, $zero
    ctx->pc = 0x2fcf38u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcf3c: 0x65420010  daddiu      $v0, $t2, 0x10
    ctx->pc = 0x2fcf3cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
label_2fcf40:
    // 0x2fcf40: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2fcf40u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_2fcf44:
    // 0x2fcf44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fcf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fcf48: 0x15e20024  bne         $t7, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2FCF48u;
    {
        const bool branch_taken_0x2fcf48 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fcf48) {
            ctx->pc = 0x2FCFDCu;
            goto label_2fcfdc;
        }
    }
    ctx->pc = 0x2FCF50u;
    // 0x2fcf50: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fcf50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fcf54: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fcf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcf58: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fcf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fcf5c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2fcf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2fcf60: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fcf60u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fcf64: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fcf64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcf68: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FCF68u;
    {
        const bool branch_taken_0x2fcf68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF68u;
        // 0x2fcf6c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf68) {
            ctx->pc = 0x2FCFCCu;
            goto label_2fcfcc;
        }
    }
    ctx->pc = 0x2FCF70u;
    // 0x2fcf70: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fcf70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fcf74: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fcf74u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_2fcf78:
    // 0x2fcf78: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fcf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fcf7c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fcf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fcf80: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fcf80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcf84: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fcf84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fcf88: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fcf88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fcf8c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fcf8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fcf90: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fcf90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fcf94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fcf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fcf98: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fcf98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fcf9c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fcf9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fcfa0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fcfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fcfa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCFA4u;
    {
        const bool branch_taken_0x2fcfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFA4u;
        // 0x2fcfa8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcfa4) {
            ctx->pc = 0x2FCFB4u;
            goto label_2fcfb4;
        }
    }
    ctx->pc = 0x2FCFACu;
    // 0x2fcfac: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fcfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fcfb0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fcfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fcfb4:
    // 0x2fcfb4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fcfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fcfb8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fcfb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcfbc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FCFBCu;
    {
        const bool branch_taken_0x2fcfbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFBCu;
        // 0x2fcfc0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcfbc) {
            ctx->pc = 0x2FCF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcf78;
        }
    }
    ctx->pc = 0x2FCFC4u;
    // 0x2fcfc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCFC4u;
    {
        const bool branch_taken_0x2fcfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFC4u;
        // 0x2fcfc8: 0x65420010  daddiu      $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcfc4) {
            ctx->pc = 0x2FCFD4u;
            goto label_2fcfd4;
        }
    }
    ctx->pc = 0x2FCFCCu;
label_2fcfcc:
    // 0x2fcfcc: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fcfccu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fcfd0: 0x65420010  daddiu      $v0, $t2, 0x10
    ctx->pc = 0x2fcfd0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
label_2fcfd4:
    // 0x2fcfd4: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2fcfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x2fcfd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fcfdc:
    // 0x2fcfdc: 0x55820076  bnel        $t4, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2FCFDCu;
    {
        const bool branch_taken_0x2fcfdc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fcfdc) {
            ctx->pc = 0x2FCFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCFDCu;
            // 0x2fcfe0: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
            SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD1B8u;
            goto label_2fd1b8;
        }
    }
    ctx->pc = 0x2FCFE4u;
    // 0x2fcfe4: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fcfe4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fcfe8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fcfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fcfec: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2fcfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2fcff0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fcff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fcff4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fcff4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fcff8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fcff8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fcffc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FCFFCu;
    {
        const bool branch_taken_0x2fcffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFFCu;
        // 0x2fd000: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcffc) {
            ctx->pc = 0x2FD064u;
            goto label_2fd064;
        }
    }
    ctx->pc = 0x2FD004u;
    // 0x2fd004: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fd004u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fd008: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fd008u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fd00c: 0x0  nop
    ctx->pc = 0x2fd00cu;
    // NOP
label_2fd010:
    // 0x2fd010: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fd010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fd014: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fd014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fd018: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fd018u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd01c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fd01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fd020: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fd020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fd024: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fd024u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fd028: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fd028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fd02c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fd02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd030: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fd030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fd034: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fd034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fd038: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fd038u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fd03c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD03Cu;
    {
        const bool branch_taken_0x2fd03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD03Cu;
        // 0x2fd040: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd03c) {
            ctx->pc = 0x2FD04Cu;
            goto label_2fd04c;
        }
    }
    ctx->pc = 0x2FD044u;
    // 0x2fd044: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fd044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fd048: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd048u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd04c:
    // 0x2fd04c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fd050: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fd050u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd054: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FD054u;
    {
        const bool branch_taken_0x2fd054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD054u;
        // 0x2fd058: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd054) {
            ctx->pc = 0x2FD010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd010;
        }
    }
    ctx->pc = 0x2FD05Cu;
    // 0x2fd05c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD05Cu;
    {
        const bool branch_taken_0x2fd05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD05Cu;
        // 0x2fd060: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd05c) {
            ctx->pc = 0x2FD06Cu;
            goto label_2fd06c;
        }
    }
    ctx->pc = 0x2FD064u;
label_2fd064:
    // 0x2fd064: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fd064u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fd068: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fd068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2fd06c:
    // 0x2fd06c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x2fd06cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x2fd070: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fd070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd074: 0x2667e  dsrl32      $t4, $v0, 25
    ctx->pc = 0x2fd074u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x2fd078: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x2fd078u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x2fd07c: 0x2463fff9  addiu       $v1, $v1, -0x7
    ctx->pc = 0x2fd07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
    // 0x2fd080: 0x211f8  dsll        $v0, $v0, 7
    ctx->pc = 0x2fd080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 7);
    // 0x2fd084: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fd084u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fd088: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fd088u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd08c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FD08Cu;
    {
        const bool branch_taken_0x2fd08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD08Cu;
        // 0x2fd090: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd08c) {
            ctx->pc = 0x2FD0F4u;
            goto label_2fd0f4;
        }
    }
    ctx->pc = 0x2FD094u;
    // 0x2fd094: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fd094u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fd098: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fd098u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd09c: 0x0  nop
    ctx->pc = 0x2fd09cu;
    // NOP
label_2fd0a0:
    // 0x2fd0a0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fd0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fd0a4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fd0a8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fd0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd0ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fd0acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fd0b0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fd0b4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fd0b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fd0b8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fd0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fd0bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fd0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd0c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fd0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fd0c4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fd0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fd0c8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fd0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fd0cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD0CCu;
    {
        const bool branch_taken_0x2fd0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD0CCu;
        // 0x2fd0d0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd0cc) {
            ctx->pc = 0x2FD0DCu;
            goto label_2fd0dc;
        }
    }
    ctx->pc = 0x2FD0D4u;
    // 0x2fd0d4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fd0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fd0d8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd0dc:
    // 0x2fd0dc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fd0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fd0e0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fd0e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd0e4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FD0E4u;
    {
        const bool branch_taken_0x2fd0e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD0E4u;
        // 0x2fd0e8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd0e4) {
            ctx->pc = 0x2FD0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd0a0;
        }
    }
    ctx->pc = 0x2FD0ECu;
    // 0x2fd0ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD0ECu;
    {
        const bool branch_taken_0x2fd0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD0ECu;
        // 0x2fd0f0: 0x65420007  daddiu      $v0, $t2, 0x7 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd0ec) {
            ctx->pc = 0x2FD0FCu;
            goto label_2fd0fc;
        }
    }
    ctx->pc = 0x2FD0F4u;
label_2fd0f4:
    // 0x2fd0f4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2fd0f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd0f8: 0x65420007  daddiu      $v0, $t2, 0x7
    ctx->pc = 0x2fd0f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)7);
label_2fd0fc:
    // 0x2fd0fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fd0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd100: 0x1180002c  beqz        $t4, . + 4 + (0x2C << 2)
    ctx->pc = 0x2FD100u;
    {
        const bool branch_taken_0x2fd100 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD100u;
        // 0x2fd104: 0xfce20008  sd          $v0, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd100) {
            ctx->pc = 0x2FD1B4u;
            goto label_2fd1b4;
        }
    }
    ctx->pc = 0x2FD108u;
    // 0x2fd108: 0x240d0038  addiu       $t5, $zero, 0x38
    ctx->pc = 0x2fd108u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fd10c: 0x0  nop
    ctx->pc = 0x2fd10cu;
    // NOP
label_2fd110:
    // 0x2fd110: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fd110u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fd114: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fd114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd118: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2fd118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2fd11c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2fd11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2fd120: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fd120u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fd124: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fd124u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd128: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FD128u;
    {
        const bool branch_taken_0x2fd128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD128u;
        // 0x2fd12c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd128) {
            ctx->pc = 0x2FD190u;
            goto label_2fd190;
        }
    }
    ctx->pc = 0x2FD130u;
    // 0x2fd130: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fd130u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fd134: 0x24ab0001  addiu       $t3, $a1, 0x1
    ctx->pc = 0x2fd134u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd138: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fd138u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fd13c: 0x0  nop
    ctx->pc = 0x2fd13cu;
    // NOP
label_2fd140:
    // 0x2fd140: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x2fd140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fd144: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fd144u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd148: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2fd148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd14c: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x2fd14cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fd150: 0x1a81023  subu        $v0, $t5, $t0
    ctx->pc = 0x2fd150u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x2fd154: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x2fd154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fd158: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fd158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fd15c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2fd15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2fd160: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2fd160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fd164: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x2fd164u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x2fd168: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD168u;
    {
        const bool branch_taken_0x2fd168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD168u;
        // 0x2fd16c: 0xace30014  sw          $v1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd168) {
            ctx->pc = 0x2FD178u;
            goto label_2fd178;
        }
    }
    ctx->pc = 0x2FD170u;
    // 0x2fd170: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fd170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fd174: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd174u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd178:
    // 0x2fd178: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fd178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fd17c: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fd17cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd180: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2FD180u;
    {
        const bool branch_taken_0x2fd180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD180u;
        // 0x2fd184: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd180) {
            ctx->pc = 0x2FD140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd140;
        }
    }
    ctx->pc = 0x2FD188u;
    // 0x2fd188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD188u;
    {
        const bool branch_taken_0x2fd188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD188u;
        // 0x2fd18c: 0x65430008  daddiu      $v1, $t2, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd188) {
            ctx->pc = 0x2FD19Cu;
            goto label_2fd19c;
        }
    }
    ctx->pc = 0x2FD190u;
label_2fd190:
    // 0x2fd190: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fd190u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fd194: 0x24ab0001  addiu       $t3, $a1, 0x1
    ctx->pc = 0x2fd194u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd198: 0x65430008  daddiu      $v1, $t2, 0x8
    ctx->pc = 0x2fd198u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
label_2fd19c:
    // 0x2fd19c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2fd19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd1a0: 0xac102b  sltu        $v0, $a1, $t4
    ctx->pc = 0x2fd1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2fd1a4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2FD1A4u;
    {
        const bool branch_taken_0x2fd1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1A4u;
        // 0x2fd1a8: 0xfce30008  sd          $v1, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1a4) {
            ctx->pc = 0x2FD110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd110;
        }
    }
    ctx->pc = 0x2FD1ACu;
    // 0x2fd1ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FD1ACu;
    {
        const bool branch_taken_0x2fd1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1ACu;
        // 0x2fd1b0: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1ac) {
            ctx->pc = 0x2FD1B8u;
            goto label_2fd1b8;
        }
    }
    ctx->pc = 0x2FD1B4u;
label_2fd1b4:
    // 0x2fd1b4: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fd1b4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_2fd1b8:
    // 0x2fd1b8: 0x14e102f  dsubu       $v0, $t2, $t6
    ctx->pc = 0x2fd1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 14));
    // 0x2fd1bc: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x2fd1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x2fd1c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fd1c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fd1c4: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2fd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd1c8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2FD1C8u;
    {
        const bool branch_taken_0x2fd1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1C8u;
        // 0x2fd1cc: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1c8) {
            ctx->pc = 0x2FD278u;
            goto label_2fd278;
        }
    }
    ctx->pc = 0x2FD1D0u;
    // 0x2fd1d0: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2fd1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2fd1d4: 0x4a182d  daddu       $v1, $v0, $t2
    ctx->pc = 0x2fd1d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x2fd1d8: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fd1d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fd1dc: 0x31778  dsll        $v0, $v1, 29
    ctx->pc = 0x2fd1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 29);
    // 0x2fd1e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fd1e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fd1e4: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x2fd1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x2fd1e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2fd1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fd1ec: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x2fd1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x2fd1f0: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x2fd1f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fd1f4: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x2fd1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x2fd1f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD1F8u;
    {
        const bool branch_taken_0x2fd1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1F8u;
        // 0x2fd1fc: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1f8) {
            ctx->pc = 0x2FD20Cu;
            goto label_2fd20c;
        }
    }
    ctx->pc = 0x2FD200u;
    // 0x2fd200: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x2fd200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x2fd204: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2fd204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fd208: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd20c:
    // 0x2fd20c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2fd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd210: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x2fd210u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd214: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FD214u;
    {
        const bool branch_taken_0x2fd214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD214u;
        // 0x2fd218: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd214) {
            ctx->pc = 0x2FD274u;
            goto label_2fd274;
        }
    }
    ctx->pc = 0x2FD21Cu;
    // 0x2fd21c: 0x0  nop
    ctx->pc = 0x2fd21cu;
    // NOP
label_2fd220:
    // 0x2fd220: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fd220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fd224: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fd224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fd228: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fd228u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd22c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fd22cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fd230: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fd230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fd234: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fd234u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fd238: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fd238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fd23c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fd23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd240: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fd240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fd244: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fd244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fd248: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fd248u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fd24c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD24Cu;
    {
        const bool branch_taken_0x2fd24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD24Cu;
        // 0x2fd250: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd24c) {
            ctx->pc = 0x2FD25Cu;
            goto label_2fd25c;
        }
    }
    ctx->pc = 0x2FD254u;
    // 0x2fd254: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fd254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fd258: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd258u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd25c:
    // 0x2fd25c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fd25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fd260: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fd260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd264: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FD264u;
    {
        const bool branch_taken_0x2fd264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD264u;
        // 0x2fd268: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd264) {
            ctx->pc = 0x2FD220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd220;
        }
    }
    ctx->pc = 0x2FD26Cu;
    // 0x2fd26c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FD26Cu;
    {
        const bool branch_taken_0x2fd26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD26Cu;
        // 0x2fd270: 0xfcea0008  sd          $t2, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd26c) {
            ctx->pc = 0x2FD278u;
            goto label_2fd278;
        }
    }
    ctx->pc = 0x2FD274u;
label_2fd274:
    // 0x2fd274: 0xfcea0008  sd          $t2, 0x8($a3)
    ctx->pc = 0x2fd274u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
label_2fd278:
    // 0x2fd278: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2fd278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fd27c: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x2fd27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48384);
    // 0x2fd280: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x2fd280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x2fd284: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x2fd284u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fd288: 0x524023  subu        $t0, $v0, $s2
    ctx->pc = 0x2fd288u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2fd28c: 0x2505fffd  addiu       $a1, $t0, -0x3
    ctx->pc = 0x2fd28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967293));
    // 0x2fd290: 0xacc50024  sw          $a1, 0x24($a2)
    ctx->pc = 0x2fd290u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 5));
    // 0x2fd294: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2fd294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fd298: 0x1464002e  bne         $v1, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2FD298u;
    {
        const bool branch_taken_0x2fd298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FD29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD298u;
        // 0x2fd29c: 0xacc20020  sw          $v0, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd298) {
            ctx->pc = 0x2FD354u;
            goto label_2fd354;
        }
    }
    ctx->pc = 0x2FD2A0u;
    // 0x2fd2a0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fd2a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fd2a4: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fd2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd2a8: 0x2283f  dsra32      $a1, $v0, 0
    ctx->pc = 0x2fd2a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fd2ac: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x2fd2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2fd2b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fd2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fd2b4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fd2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fd2b8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fd2b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd2bc: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FD2BCu;
    {
        const bool branch_taken_0x2fd2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2BCu;
        // 0x2fd2c0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd2bc) {
            ctx->pc = 0x2FD32Cu;
            goto label_2fd32c;
        }
    }
    ctx->pc = 0x2FD2C4u;
    // 0x2fd2c4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fd2c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fd2c8: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x2fd2c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fd2cc: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fd2ccu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fd2d0: 0x250bfff9  addiu       $t3, $t0, -0x7
    ctx->pc = 0x2fd2d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
    // 0x2fd2d4: 0x0  nop
    ctx->pc = 0x2fd2d4u;
    // NOP
label_2fd2d8:
    // 0x2fd2d8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fd2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fd2dc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fd2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fd2e0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fd2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd2e4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fd2e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fd2e8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fd2ec: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fd2ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fd2f0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fd2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fd2f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fd2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd2f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fd2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fd2fc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fd2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fd300: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fd300u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fd304: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD304u;
    {
        const bool branch_taken_0x2fd304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD304u;
        // 0x2fd308: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd304) {
            ctx->pc = 0x2FD314u;
            goto label_2fd314;
        }
    }
    ctx->pc = 0x2FD30Cu;
    // 0x2fd30c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fd310: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd310u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd314:
    // 0x2fd314: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fd314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fd318: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fd318u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd31c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FD31Cu;
    {
        const bool branch_taken_0x2fd31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD31Cu;
        // 0x2fd320: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd31c) {
            ctx->pc = 0x2FD2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd2d8;
        }
    }
    ctx->pc = 0x2FD324u;
    // 0x2fd324: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD324u;
    {
        const bool branch_taken_0x2fd324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD324u;
        // 0x2fd328: 0x65420020  daddiu      $v0, $t2, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd324) {
            ctx->pc = 0x2FD33Cu;
            goto label_2fd33c;
        }
    }
    ctx->pc = 0x2FD32Cu;
label_2fd32c:
    // 0x2fd32c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fd32cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fd330: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x2fd330u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fd334: 0x250bfff9  addiu       $t3, $t0, -0x7
    ctx->pc = 0x2fd334u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
    // 0x2fd338: 0x65420020  daddiu      $v0, $t2, 0x20
    ctx->pc = 0x2fd338u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
label_2fd33c:
    // 0x2fd33c: 0xc183e  dsrl32      $v1, $t4, 0
    ctx->pc = 0x2fd33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x2fd340: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2fd340u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x2fd344: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2fd344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd348: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fd348u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fd34c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fd34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fd350: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fd350u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_2fd354:
    // 0x2fd354: 0x10a000d4  beqz        $a1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x2FD354u;
    {
        const bool branch_taken_0x2fd354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD354u;
        // 0x2fd358: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd354) {
            ctx->pc = 0x2FD6A8u;
            goto label_2fd6a8;
        }
    }
    ctx->pc = 0x2FD35Cu;
    // 0x2fd35c: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x2fd35cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fd360: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2fd360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2fd364: 0x43182d  daddu       $v1, $v0, $v1
    ctx->pc = 0x2fd364u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2fd368: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fd368u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fd36c: 0x31778  dsll        $v0, $v1, 29
    ctx->pc = 0x2fd36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 29);
    // 0x2fd370: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fd370u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fd374: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x2fd374u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x2fd378: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2fd378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fd37c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2fd37cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd380: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x2fd380u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x2fd384: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x2fd384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fd388: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x2fd388u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x2fd38c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD38Cu;
    {
        const bool branch_taken_0x2fd38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD38Cu;
        // 0x2fd390: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd38c) {
            ctx->pc = 0x2FD3A0u;
            goto label_2fd3a0;
        }
    }
    ctx->pc = 0x2FD394u;
    // 0x2fd394: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x2fd394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x2fd398: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2fd398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fd39c: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd39cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd3a0:
    // 0x2fd3a0: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2fd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd3a4: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x2fd3a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd3a8: 0x108000be  beqz        $a0, . + 4 + (0xBE << 2)
    ctx->pc = 0x2FD3A8u;
    {
        const bool branch_taken_0x2fd3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3A8u;
        // 0x2fd3ac: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3a8) {
            ctx->pc = 0x2FD6A4u;
            goto label_2fd6a4;
        }
    }
    ctx->pc = 0x2FD3B0u;
label_2fd3b0:
    // 0x2fd3b0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fd3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fd3b4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fd3b8: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x2fd3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd3bc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fd3bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fd3c0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2fd3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2fd3c4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fd3c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fd3c8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fd3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fd3cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fd3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd3d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fd3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fd3d4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fd3d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fd3d8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fd3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fd3dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD3DCu;
    {
        const bool branch_taken_0x2fd3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3DCu;
        // 0x2fd3e0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3dc) {
            ctx->pc = 0x2FD3ECu;
            goto label_2fd3ec;
        }
    }
    ctx->pc = 0x2FD3E4u;
    // 0x2fd3e4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fd3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fd3e8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd3ec:
    // 0x2fd3ec: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2fd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2fd3f0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fd3f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd3f4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FD3F4u;
    {
        const bool branch_taken_0x2fd3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3F4u;
        // 0x2fd3f8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3f4) {
            ctx->pc = 0x2FD3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd3b0;
        }
    }
    ctx->pc = 0x2FD3FCu;
    // 0x2fd3fc: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2FD3FCu;
    {
        const bool branch_taken_0x2fd3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3FCu;
        // 0x2fd400: 0xfcea0008  sd          $t2, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3fc) {
            ctx->pc = 0x2FD6A8u;
            goto label_2fd6a8;
        }
    }
    ctx->pc = 0x2FD404u;
label_2fd404:
    // 0x2fd404: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x2fd404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x2fd408: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fd408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fd40c: 0x11220019  beq         $t1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FD40Cu;
    {
        const bool branch_taken_0x2fd40c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fd40c) {
            ctx->pc = 0x2FD474u;
            goto label_2fd474;
        }
    }
    ctx->pc = 0x2FD414u;
    // 0x2fd414: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x2fd414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x2fd418: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fd418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fd41c: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FD41Cu;
    {
        const bool branch_taken_0x2fd41c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fd41c) {
            ctx->pc = 0x2FD47Cu;
            goto label_2fd47c;
        }
    }
    ctx->pc = 0x2FD424u;
    // 0x2fd424: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x2fd424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x2fd428: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fd428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fd42c: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FD42Cu;
    {
        const bool branch_taken_0x2fd42c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fd42c) {
            ctx->pc = 0x2FD474u;
            goto label_2fd474;
        }
    }
    ctx->pc = 0x2FD434u;
    // 0x2fd434: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x2fd434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x2fd438: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fd438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fd43c: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FD43Cu;
    {
        const bool branch_taken_0x2fd43c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fd43c) {
            ctx->pc = 0x2FD474u;
            goto label_2fd474;
        }
    }
    ctx->pc = 0x2FD444u;
    // 0x2fd444: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x2fd444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2fd448: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fd448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fd44c: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FD44Cu;
    {
        const bool branch_taken_0x2fd44c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fd44c) {
            ctx->pc = 0x2FD474u;
            goto label_2fd474;
        }
    }
    ctx->pc = 0x2FD454u;
    // 0x2fd454: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x2fd454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x2fd458: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fd458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fd45c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD45Cu;
    {
        const bool branch_taken_0x2fd45c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fd45c) {
            ctx->pc = 0x2FD474u;
            goto label_2fd474;
        }
    }
    ctx->pc = 0x2FD464u;
    // 0x2fd464: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x2fd464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x2fd468: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fd468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fd46c: 0x14a2005d  bne         $a1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2FD46Cu;
    {
        const bool branch_taken_0x2fd46c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fd46c) {
            ctx->pc = 0x2FD5E4u;
            goto label_2fd5e4;
        }
    }
    ctx->pc = 0x2FD474u;
label_2fd474:
    // 0x2fd474: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x2fd474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x2fd478: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fd478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2fd47c:
    // 0x2fd47c: 0x1522002d  bne         $t1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2FD47Cu;
    {
        const bool branch_taken_0x2fd47c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD47Cu;
        // 0x2fd480: 0x8cc80008  lw          $t0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd47c) {
            ctx->pc = 0x2FD534u;
            goto label_2fd534;
        }
    }
    ctx->pc = 0x2FD484u;
    // 0x2fd484: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x2fd484u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fd488: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x2fd488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd48c: 0x2283f  dsra32      $a1, $v0, 0
    ctx->pc = 0x2fd48cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fd490: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x2fd490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2fd494: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fd494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fd498: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2fd498u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2fd49c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2fd49cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd4a0: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FD4A0u;
    {
        const bool branch_taken_0x2fd4a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD4A0u;
        // 0x2fd4a4: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd4a0) {
            ctx->pc = 0x2FD50Cu;
            goto label_2fd50c;
        }
    }
    ctx->pc = 0x2FD4A8u;
    // 0x2fd4a8: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fd4a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fd4ac: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x2fd4acu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fd4b0: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fd4b0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fd4b4: 0x250bfffc  addiu       $t3, $t0, -0x4
    ctx->pc = 0x2fd4b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
label_2fd4b8:
    // 0x2fd4b8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fd4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fd4bc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fd4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fd4c0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x2fd4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd4c4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fd4c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fd4c8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2fd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fd4cc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fd4ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fd4d0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fd4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fd4d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fd4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd4d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fd4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fd4dc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2fd4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fd4e0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fd4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fd4e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD4E4u;
    {
        const bool branch_taken_0x2fd4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD4E4u;
        // 0x2fd4e8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd4e4) {
            ctx->pc = 0x2FD4F4u;
            goto label_2fd4f4;
        }
    }
    ctx->pc = 0x2FD4ECu;
    // 0x2fd4ec: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fd4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fd4f0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd4f4:
    // 0x2fd4f4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x2fd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2fd4f8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fd4f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd4fc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FD4FCu;
    {
        const bool branch_taken_0x2fd4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD4FCu;
        // 0x2fd500: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd4fc) {
            ctx->pc = 0x2FD4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd4b8;
        }
    }
    ctx->pc = 0x2FD504u;
    // 0x2fd504: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD504u;
    {
        const bool branch_taken_0x2fd504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD504u;
        // 0x2fd508: 0x65420020  daddiu      $v0, $t2, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd504) {
            ctx->pc = 0x2FD51Cu;
            goto label_2fd51c;
        }
    }
    ctx->pc = 0x2FD50Cu;
label_2fd50c:
    // 0x2fd50c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x2fd50cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fd510: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x2fd510u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fd514: 0x250bfffc  addiu       $t3, $t0, -0x4
    ctx->pc = 0x2fd514u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x2fd518: 0x65420020  daddiu      $v0, $t2, 0x20
    ctx->pc = 0x2fd518u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
label_2fd51c:
    // 0x2fd51c: 0xc183e  dsrl32      $v1, $t4, 0
    ctx->pc = 0x2fd51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x2fd520: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2fd520u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x2fd524: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x2fd524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd528: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2fd528u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fd52c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fd52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fd530: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2fd530u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_2fd534:
    // 0x2fd534: 0x1100005c  beqz        $t0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2FD534u;
    {
        const bool branch_taken_0x2fd534 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD534u;
        // 0x2fd538: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd534) {
            ctx->pc = 0x2FD6A8u;
            goto label_2fd6a8;
        }
    }
    ctx->pc = 0x2FD53Cu;
    // 0x2fd53c: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x2fd53cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fd540: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2fd540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2fd544: 0x43182d  daddu       $v1, $v0, $v1
    ctx->pc = 0x2fd544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2fd548: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x2fd548u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fd54c: 0x31778  dsll        $v0, $v1, 29
    ctx->pc = 0x2fd54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 29);
    // 0x2fd550: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fd550u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fd554: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x2fd554u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x2fd558: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2fd558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fd55c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2fd55cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd560: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x2fd560u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x2fd564: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x2fd564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fd568: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x2fd568u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x2fd56c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD56Cu;
    {
        const bool branch_taken_0x2fd56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD56Cu;
        // 0x2fd570: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd56c) {
            ctx->pc = 0x2FD580u;
            goto label_2fd580;
        }
    }
    ctx->pc = 0x2FD574u;
    // 0x2fd574: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x2fd574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x2fd578: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2fd578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fd57c: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd57cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd580:
    // 0x2fd580: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2fd580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd584: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x2fd584u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd588: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2FD588u;
    {
        const bool branch_taken_0x2fd588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD588u;
        // 0x2fd58c: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd588) {
            ctx->pc = 0x2FD6A4u;
            goto label_2fd6a4;
        }
    }
    ctx->pc = 0x2FD590u;
label_2fd590:
    // 0x2fd590: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fd590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fd594: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fd594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fd598: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x2fd598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd59c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fd59cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fd5a0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2fd5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2fd5a4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fd5a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fd5a8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fd5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fd5ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fd5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd5b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fd5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fd5b4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fd5b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fd5b8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fd5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fd5bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD5BCu;
    {
        const bool branch_taken_0x2fd5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD5BCu;
        // 0x2fd5c0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd5bc) {
            ctx->pc = 0x2FD5CCu;
            goto label_2fd5cc;
        }
    }
    ctx->pc = 0x2FD5C4u;
    // 0x2fd5c4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fd5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fd5c8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd5cc:
    // 0x2fd5cc: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2fd5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2fd5d0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fd5d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd5d4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FD5D4u;
    {
        const bool branch_taken_0x2fd5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD5D4u;
        // 0x2fd5d8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd5d4) {
            ctx->pc = 0x2FD590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd590;
        }
    }
    ctx->pc = 0x2FD5DCu;
    // 0x2fd5dc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2FD5DCu;
    {
        const bool branch_taken_0x2fd5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD5DCu;
        // 0x2fd5e0: 0xfcea0008  sd          $t2, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd5dc) {
            ctx->pc = 0x2FD6A8u;
            goto label_2fd6a8;
        }
    }
    ctx->pc = 0x2FD5E4u;
label_2fd5e4:
    // 0x2fd5e4: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x2fd5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x2fd5e8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2fd5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2fd5ec: 0x14a2002f  bne         $a1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2FD5ECu;
    {
        const bool branch_taken_0x2fd5ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD5ECu;
        // 0x2fd5f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd5ec) {
            ctx->pc = 0x2FD6ACu;
            goto label_2fd6ac;
        }
    }
    ctx->pc = 0x2FD5F4u;
    // 0x2fd5f4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2fd5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fd5f8: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2FD5F8u;
    {
        const bool branch_taken_0x2fd5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD5F8u;
        // 0x2fd5fc: 0x318c0  sll         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd5f8) {
            ctx->pc = 0x2FD6ACu;
            goto label_2fd6ac;
        }
    }
    ctx->pc = 0x2FD600u;
    // 0x2fd600: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x2fd600u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fd604: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2fd604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2fd608: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x2fd608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2fd60c: 0x8ce80020  lw          $t0, 0x20($a3)
    ctx->pc = 0x2fd60cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2fd610: 0x21f78  dsll        $v1, $v0, 29
    ctx->pc = 0x2fd610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 29);
    // 0x2fd614: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2fd614u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2fd618: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x2fd618u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x2fd61c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2fd61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fd620: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x2fd620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x2fd624: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x2fd624u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x2fd628: 0x88182b  sltu        $v1, $a0, $t0
    ctx->pc = 0x2fd628u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fd62c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD62Cu;
    {
        const bool branch_taken_0x2fd62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD62Cu;
        // 0x2fd630: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd62c) {
            ctx->pc = 0x2FD640u;
            goto label_2fd640;
        }
    }
    ctx->pc = 0x2FD634u;
    // 0x2fd634: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x2fd634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x2fd638: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2fd638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fd63c: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd63cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd640:
    // 0x2fd640: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2fd640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd644: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x2fd644u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd648: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FD648u;
    {
        const bool branch_taken_0x2fd648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD648u;
        // 0x2fd64c: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd648) {
            ctx->pc = 0x2FD6A4u;
            goto label_2fd6a4;
        }
    }
    ctx->pc = 0x2FD650u;
label_2fd650:
    // 0x2fd650: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2fd650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2fd654: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2fd654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2fd658: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x2fd658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2fd65c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2fd65cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fd660: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2fd660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2fd664: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x2fd664u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fd668: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2fd668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2fd66c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fd66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd670: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2fd670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fd674: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fd674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fd678: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x2fd678u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x2fd67c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD67Cu;
    {
        const bool branch_taken_0x2fd67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD67Cu;
        // 0x2fd680: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd67c) {
            ctx->pc = 0x2FD68Cu;
            goto label_2fd68c;
        }
    }
    ctx->pc = 0x2FD684u;
    // 0x2fd684: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2fd684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2fd688: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2fd688u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2fd68c:
    // 0x2fd68c: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2fd68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2fd690: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2fd690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2fd694: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FD694u;
    {
        const bool branch_taken_0x2fd694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD694u;
        // 0x2fd698: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd694) {
            ctx->pc = 0x2FD650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd650;
        }
    }
    ctx->pc = 0x2FD69Cu;
    // 0x2fd69c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FD69Cu;
    {
        const bool branch_taken_0x2fd69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD69Cu;
        // 0x2fd6a0: 0xfcea0008  sd          $t2, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd69c) {
            ctx->pc = 0x2FD6A8u;
            goto label_2fd6a8;
        }
    }
    ctx->pc = 0x2FD6A4u;
label_2fd6a4:
    // 0x2fd6a4: 0xfcea0008  sd          $t2, 0x8($a3)
    ctx->pc = 0x2fd6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
label_2fd6a8:
    // 0x2fd6a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd6ac:
    // 0x2fd6ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2fd6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fd6b0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2fd6b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fd6b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2fd6b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fd6b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2fd6b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fd6bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2fd6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD6C0u;
        // 0x2fd6c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD6C8u;
}
