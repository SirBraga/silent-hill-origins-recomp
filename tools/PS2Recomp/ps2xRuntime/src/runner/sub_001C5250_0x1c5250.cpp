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

// Function: sub_001C5250
// Address: 0x1c5250 - 0x1c5480
void sub_001C5250_0x1c5250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5250_0x1c5250");
#endif

    switch (ctx->pc) {
        case 0x1c527cu: goto label_1c527c;
        case 0x1c52e4u: goto label_1c52e4;
        case 0x1c5340u: goto label_1c5340;
        case 0x1c53a8u: goto label_1c53a8;
        case 0x1c53b8u: goto label_1c53b8;
        case 0x1c53c8u: goto label_1c53c8;
        case 0x1c53dcu: goto label_1c53dc;
        case 0x1c53f0u: goto label_1c53f0;
        case 0x1c5414u: goto label_1c5414;
        case 0x1c5428u: goto label_1c5428;
        case 0x1c543cu: goto label_1c543c;
        case 0x1c544cu: goto label_1c544c;
        case 0x1c5454u: goto label_1c5454;
        default: break;
    }

    ctx->pc = 0x1c5250u;

    // 0x1c5250: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1c5250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1c5254: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1c5254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1c5258: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1c5258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1c525c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c525cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5260: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1c5260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1c5264: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1c5264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1c5268: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1c5268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1c526c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1c526cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1c5270: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c5270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c5274: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1C5274u;
    SET_GPR_U32(ctx, 31, 0x1C527Cu);
    ctx->pc = 0x1C5278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5274u;
    // 0x1c5278: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1C5274u, 0x1C527Cu)) {
        return;
    }
    ctx->pc = 0x1C527Cu;
label_1c527c:
    // 0x1c527c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c527cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c5280: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c5280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c5284: 0x2468ee30  addiu       $t0, $v1, -0x11D0
    ctx->pc = 0x1c5284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962736));
    // 0x1c5288: 0x26070260  addiu       $a3, $s0, 0x260
    ctx->pc = 0x1c5288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x1c528c: 0x2442ec50  addiu       $v0, $v0, -0x13B0
    ctx->pc = 0x1c528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962256));
    // 0x1c5290: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1c5290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c5294: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c5294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5298: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x1c5298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1c529c: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1c529cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1c52a0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1c52a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1c52a4: 0xae0403b8  sw          $a0, 0x3B8($s0)
    ctx->pc = 0x1c52a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 4));
    // 0x1c52a8: 0xae0503e4  sw          $a1, 0x3E4($s0)
    ctx->pc = 0x1c52a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 5));
    // 0x1c52ac: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x1c52acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
    // 0x1c52b0: 0xae0003bc  sw          $zero, 0x3BC($s0)
    ctx->pc = 0x1c52b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 956), GPR_U32(ctx, 0));
    // 0x1c52b4: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x1c52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    // 0x1c52b8: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x1c52b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
    // 0x1c52bc: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x1c52bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
    // 0x1c52c0: 0xae0003cc  sw          $zero, 0x3CC($s0)
    ctx->pc = 0x1c52c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 972), GPR_U32(ctx, 0));
    // 0x1c52c4: 0xae0003d0  sw          $zero, 0x3D0($s0)
    ctx->pc = 0x1c52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 0));
    // 0x1c52c8: 0xae0003d4  sw          $zero, 0x3D4($s0)
    ctx->pc = 0x1c52c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 980), GPR_U32(ctx, 0));
    // 0x1c52cc: 0xae0003d8  sw          $zero, 0x3D8($s0)
    ctx->pc = 0x1c52ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 984), GPR_U32(ctx, 0));
    // 0x1c52d0: 0xae0003dc  sw          $zero, 0x3DC($s0)
    ctx->pc = 0x1c52d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 988), GPR_U32(ctx, 0));
    // 0x1c52d4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C52D4u;
    {
        const bool branch_taken_0x1c52d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52D4u;
        // 0x1c52d8: 0xae0003e0  sw          $zero, 0x3E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52d4) {
            ctx->pc = 0x1C5338u;
            goto label_1c5338;
        }
    }
    ctx->pc = 0x1C52DCu;
    // 0x1c52dc: 0x25020140  addiu       $v0, $t0, 0x140
    ctx->pc = 0x1c52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 320));
    // 0x1c52e0: 0x3c15006a  lui         $s5, 0x6A
    ctx->pc = 0x1c52e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)106 << 16));
label_1c52e4:
    // 0x1c52e4: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x1c52e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c52e8: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x1c52e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c52ec: 0x6904000f  ldl         $a0, 0xF($t0)
    ctx->pc = 0x1c52ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1c52f0: 0x6d040008  ldr         $a0, 0x8($t0)
    ctx->pc = 0x1c52f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1c52f4: 0x69050017  ldl         $a1, 0x17($t0)
    ctx->pc = 0x1c52f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1c52f8: 0x6d050010  ldr         $a1, 0x10($t0)
    ctx->pc = 0x1c52f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1c52fc: 0x6906001f  ldl         $a2, 0x1F($t0)
    ctx->pc = 0x1c52fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1c5300: 0x6d060018  ldr         $a2, 0x18($t0)
    ctx->pc = 0x1c5300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1c5304: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x1c5304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5308: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x1c5308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c530c: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x1c530cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5310: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x1c5310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5314: 0xb0e50017  sdl         $a1, 0x17($a3)
    ctx->pc = 0x1c5314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5318: 0xb4e50010  sdr         $a1, 0x10($a3)
    ctx->pc = 0x1c5318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c531c: 0xb0e6001f  sdl         $a2, 0x1F($a3)
    ctx->pc = 0x1c531cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5320: 0xb4e60018  sdr         $a2, 0x18($a3)
    ctx->pc = 0x1c5320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5324: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1c5324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1c5328: 0x1502ffee  bne         $t0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C5328u;
    {
        const bool branch_taken_0x1c5328 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5328u;
        // 0x1c532c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5328) {
            ctx->pc = 0x1C52E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c52e4;
        }
    }
    ctx->pc = 0x1C5330u;
    // 0x1c5330: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C5330u;
    {
        const bool branch_taken_0x1c5330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5330) {
            ctx->pc = 0x1C536Cu;
            goto label_1c536c;
        }
    }
    ctx->pc = 0x1C5338u;
label_1c5338:
    // 0x1c5338: 0x25020140  addiu       $v0, $t0, 0x140
    ctx->pc = 0x1c5338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 320));
    // 0x1c533c: 0x3c15006a  lui         $s5, 0x6A
    ctx->pc = 0x1c533cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)106 << 16));
label_1c5340:
    // 0x1c5340: 0xdd090000  ld          $t1, 0x0($t0)
    ctx->pc = 0x1c5340u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c5344: 0xdd0a0008  ld          $t2, 0x8($t0)
    ctx->pc = 0x1c5344u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1c5348: 0xdd030010  ld          $v1, 0x10($t0)
    ctx->pc = 0x1c5348u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1c534c: 0xdd040018  ld          $a0, 0x18($t0)
    ctx->pc = 0x1c534cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1c5350: 0xfce90000  sd          $t1, 0x0($a3)
    ctx->pc = 0x1c5350u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 9));
    // 0x1c5354: 0xfcea0008  sd          $t2, 0x8($a3)
    ctx->pc = 0x1c5354u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
    // 0x1c5358: 0xfce30010  sd          $v1, 0x10($a3)
    ctx->pc = 0x1c5358u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 3));
    // 0x1c535c: 0xfce40018  sd          $a0, 0x18($a3)
    ctx->pc = 0x1c535cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 4));
    // 0x1c5360: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1c5360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1c5364: 0x1502fff6  bne         $t0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C5364u;
    {
        const bool branch_taken_0x1c5364 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C5368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5364u;
        // 0x1c5368: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5364) {
            ctx->pc = 0x1C5340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5340;
        }
    }
    ctx->pc = 0x1C536Cu;
label_1c536c:
    // 0x1c536c: 0x69090007  ldl         $t1, 0x7($t0)
    ctx->pc = 0x1c536cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1c5370: 0x6d090000  ldr         $t1, 0x0($t0)
    ctx->pc = 0x1c5370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1c5374: 0x690a000f  ldl         $t2, 0xF($t0)
    ctx->pc = 0x1c5374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1c5378: 0x6d0a0008  ldr         $t2, 0x8($t0)
    ctx->pc = 0x1c5378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1c537c: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x1c537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1c5380: 0xb0e90007  sdl         $t1, 0x7($a3)
    ctx->pc = 0x1c5380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5384: 0xb4e90000  sdr         $t1, 0x0($a3)
    ctx->pc = 0x1c5384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5388: 0xb0ea000f  sdl         $t2, 0xF($a3)
    ctx->pc = 0x1c5388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c538c: 0xb4ea0008  sdr         $t2, 0x8($a3)
    ctx->pc = 0x1c538cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5390: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c5390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5398: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c5398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c539c: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x1c539cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x1c53a0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C53A0u;
    SET_GPR_U32(ctx, 31, 0x1C53A8u);
    ctx->pc = 0x1C53A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53A0u;
    // 0x1c53a4: 0x26110284  addiu       $s1, $s0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C53A0u, 0x1C53A8u)) {
        return;
    }
    ctx->pc = 0x1C53A8u;
label_1c53a8:
    // 0x1c53a8: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1c53a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c53ac: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c53acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c53b0: 0x245298c0  addiu       $s2, $v0, -0x6740
    ctx->pc = 0x1c53b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940864));
    // 0x1c53b4: 0x0  nop
    ctx->pc = 0x1c53b4u;
    // NOP
label_1c53b8:
    // 0x1c53b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c53b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c53bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53c0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C53C0u;
    SET_GPR_U32(ctx, 31, 0x1C53C8u);
    ctx->pc = 0x1C53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53C0u;
    // 0x1c53c4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C53C0u, 0x1C53C8u)) {
        return;
    }
    ctx->pc = 0x1C53C8u;
label_1c53c8:
    // 0x1c53c8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1c53c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c53cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c53ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c53d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53d4: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C53D4u;
    SET_GPR_U32(ctx, 31, 0x1C53DCu);
    ctx->pc = 0x1C53D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53D4u;
    // 0x1c53d8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C53D4u, 0x1C53DCu)) {
        return;
    }
    ctx->pc = 0x1C53DCu;
label_1c53dc:
    // 0x1c53dc: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c53dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c53e0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C53E0u;
    {
        const bool branch_taken_0x1c53e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53E0u;
        // 0x1c53e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53e0) {
            ctx->pc = 0x1C53F4u;
            goto label_1c53f4;
        }
    }
    ctx->pc = 0x1C53E8u;
    // 0x1c53e8: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C53E8u;
    SET_GPR_U32(ctx, 31, 0x1C53F0u);
    ctx->pc = 0x1C53ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53E8u;
    // 0x1c53ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C53E8u, 0x1C53F0u)) {
        return;
    }
    ctx->pc = 0x1C53F0u;
label_1c53f0:
    // 0x1c53f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c53f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c53f4:
    // 0x1c53f4: 0x26310044  addiu       $s1, $s1, 0x44
    ctx->pc = 0x1c53f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x1c53f8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1c53f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1c53fc: 0x661ffee  bgez        $s3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C53FCu;
    {
        const bool branch_taken_0x1c53fc = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1C5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53FCu;
        // 0x1c5400: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53fc) {
            ctx->pc = 0x1C53B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c53b8;
        }
    }
    ctx->pc = 0x1C5404u;
    // 0x1c5404: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c5404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c540c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C540Cu;
    SET_GPR_U32(ctx, 31, 0x1C5414u);
    ctx->pc = 0x1C5410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C540Cu;
    // 0x1c5410: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C540Cu, 0x1C5414u)) {
        return;
    }
    ctx->pc = 0x1C5414u;
label_1c5414:
    // 0x1c5414: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c5414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5418: 0x26a5ec40  addiu       $a1, $s5, -0x13C0
    ctx->pc = 0x1c5418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962240));
    // 0x1c541c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c541cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5420: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C5420u;
    SET_GPR_U32(ctx, 31, 0x1C5428u);
    ctx->pc = 0x1C5424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5420u;
    // 0x1c5424: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C5420u, 0x1C5428u)) {
        return;
    }
    ctx->pc = 0x1C5428u;
label_1c5428:
    // 0x1c5428: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c5428u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c542c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C542Cu;
    {
        const bool branch_taken_0x1c542c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C542Cu;
        // 0x1c5430: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c542c) {
            ctx->pc = 0x1C5440u;
            goto label_1c5440;
        }
    }
    ctx->pc = 0x1C5434u;
    // 0x1c5434: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C5434u;
    SET_GPR_U32(ctx, 31, 0x1C543Cu);
    ctx->pc = 0x1C5438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5434u;
    // 0x1c5438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C5434u, 0x1C543Cu)) {
        return;
    }
    ctx->pc = 0x1C543Cu;
label_1c543c:
    // 0x1c543c: 0xae0203d4  sw          $v0, 0x3D4($s0)
    ctx->pc = 0x1c543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 980), GPR_U32(ctx, 2));
label_1c5440:
    // 0x1c5440: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c5440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5444: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1C5444u;
    SET_GPR_U32(ctx, 31, 0x1C544Cu);
    ctx->pc = 0x1C5448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5444u;
    // 0x1c5448: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1C5444u, 0x1C544Cu)) {
        return;
    }
    ctx->pc = 0x1C544Cu;
label_1c544c:
    // 0x1c544c: 0xc06db44  jal         func_1B6D10
    ctx->pc = 0x1C544Cu;
    SET_GPR_U32(ctx, 31, 0x1C5454u);
    ctx->pc = 0x1C5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C544Cu;
    // 0x1c5450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D10u, 0x1C544Cu, 0x1C5454u)) {
        return;
    }
    ctx->pc = 0x1C5454u;
label_1c5454:
    // 0x1c5454: 0xae0203b4  sw          $v0, 0x3B4($s0)
    ctx->pc = 0x1c5454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 2));
    // 0x1c5458: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c5458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c545c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1c545cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c5460: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1c5460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c5464: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1c5464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c5468: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1c5468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c546c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1c546cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c5470: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1c5470u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c5474: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c5474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c5478: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5478u;
        // 0x1c547c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5480u;
}
