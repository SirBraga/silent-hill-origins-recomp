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

// Function: sub_0010A208
// Address: 0x10a208 - 0x10a308
void sub_0010A208_0x10a208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A208_0x10a208");
#endif

    switch (ctx->pc) {
        case 0x10a220u: goto label_10a220;
        case 0x10a258u: goto label_10a258;
        case 0x10a2b8u: goto label_10a2b8;
        default: break;
    }

    ctx->pc = 0x10a208u;

    // 0x10a208: 0x1085003c  beq         $a0, $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x10A208u;
    {
        const bool branch_taken_0x10a208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x10A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A208u;
        // 0x10a20c: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a208) {
            ctx->pc = 0x10A2FCu;
            goto label_10a2fc;
        }
    }
    ctx->pc = 0x10A210u;
    // 0x10a210: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x10a210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10a214: 0x10c50039  beq         $a2, $a1, . + 4 + (0x39 << 2)
    ctx->pc = 0x10A214u;
    {
        const bool branch_taken_0x10a214 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x10a214) {
            ctx->pc = 0x10A2FCu;
            goto label_10a2fc;
        }
    }
    ctx->pc = 0x10A21Cu;
    // 0x10a21c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x10a21cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10a220:
    // 0x10a220: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x10a220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x10a224: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x10a224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10a228: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x10a228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a22c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x10a22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a230: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x10a230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10a234: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10a234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a238: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x10a238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10a23c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10A23Cu;
    {
        const bool branch_taken_0x10a23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A23Cu;
        // 0x10a240: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a23c) {
            ctx->pc = 0x10A28Cu;
            goto label_10a28c;
        }
    }
    ctx->pc = 0x10A244u;
    // 0x10a244: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x10a244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x10a248: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x10a248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10a24c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10a24cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x10a250: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A250u;
    {
        const bool branch_taken_0x10a250 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x10A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A250u;
        // 0x10a254: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a250) {
            ctx->pc = 0x10A278u;
            goto label_10a278;
        }
    }
    ctx->pc = 0x10A258u;
label_10a258:
    // 0x10a258: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x10a258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x10a25c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x10a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x10a260: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x10a260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x10a264: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x10a264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x10a268: 0xb0ca0007  sdl         $t2, 0x7($a2)
    ctx->pc = 0x10a268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a26c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10a270: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10A270u;
    {
        const bool branch_taken_0x10a270 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x10A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A270u;
        // 0x10a274: 0xb4ca0000  sdr         $t2, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a270) {
            ctx->pc = 0x10A258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a258;
        }
    }
    ctx->pc = 0x10A278u;
label_10a278:
    // 0x10a278: 0x6baa0007  ldl         $t2, 0x7($sp)
    ctx->pc = 0x10a278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x10a27c: 0x6faa0000  ldr         $t2, 0x0($sp)
    ctx->pc = 0x10a27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x10a280: 0xb12a0007  sdl         $t2, 0x7($t1)
    ctx->pc = 0x10a280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a284: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x10A284u;
    {
        const bool branch_taken_0x10a284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A284u;
        // 0x10a288: 0xb52a0000  sdr         $t2, 0x0($t1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a284) {
            ctx->pc = 0x10A2F0u;
            goto label_10a2f0;
        }
    }
    ctx->pc = 0x10A28Cu;
label_10a28c:
    // 0x10a28c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x10a28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10a290: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x10a290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10a294: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x10a294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a298: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x10a298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a29c: 0x24c7fff8  addiu       $a3, $a2, -0x8
    ctx->pc = 0x10a29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x10a2a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a2a4: 0x8cc3fff8  lw          $v1, -0x8($a2)
    ctx->pc = 0x10a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x10a2a8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x10a2a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10a2ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10A2ACu;
    {
        const bool branch_taken_0x10a2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2ACu;
        // 0x10a2b0: 0x24c80008  addiu       $t0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2ac) {
            ctx->pc = 0x10A2E0u;
            goto label_10a2e0;
        }
    }
    ctx->pc = 0x10A2B4u;
    // 0x10a2b4: 0x0  nop
    ctx->pc = 0x10a2b4u;
    // NOP
label_10a2b8:
    // 0x10a2b8: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x10a2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x10a2bc: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x10a2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x10a2c0: 0xb0cb0007  sdl         $t3, 0x7($a2)
    ctx->pc = 0x10a2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a2c4: 0xb4cb0000  sdr         $t3, 0x0($a2)
    ctx->pc = 0x10a2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a2c8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x10a2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a2d0: 0x8cc2fff8  lw          $v0, -0x8($a2)
    ctx->pc = 0x10a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x10a2d4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x10a2d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10a2d8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10A2D8u;
    {
        const bool branch_taken_0x10a2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2D8u;
        // 0x10a2dc: 0x24c7fff8  addiu       $a3, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2d8) {
            ctx->pc = 0x10A2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a2b8;
        }
    }
    ctx->pc = 0x10A2E0u;
label_10a2e0:
    // 0x10a2e0: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x10a2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x10a2e4: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x10a2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x10a2e8: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x10a2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a2ec: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x10a2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a2f0:
    // 0x10a2f0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x10a2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2f4: 0x14c5ffca  bne         $a2, $a1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x10A2F4u;
    {
        const bool branch_taken_0x10a2f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x10a2f4) {
            ctx->pc = 0x10A220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a220;
        }
    }
    ctx->pc = 0x10A2FCu;
label_10a2fc:
    // 0x10a2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x10A2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2FCu;
        // 0x10a300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A304u;
    // 0x10a304: 0x0  nop
    ctx->pc = 0x10a304u;
    // NOP
    ctx->pc = 0x10a308u;
}
