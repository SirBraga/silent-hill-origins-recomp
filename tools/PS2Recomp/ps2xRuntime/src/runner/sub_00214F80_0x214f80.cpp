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

// Function: sub_00214F80
// Address: 0x214f80 - 0x215088
void sub_00214F80_0x214f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214F80_0x214f80");
#endif

    switch (ctx->pc) {
        case 0x214fb0u: goto label_214fb0;
        case 0x214fe0u: goto label_214fe0;
        default: break;
    }

    ctx->pc = 0x214f80u;

    // 0x214f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214f84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x214f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x214f88: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x214f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x214f8c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x214F8Cu;
    {
        const bool branch_taken_0x214f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F8Cu;
        // 0x214f90: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f8c) {
            ctx->pc = 0x21507Cu;
            goto label_21507c;
        }
    }
    ctx->pc = 0x214F94u;
    // 0x214f94: 0x248c0060  addiu       $t4, $a0, 0x60
    ctx->pc = 0x214f94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x214f98: 0x94480008  lhu         $t0, 0x8($v0)
    ctx->pc = 0x214f98u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x214f9c: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x214f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x214fa0: 0x180702d  daddu       $t6, $t4, $zero
    ctx->pc = 0x214fa0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214fa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fa8: 0x248d005c  addiu       $t5, $a0, 0x5C
    ctx->pc = 0x214fa8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x214fac: 0x0  nop
    ctx->pc = 0x214facu;
    // NOP
label_214fb0:
    // 0x214fb0: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x214fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x214fb4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x214fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fb8: 0x1a31021  addu        $v0, $t5, $v1
    ctx->pc = 0x214fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x214fbc: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x214fbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fc0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x214fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x214fc4: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x214fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x214fc8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x214fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x214fcc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x214fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fd0: 0x19000023  blez        $t0, . + 4 + (0x23 << 2)
    ctx->pc = 0x214FD0u;
    {
        const bool branch_taken_0x214fd0 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x214FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FD0u;
        // 0x214fd4: 0x252b0001  addiu       $t3, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fd0) {
            ctx->pc = 0x215060u;
            goto label_215060;
        }
    }
    ctx->pc = 0x214FD8u;
    // 0x214fd8: 0x1ca3021  addu        $a2, $t6, $t2
    ctx->pc = 0x214fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x214fdc: 0x0  nop
    ctx->pc = 0x214fdcu;
    // NOP
label_214fe0:
    // 0x214fe0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x214fe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214fe4: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x214fe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x214fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x214fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214fec: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x214fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x214ff0: 0x14490019  bne         $v0, $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x214FF0u;
    {
        const bool branch_taken_0x214ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x214FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FF0u;
        // 0x214ff4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ff0) {
            ctx->pc = 0x215058u;
            goto label_215058;
        }
    }
    ctx->pc = 0x214FF8u;
    // 0x214ff8: 0x50850014  beql        $a0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x214FF8u;
    {
        const bool branch_taken_0x214ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x214ff8) {
            ctx->pc = 0x214FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214FF8u;
            // 0x214ffc: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21504Cu;
            goto label_21504c;
        }
    }
    ctx->pc = 0x215000u;
    // 0x215000: 0x88a20003  lwl         $v0, 0x3($a1)
    ctx->pc = 0x215000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x215004: 0x98a20000  lwr         $v0, 0x0($a1)
    ctx->pc = 0x215004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x215008: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x215008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21500c: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x21500cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x215010: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x215010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x215014: 0xa7a30004  sh          $v1, 0x4($sp)
    ctx->pc = 0x215014u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x215018: 0x88820003  lwl         $v0, 0x3($a0)
    ctx->pc = 0x215018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x21501c: 0x98820000  lwr         $v0, 0x0($a0)
    ctx->pc = 0x21501cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x215020: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x215020u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x215024: 0xa8a20003  swl         $v0, 0x3($a1)
    ctx->pc = 0x215024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x215028: 0xb8a20000  swr         $v0, 0x0($a1)
    ctx->pc = 0x215028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x21502c: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x21502cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x215030: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x215030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x215034: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x215034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x215038: 0x87a30004  lh          $v1, 0x4($sp)
    ctx->pc = 0x215038u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21503c: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x21503cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x215040: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x215040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x215044: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x215044u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x215048: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x215048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21504c:
    // 0x21504c: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x21504cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x215050: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x215050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x215054: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x215054u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_215058:
    // 0x215058: 0x1ce0ffe1  bgtz        $a3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x215058u;
    {
        const bool branch_taken_0x215058 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x21505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215058u;
        // 0x21505c: 0x24840006  addiu       $a0, $a0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215058) {
            ctx->pc = 0x214FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214fe0;
        }
    }
    ctx->pc = 0x215060u;
label_215060:
    // 0x215060: 0x18a1021  addu        $v0, $t4, $t2
    ctx->pc = 0x215060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x215064: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x215064u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215068: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x215068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21506c: 0x29240040  slti        $a0, $t1, 0x40
    ctx->pc = 0x21506cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x215070: 0x1480ffcf  bnez        $a0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x215070u;
    {
        const bool branch_taken_0x215070 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215070u;
        // 0x215074: 0x1034023  subu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215070) {
            ctx->pc = 0x214FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214fb0;
        }
    }
    ctx->pc = 0x215078u;
    // 0x215078: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x215078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21507c:
    // 0x21507c: 0x3e00008  jr          $ra
    ctx->pc = 0x21507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21507Cu;
        // 0x215080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21507Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215084u;
    // 0x215084: 0x0  nop
    ctx->pc = 0x215084u;
    // NOP
    ctx->pc = 0x215088u;
}
