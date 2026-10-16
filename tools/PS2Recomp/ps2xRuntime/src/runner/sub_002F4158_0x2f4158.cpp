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

// Function: sub_002F4158
// Address: 0x2f4158 - 0x2f4300
void sub_002F4158_0x2f4158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4158_0x2f4158");
#endif

    switch (ctx->pc) {
        case 0x2f41a8u: goto label_2f41a8;
        case 0x2f41ccu: goto label_2f41cc;
        case 0x2f41ecu: goto label_2f41ec;
        case 0x2f4248u: goto label_2f4248;
        case 0x2f4290u: goto label_2f4290;
        case 0x2f42a8u: goto label_2f42a8;
        default: break;
    }

    ctx->pc = 0x2f4158u;

    // 0x2f4158: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f4158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f415c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f4160: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f4160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f4164: 0x3c158101  lui         $s5, 0x8101
    ctx->pc = 0x2f4164u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4168: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f4168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f416c: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x2f416cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x2f4170: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f4170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f4174: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x2f4174u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
    // 0x2f4178: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f4178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f417c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2f417cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4180: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f4180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f4184: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f4184u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4188: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f4188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f418c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f418cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4190: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f4190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f4194: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f4194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4198: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f4198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f419c: 0x36b5006f  ori         $s5, $s5, 0x6F
    ctx->pc = 0x2f419cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)111);
    // 0x2f41a0: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2f41a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x2f41a4: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2f41a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_2f41a8:
    // 0x2f41a8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2f41a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f41ac: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F41ACu;
    {
        const bool branch_taken_0x2f41ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41ACu;
        // 0x2f41b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41ac) {
            ctx->pc = 0x2F429Cu;
            goto label_2f429c;
        }
    }
    ctx->pc = 0x2F41B4u;
    // 0x2f41b4: 0x3c130072  lui         $s3, 0x72
    ctx->pc = 0x2f41b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)114 << 16));
    // 0x2f41b8: 0x2672c880  addiu       $s2, $s3, -0x3780
    ctx->pc = 0x2f41b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294953088));
    // 0x2f41bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f41bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f41c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f41c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f41c4: 0xc0bdb5e  jal         func_2F6D78
    ctx->pc = 0x2F41C4u;
    SET_GPR_U32(ctx, 31, 0x2F41CCu);
    ctx->pc = 0x2F41C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F41C4u;
    // 0x2f41c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D78u, 0x2F41C4u, 0x2F41CCu)) {
        return;
    }
    ctx->pc = 0x2F41CCu;
label_2f41cc:
    // 0x2f41cc: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2F41CCu;
    {
        const bool branch_taken_0x2f41cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41CCu;
        // 0x2f41d0: 0x111a40  sll         $v1, $s1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41cc) {
            ctx->pc = 0x2F42CCu;
            goto label_2f42cc;
        }
    }
    ctx->pc = 0x2F41D4u;
    // 0x2f41d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f41d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f41d8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2f41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2f41dc: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x2f41dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2f41e0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f41e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f41e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F41E4u;
    {
        const bool branch_taken_0x2f41e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41E4u;
        // 0x2f41e8: 0x24a20200  addiu       $v0, $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41e4) {
            ctx->pc = 0x2F4248u;
            goto label_2f4248;
        }
    }
    ctx->pc = 0x2F41ECu;
label_2f41ec:
    // 0x2f41ec: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x2f41ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f41f0: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x2f41f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f41f4: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x2f41f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f41f8: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x2f41f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f41fc: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x2f41fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f4200: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x2f4200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f4204: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x2f4204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f4208: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x2f4208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f420c: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x2f420cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4210: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x2f4210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4214: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x2f4214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4218: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x2f4218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f421c: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x2f421cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4220: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x2f4220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4224: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x2f4224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4228: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x2f4228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f422c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2f422cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f4230: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f4230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f4234: 0x0  nop
    ctx->pc = 0x2f4234u;
    // NOP
    // 0x2f4238: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F4238u;
    {
        const bool branch_taken_0x2f4238 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4238) {
            ctx->pc = 0x2F41ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f41ec;
        }
    }
    ctx->pc = 0x2F4240u;
    // 0x2f4240: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F4240u;
    {
        const bool branch_taken_0x2f4240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4240u;
        // 0x2f4244: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4240) {
            ctx->pc = 0x2F4280u;
            goto label_2f4280;
        }
    }
    ctx->pc = 0x2F4248u;
label_2f4248:
    // 0x2f4248: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2f4248u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f424c: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x2f424cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f4250: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x2f4250u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2f4254: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x2f4254u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2f4258: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2f4258u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2f425c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2f425cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2f4260: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x2f4260u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x2f4264: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x2f4264u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x2f4268: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2f4268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f426c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f4270: 0x0  nop
    ctx->pc = 0x2f4270u;
    // NOP
    // 0x2f4274: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F4274u;
    {
        const bool branch_taken_0x2f4274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4274) {
            ctx->pc = 0x2F4248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4248;
        }
    }
    ctx->pc = 0x2F427Cu;
    // 0x2f427c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f427cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f4280:
    // 0x2f4280: 0x2665c880  addiu       $a1, $s3, -0x3780
    ctx->pc = 0x2f4280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294953088));
    // 0x2f4284: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f4284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4288: 0xc0bdb66  jal         func_2F6D98
    ctx->pc = 0x2F4288u;
    SET_GPR_U32(ctx, 31, 0x2F4290u);
    ctx->pc = 0x2F428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4288u;
    // 0x2f428c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D98u, 0x2F4288u, 0x2F4290u)) {
        return;
    }
    ctx->pc = 0x2F4290u;
label_2f4290:
    // 0x2f4290: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x2f4290u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0));
    // 0x2f4294: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F4294u;
    {
        const bool branch_taken_0x2f4294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4294u;
        // 0x2f4298: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4294) {
            ctx->pc = 0x2F42D4u;
            goto label_2f42d4;
        }
    }
    ctx->pc = 0x2F429Cu;
label_2f429c:
    // 0x2f429c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f429cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f42a0: 0xc0bc95c  jal         func_2F2570
    ctx->pc = 0x2F42A0u;
    SET_GPR_U32(ctx, 31, 0x2F42A8u);
    ctx->pc = 0x2F42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F42A0u;
    // 0x2f42a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2570u, 0x2F42A0u, 0x2F42A8u)) {
        return;
    }
    ctx->pc = 0x2F42A8u;
label_2f42a8:
    // 0x2f42a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f42a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f42ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F42ACu;
    {
        const bool branch_taken_0x2f42ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42ACu;
        // 0x2f42b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42ac) {
            ctx->pc = 0x2F42BCu;
            goto label_2f42bc;
        }
    }
    ctx->pc = 0x2F42B4u;
    // 0x2f42b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F42B4u;
    {
        const bool branch_taken_0x2f42b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42B4u;
        // 0x2f42b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42b4) {
            ctx->pc = 0x2F42D4u;
            goto label_2f42d4;
        }
    }
    ctx->pc = 0x2F42BCu;
label_2f42bc:
    // 0x2f42bc: 0x12130003  beq         $s0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F42BCu;
    {
        const bool branch_taken_0x2f42bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x2F42C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42BCu;
        // 0x2f42c0: 0x2128024  and         $s0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42bc) {
            ctx->pc = 0x2F42CCu;
            goto label_2f42cc;
        }
    }
    ctx->pc = 0x2F42C4u;
    // 0x2f42c4: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x2F42C4u;
    {
        const bool branch_taken_0x2f42c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42C4u;
        // 0x2f42c8: 0x2631fffe  addiu       $s1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42c4) {
            ctx->pc = 0x2F41A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f41a8;
        }
    }
    ctx->pc = 0x2F42CCu;
label_2f42cc:
    // 0x2f42cc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f42d0: 0x3442006f  ori         $v0, $v0, 0x6F
    ctx->pc = 0x2f42d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
label_2f42d4:
    // 0x2f42d4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f42d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f42d8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f42d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f42dc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f42dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f42e0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f42e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f42e4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f42e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f42e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f42e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f42ec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f42ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f42f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f42f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f42f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F42F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42F4u;
        // 0x2f42f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F42F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F42FCu;
    // 0x2f42fc: 0x0  nop
    ctx->pc = 0x2f42fcu;
    // NOP
    ctx->pc = 0x2f4300u;
}
