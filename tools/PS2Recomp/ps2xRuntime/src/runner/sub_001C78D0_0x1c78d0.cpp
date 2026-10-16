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

// Function: sub_001C78D0
// Address: 0x1c78d0 - 0x1c7a30
void sub_001C78D0_0x1c78d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C78D0_0x1c78d0");
#endif

    switch (ctx->pc) {
        case 0x1c78ecu: goto label_1c78ec;
        case 0x1c7940u: goto label_1c7940;
        case 0x1c7948u: goto label_1c7948;
        case 0x1c79a4u: goto label_1c79a4;
        case 0x1c79bcu: goto label_1c79bc;
        case 0x1c79d0u: goto label_1c79d0;
        case 0x1c79e4u: goto label_1c79e4;
        case 0x1c79fcu: goto label_1c79fc;
        case 0x1c7a10u: goto label_1c7a10;
        default: break;
    }

    ctx->pc = 0x1c78d0u;

    // 0x1c78d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c78d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c78d4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c78d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c78d8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c78d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c78dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c78dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78e0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c78e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c78e4: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1C78E4u;
    SET_GPR_U32(ctx, 31, 0x1C78ECu);
    ctx->pc = 0x1C78E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78E4u;
    // 0x1c78e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1C78E4u, 0x1C78ECu)) {
        return;
    }
    ctx->pc = 0x1C78ECu;
label_1c78ec:
    // 0x1c78ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c78ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c78f0: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1c78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1c78f4: 0x2463f2d8  addiu       $v1, $v1, -0xD28
    ctx->pc = 0x1c78f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963928));
    // 0x1c78f8: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1c78f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1c78fc: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c78fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1c7900: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c7900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7904: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1c7904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1c7908: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1c7908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c790c: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1c790cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1c7910: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1c7910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1c7914: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1c7914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1c7918: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1c7918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x1c791c: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1c791cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x1c7920: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x1c7920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x1c7924: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x1c7924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x1c7928: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1c7928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1c792c: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1c792cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x1c7930: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x1c7930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x1c7934: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x1c7934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x1c7938: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1C7938u;
    SET_GPR_U32(ctx, 31, 0x1C7940u);
    ctx->pc = 0x1C793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7938u;
    // 0x1c793c: 0xae030258  sw          $v1, 0x258($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1C7938u, 0x1C7940u)) {
        return;
    }
    ctx->pc = 0x1C7940u;
label_1c7940:
    // 0x1c7940: 0xc06db44  jal         func_1B6D10
    ctx->pc = 0x1C7940u;
    SET_GPR_U32(ctx, 31, 0x1C7948u);
    ctx->pc = 0x1C7944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7940u;
    // 0x1c7944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D10u, 0x1C7940u, 0x1C7948u)) {
        return;
    }
    ctx->pc = 0x1C7948u;
label_1c7948:
    // 0x1c7948: 0xae020260  sw          $v0, 0x260($s0)
    ctx->pc = 0x1c7948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 2));
    // 0x1c794c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c794cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7950: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c7950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c7954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7958: 0x2449f410  addiu       $t1, $v0, -0xBF0
    ctx->pc = 0x1c7958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964240));
    // 0x1c795c: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x1c795cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c7960: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x1c7960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c7964: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x1c7964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1c7968: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x1c7968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1c796c: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x1c796cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1c7970: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x1c7970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1c7974: 0xb203027f  sdl         $v1, 0x27F($s0)
    ctx->pc = 0x1c7974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 639); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7978: 0xb6030278  sdr         $v1, 0x278($s0)
    ctx->pc = 0x1c7978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 632); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c797c: 0xb2070287  sdl         $a3, 0x287($s0)
    ctx->pc = 0x1c797cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 647); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7980: 0xb6070280  sdr         $a3, 0x280($s0)
    ctx->pc = 0x1c7980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 640); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7984: 0xb208028f  sdl         $t0, 0x28F($s0)
    ctx->pc = 0x1c7984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 655); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7988: 0xb6080288  sdr         $t0, 0x288($s0)
    ctx->pc = 0x1c7988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 648); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c798c: 0x6923001f  ldl         $v1, 0x1F($t1)
    ctx->pc = 0x1c798cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c7990: 0x6d230018  ldr         $v1, 0x18($t1)
    ctx->pc = 0x1c7990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c7994: 0xb2030297  sdl         $v1, 0x297($s0)
    ctx->pc = 0x1c7994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7998: 0xb6030290  sdr         $v1, 0x290($s0)
    ctx->pc = 0x1c7998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 656); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c799c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C799Cu;
    SET_GPR_U32(ctx, 31, 0x1C79A4u);
    ctx->pc = 0x1C79A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C799Cu;
    // 0x1c79a0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C799Cu, 0x1C79A4u)) {
        return;
    }
    ctx->pc = 0x1C79A4u;
label_1c79a4:
    // 0x1c79a4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c79a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c79a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c79a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79ac: 0x24a5f2a0  addiu       $a1, $a1, -0xD60
    ctx->pc = 0x1c79acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963872));
    // 0x1c79b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c79b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79b4: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C79B4u;
    SET_GPR_U32(ctx, 31, 0x1C79BCu);
    ctx->pc = 0x1C79B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79B4u;
    // 0x1c79b8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C79B4u, 0x1C79BCu)) {
        return;
    }
    ctx->pc = 0x1C79BCu;
label_1c79bc:
    // 0x1c79bc: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c79bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c79c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C79C0u;
    {
        const bool branch_taken_0x1c79c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79C0u;
        // 0x1c79c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79c0) {
            ctx->pc = 0x1C79D4u;
            goto label_1c79d4;
        }
    }
    ctx->pc = 0x1C79C8u;
    // 0x1c79c8: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C79C8u;
    SET_GPR_U32(ctx, 31, 0x1C79D0u);
    ctx->pc = 0x1C79CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79C8u;
    // 0x1c79cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C79C8u, 0x1C79D0u)) {
        return;
    }
    ctx->pc = 0x1C79D0u;
label_1c79d0:
    // 0x1c79d0: 0xae020268  sw          $v0, 0x268($s0)
    ctx->pc = 0x1c79d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
label_1c79d4:
    // 0x1c79d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c79d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c79d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79dc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C79DCu;
    SET_GPR_U32(ctx, 31, 0x1C79E4u);
    ctx->pc = 0x1C79E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79DCu;
    // 0x1c79e0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C79DCu, 0x1C79E4u)) {
        return;
    }
    ctx->pc = 0x1C79E4u;
label_1c79e4:
    // 0x1c79e4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c79e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c79e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c79e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79ec: 0x24a5f2b0  addiu       $a1, $a1, -0xD50
    ctx->pc = 0x1c79ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963888));
    // 0x1c79f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c79f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79f4: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C79F4u;
    SET_GPR_U32(ctx, 31, 0x1C79FCu);
    ctx->pc = 0x1C79F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79F4u;
    // 0x1c79f8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C79F4u, 0x1C79FCu)) {
        return;
    }
    ctx->pc = 0x1C79FCu;
label_1c79fc:
    // 0x1c79fc: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c79fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7a00: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7A00u;
    {
        const bool branch_taken_0x1c7a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A00u;
        // 0x1c7a04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a00) {
            ctx->pc = 0x1C7A14u;
            goto label_1c7a14;
        }
    }
    ctx->pc = 0x1C7A08u;
    // 0x1c7a08: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C7A08u;
    SET_GPR_U32(ctx, 31, 0x1C7A10u);
    ctx->pc = 0x1C7A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A08u;
    // 0x1c7a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C7A08u, 0x1C7A10u)) {
        return;
    }
    ctx->pc = 0x1C7A10u;
label_1c7a10:
    // 0x1c7a10: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1c7a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
label_1c7a14:
    // 0x1c7a14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c7a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a18: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c7a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c7a1c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c7a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c7a20: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c7a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c7a24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A24u;
        // 0x1c7a28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7A2Cu;
    // 0x1c7a2c: 0x0  nop
    ctx->pc = 0x1c7a2cu;
    // NOP
    ctx->pc = 0x1c7a30u;
}
