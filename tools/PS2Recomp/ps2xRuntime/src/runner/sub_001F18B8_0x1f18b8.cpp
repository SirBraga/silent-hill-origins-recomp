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

// Function: sub_001F18B8
// Address: 0x1f18b8 - 0x1f1a90
void sub_001F18B8_0x1f18b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F18B8_0x1f18b8");
#endif

    switch (ctx->pc) {
        case 0x1f18c8u: goto label_1f18c8;
        case 0x1f18f0u: goto label_1f18f0;
        case 0x1f1930u: goto label_1f1930;
        case 0x1f1998u: goto label_1f1998;
        case 0x1f19b0u: goto label_1f19b0;
        case 0x1f1a30u: goto label_1f1a30;
        default: break;
    }

    ctx->pc = 0x1f18b8u;

    // 0x1f18b8: 0x8c822720  lw          $v0, 0x2720($a0)
    ctx->pc = 0x1f18b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10016)));
    // 0x1f18bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f18bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f18c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F18C0u;
    {
        const bool branch_taken_0x1f18c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18C0u;
        // 0x1f18c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18c0) {
            ctx->pc = 0x1F18E0u;
            goto label_1f18e0;
        }
    }
    ctx->pc = 0x1F18C8u;
label_1f18c8:
    // 0x1f18c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f18cc: 0x0  nop
    ctx->pc = 0x1f18ccu;
    // NOP
    // 0x1f18d0: 0x0  nop
    ctx->pc = 0x1f18d0u;
    // NOP
    // 0x1f18d4: 0x0  nop
    ctx->pc = 0x1f18d4u;
    // NOP
    // 0x1f18d8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F18D8u;
    {
        const bool branch_taken_0x1f18d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18D8u;
        // 0x1f18dc: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18d8) {
            ctx->pc = 0x1F18C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f18c8;
        }
    }
    ctx->pc = 0x1F18E0u;
label_1f18e0:
    // 0x1f18e0: 0x8c892718  lw          $t1, 0x2718($a0)
    ctx->pc = 0x1f18e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10008)));
    // 0x1f18e4: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F18E4u;
    {
        const bool branch_taken_0x1f18e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18E4u;
        // 0x1f18e8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18e4) {
            ctx->pc = 0x1F1908u;
            goto label_1f1908;
        }
    }
    ctx->pc = 0x1F18ECu;
    // 0x1f18ec: 0x0  nop
    ctx->pc = 0x1f18ecu;
    // NOP
label_1f18f0:
    // 0x1f18f0: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1f18f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f18f4: 0x2542fffe  addiu       $v0, $t2, -0x2
    ctx->pc = 0x1f18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x1f18f8: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x1f18f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1f18fc: 0x0  nop
    ctx->pc = 0x1f18fcu;
    // NOP
    // 0x1f1900: 0x1520fffb  bnez        $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F1900u;
    {
        const bool branch_taken_0x1f1900 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1900u;
        // 0x1f1904: 0x435021  addu        $t2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1900) {
            ctx->pc = 0x1F18F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f18f0;
        }
    }
    ctx->pc = 0x1F1908u;
label_1f1908:
    // 0x1f1908: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x1f1908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1f190c: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x1f190cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x1f1910: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1f1910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1f1914: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1f1914u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1f1918: 0x8c822720  lw          $v0, 0x2720($a0)
    ctx->pc = 0x1f1918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10016)));
    // 0x1f191c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F191Cu;
    {
        const bool branch_taken_0x1f191c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F191Cu;
        // 0x1f1920: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f191c) {
            ctx->pc = 0x1F1988u;
            goto label_1f1988;
        }
    }
    ctx->pc = 0x1F1924u;
    // 0x1f1924: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x1f1924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1f1928: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f1928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f192c: 0x0  nop
    ctx->pc = 0x1f192cu;
    // NOP
label_1f1930:
    // 0x1f1930: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1f1930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1934: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f1934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f1938: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f1938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f193c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f193cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f1940: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f1940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1944: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f1944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f1948: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x1f1948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f194c: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x1f194cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f1950: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x1f1950u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f1954: 0xb0a8fffb  sdl         $t0, -0x5($a1)
    ctx->pc = 0x1f1954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1958: 0xb4a8fff4  sdr         $t0, -0xC($a1)
    ctx->pc = 0x1f1958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f195c: 0xaca9fffc  sw          $t1, -0x4($a1)
    ctx->pc = 0x1f195cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 9));
    // 0x1f1960: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1f1960u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1964: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1f1964u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1968: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1f1968u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f196c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1f196cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1970: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x1f1970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x1f1974: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f1974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1978: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x1f1978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x1f197c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F197Cu;
    {
        const bool branch_taken_0x1f197c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F197Cu;
        // 0x1f1980: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f197c) {
            ctx->pc = 0x1F1930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1930;
        }
    }
    ctx->pc = 0x1F1984u;
    // 0x1f1984: 0x0  nop
    ctx->pc = 0x1f1984u;
    // NOP
label_1f1988:
    // 0x1f1988: 0x8c882718  lw          $t0, 0x2718($a0)
    ctx->pc = 0x1f1988u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10008)));
    // 0x1f198c: 0x1100003e  beqz        $t0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1F198Cu;
    {
        const bool branch_taken_0x1f198c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f198c) {
            ctx->pc = 0x1F1A88u;
            goto label_1f1a88;
        }
    }
    ctx->pc = 0x1F1994u;
    // 0x1f1994: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x1f1994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1f1998:
    // 0x1f1998: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1f1998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f199c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F199Cu;
    {
        const bool branch_taken_0x1f199c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F199Cu;
        // 0x1f19a0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f199c) {
            ctx->pc = 0x1F1A20u;
            goto label_1f1a20;
        }
    }
    ctx->pc = 0x1F19A4u;
    // 0x1f19a4: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F19A4u;
    {
        const bool branch_taken_0x1f19a4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1F19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19A4u;
        // 0x1f19a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19a4) {
            ctx->pc = 0x1F1A20u;
            goto label_1f1a20;
        }
    }
    ctx->pc = 0x1F19ACu;
    // 0x1f19ac: 0x2509000c  addiu       $t1, $t0, 0xC
    ctx->pc = 0x1f19acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_1f19b0:
    // 0x1f19b0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f19b4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F19B4u;
    {
        const bool branch_taken_0x1f19b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f19b4) {
            ctx->pc = 0x1F19B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F19B4u;
            // 0x1f19b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F19BCu;
            goto label_1f19bc;
        }
    }
    ctx->pc = 0x1F19BCu;
label_1f19bc:
    // 0x1f19bc: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1f19bcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f19c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f19c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f19c4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1f19c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1f19c8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1f19c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f19cc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f19ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f19d0: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1f19d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f19d4: 0x1810  mfhi        $v1
    ctx->pc = 0x1f19d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f19d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f19dc: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1f19dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1f19e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f19e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f19e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f19e8: 0x50c20009  beql        $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F19E8u;
    {
        const bool branch_taken_0x1f19e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f19e8) {
            ctx->pc = 0x1F19ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F19E8u;
            // 0x1f19ec: 0x8d050004  lw          $a1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1A10u;
            goto label_1f1a10;
        }
    }
    ctx->pc = 0x1F19F0u;
    // 0x1f19f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f19f4: 0x50c20006  beql        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F19F4u;
    {
        const bool branch_taken_0x1f19f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f19f4) {
            ctx->pc = 0x1F19F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F19F4u;
            // 0x1f19f8: 0x8d050004  lw          $a1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1A10u;
            goto label_1f1a10;
        }
    }
    ctx->pc = 0x1F19FCu;
    // 0x1f19fc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1f19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f1a00: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1f1a00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1f1a04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f1a08: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1f1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1f1a0c: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x1f1a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1f1a10:
    // 0x1f1a10: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1f1a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a14: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1f1a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f1a18: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1F1A18u;
    {
        const bool branch_taken_0x1f1a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A18u;
        // 0x1f1a1c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a18) {
            ctx->pc = 0x1F19B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f19b0;
        }
    }
    ctx->pc = 0x1F1A20u;
label_1f1a20:
    // 0x1f1a20: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x1f1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1f1a24: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F1A24u;
    {
        const bool branch_taken_0x1f1a24 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F1A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A24u;
        // 0x1f1a28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a24) {
            ctx->pc = 0x1F1A7Cu;
            goto label_1f1a7c;
        }
    }
    ctx->pc = 0x1F1A2Cu;
    // 0x1f1a2c: 0x25060014  addiu       $a2, $t0, 0x14
    ctx->pc = 0x1f1a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
label_1f1a30:
    // 0x1f1a30: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x1f1a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1f1a34: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f1a34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f1a38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f1a3c: 0x94430018  lhu         $v1, 0x18($v0)
    ctx->pc = 0x1f1a3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1f1a40: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x1f1a40u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f1a44: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x1f1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x1f1a48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f1a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f1a4c: 0x94640018  lhu         $a0, 0x18($v1)
    ctx->pc = 0x1f1a4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1f1a50: 0xa4e40004  sh          $a0, 0x4($a3)
    ctx->pc = 0x1f1a50u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f1a54: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1f1a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f1a58: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1f1a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1f1a5c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1f1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f1a60: 0x94430018  lhu         $v1, 0x18($v0)
    ctx->pc = 0x1f1a60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1f1a64: 0xa4e30002  sh          $v1, 0x2($a3)
    ctx->pc = 0x1f1a64u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f1a68: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1f1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1f1a6c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1f1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1f1a70: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x1f1a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f1a74: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1F1A74u;
    {
        const bool branch_taken_0x1f1a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A74u;
        // 0x1f1a78: 0x24e70006  addiu       $a3, $a3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a74) {
            ctx->pc = 0x1F1A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1a30;
        }
    }
    ctx->pc = 0x1F1A7Cu;
label_1f1a7c:
    // 0x1f1a7c: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x1f1a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f1a80: 0x5500ffc5  bnel        $t0, $zero, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1F1A80u;
    {
        const bool branch_taken_0x1f1a80 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a80) {
            ctx->pc = 0x1F1A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1A80u;
            // 0x1f1a84: 0x8d050004  lw          $a1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1998;
        }
    }
    ctx->pc = 0x1F1A88u;
label_1f1a88:
    // 0x1f1a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A88u;
        // 0x1f1a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1A90u;
}
