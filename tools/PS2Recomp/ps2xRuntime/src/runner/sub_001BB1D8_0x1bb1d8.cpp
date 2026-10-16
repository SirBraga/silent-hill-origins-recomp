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

// Function: sub_001BB1D8
// Address: 0x1bb1d8 - 0x1bb378
void sub_001BB1D8_0x1bb1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB1D8_0x1bb1d8");
#endif

    switch (ctx->pc) {
        case 0x1bb1d8u: goto label_1bb1d8;
        case 0x1bb1dcu: goto label_1bb1dc;
        case 0x1bb1e0u: goto label_1bb1e0;
        case 0x1bb1e4u: goto label_1bb1e4;
        case 0x1bb1e8u: goto label_1bb1e8;
        case 0x1bb1ecu: goto label_1bb1ec;
        case 0x1bb1f0u: goto label_1bb1f0;
        case 0x1bb1f4u: goto label_1bb1f4;
        case 0x1bb1f8u: goto label_1bb1f8;
        case 0x1bb1fcu: goto label_1bb1fc;
        case 0x1bb200u: goto label_1bb200;
        case 0x1bb204u: goto label_1bb204;
        case 0x1bb208u: goto label_1bb208;
        case 0x1bb20cu: goto label_1bb20c;
        case 0x1bb210u: goto label_1bb210;
        case 0x1bb214u: goto label_1bb214;
        case 0x1bb218u: goto label_1bb218;
        case 0x1bb21cu: goto label_1bb21c;
        case 0x1bb220u: goto label_1bb220;
        case 0x1bb224u: goto label_1bb224;
        case 0x1bb228u: goto label_1bb228;
        case 0x1bb22cu: goto label_1bb22c;
        case 0x1bb230u: goto label_1bb230;
        case 0x1bb234u: goto label_1bb234;
        case 0x1bb238u: goto label_1bb238;
        case 0x1bb23cu: goto label_1bb23c;
        case 0x1bb240u: goto label_1bb240;
        case 0x1bb244u: goto label_1bb244;
        case 0x1bb248u: goto label_1bb248;
        case 0x1bb24cu: goto label_1bb24c;
        case 0x1bb250u: goto label_1bb250;
        case 0x1bb254u: goto label_1bb254;
        case 0x1bb258u: goto label_1bb258;
        case 0x1bb25cu: goto label_1bb25c;
        case 0x1bb260u: goto label_1bb260;
        case 0x1bb264u: goto label_1bb264;
        case 0x1bb268u: goto label_1bb268;
        case 0x1bb26cu: goto label_1bb26c;
        case 0x1bb270u: goto label_1bb270;
        case 0x1bb274u: goto label_1bb274;
        case 0x1bb278u: goto label_1bb278;
        case 0x1bb27cu: goto label_1bb27c;
        case 0x1bb280u: goto label_1bb280;
        case 0x1bb284u: goto label_1bb284;
        case 0x1bb288u: goto label_1bb288;
        case 0x1bb28cu: goto label_1bb28c;
        case 0x1bb290u: goto label_1bb290;
        case 0x1bb294u: goto label_1bb294;
        case 0x1bb298u: goto label_1bb298;
        case 0x1bb29cu: goto label_1bb29c;
        case 0x1bb2a0u: goto label_1bb2a0;
        case 0x1bb2a4u: goto label_1bb2a4;
        case 0x1bb2a8u: goto label_1bb2a8;
        case 0x1bb2acu: goto label_1bb2ac;
        case 0x1bb2b0u: goto label_1bb2b0;
        case 0x1bb2b4u: goto label_1bb2b4;
        case 0x1bb2b8u: goto label_1bb2b8;
        case 0x1bb2bcu: goto label_1bb2bc;
        case 0x1bb2c0u: goto label_1bb2c0;
        case 0x1bb2c4u: goto label_1bb2c4;
        case 0x1bb2c8u: goto label_1bb2c8;
        case 0x1bb2ccu: goto label_1bb2cc;
        case 0x1bb2d0u: goto label_1bb2d0;
        case 0x1bb2d4u: goto label_1bb2d4;
        case 0x1bb2d8u: goto label_1bb2d8;
        case 0x1bb2dcu: goto label_1bb2dc;
        case 0x1bb2e0u: goto label_1bb2e0;
        case 0x1bb2e4u: goto label_1bb2e4;
        case 0x1bb2e8u: goto label_1bb2e8;
        case 0x1bb2ecu: goto label_1bb2ec;
        case 0x1bb2f0u: goto label_1bb2f0;
        case 0x1bb2f4u: goto label_1bb2f4;
        case 0x1bb2f8u: goto label_1bb2f8;
        case 0x1bb2fcu: goto label_1bb2fc;
        case 0x1bb300u: goto label_1bb300;
        case 0x1bb304u: goto label_1bb304;
        case 0x1bb308u: goto label_1bb308;
        case 0x1bb30cu: goto label_1bb30c;
        case 0x1bb310u: goto label_1bb310;
        case 0x1bb314u: goto label_1bb314;
        case 0x1bb318u: goto label_1bb318;
        case 0x1bb31cu: goto label_1bb31c;
        case 0x1bb320u: goto label_1bb320;
        case 0x1bb324u: goto label_1bb324;
        case 0x1bb328u: goto label_1bb328;
        case 0x1bb32cu: goto label_1bb32c;
        case 0x1bb330u: goto label_1bb330;
        case 0x1bb334u: goto label_1bb334;
        case 0x1bb338u: goto label_1bb338;
        case 0x1bb33cu: goto label_1bb33c;
        case 0x1bb340u: goto label_1bb340;
        case 0x1bb344u: goto label_1bb344;
        case 0x1bb348u: goto label_1bb348;
        case 0x1bb34cu: goto label_1bb34c;
        case 0x1bb350u: goto label_1bb350;
        case 0x1bb354u: goto label_1bb354;
        case 0x1bb358u: goto label_1bb358;
        case 0x1bb35cu: goto label_1bb35c;
        case 0x1bb360u: goto label_1bb360;
        case 0x1bb364u: goto label_1bb364;
        case 0x1bb368u: goto label_1bb368;
        case 0x1bb36cu: goto label_1bb36c;
        case 0x1bb370u: goto label_1bb370;
        case 0x1bb374u: goto label_1bb374;
        default: break;
    }

    ctx->pc = 0x1bb1d8u;

label_1bb1d8:
    // 0x1bb1d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bb1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1bb1dc:
    // 0x1bb1dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1bb1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1bb1e0:
    // 0x1bb1e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1bb1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1bb1e4:
    // 0x1bb1e4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1bb1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1bb1e8:
    // 0x1bb1e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bb1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb1ec:
    // 0x1bb1ec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bb1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1bb1f0:
    // 0x1bb1f0: 0x2446d770  addiu       $a2, $v0, -0x2890
    ctx->pc = 0x1bb1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956912));
label_1bb1f4:
    // 0x1bb1f4: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x1bb1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_1bb1f8:
    // 0x1bb1f8: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x1bb1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_1bb1fc:
    // 0x1bb1fc: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x1bb1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb200:
    // 0x1bb200: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x1bb200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb204:
    // 0x1bb204: 0xa3a00003  sb          $zero, 0x3($sp)
    ctx->pc = 0x1bb204u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
label_1bb208:
    // 0x1bb208: 0x240400c3  addiu       $a0, $zero, 0xC3
    ctx->pc = 0x1bb208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
label_1bb20c:
    // 0x1bb20c: 0x8e230298  lw          $v1, 0x298($s1)
    ctx->pc = 0x1bb20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_1bb210:
    // 0x1bb210: 0x2446d770  addiu       $a2, $v0, -0x2890
    ctx->pc = 0x1bb210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956912));
label_1bb214:
    // 0x1bb214: 0x88c70003  lwl         $a3, 0x3($a2)
    ctx->pc = 0x1bb214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_1bb218:
    // 0x1bb218: 0x98c70000  lwr         $a3, 0x0($a2)
    ctx->pc = 0x1bb218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_1bb21c:
    // 0x1bb21c: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x1bb21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb220:
    // 0x1bb220: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x1bb220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb224:
    // 0x1bb224: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_1bb228:
    if (ctx->pc == 0x1BB228u) {
        ctx->pc = 0x1BB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB224u;
        // 0x1bb228: 0xa3a40013  sb          $a0, 0x13($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB22Cu;
        goto label_1bb22c;
    }
    ctx->pc = 0x1BB224u;
    {
        const bool branch_taken_0x1bb224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB224u;
        // 0x1bb228: 0xa3a40013  sb          $a0, 0x13($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb224) {
            ctx->pc = 0x1BB324u;
            goto label_1bb324;
        }
    }
    ctx->pc = 0x1BB22Cu;
label_1bb22c:
    // 0x1bb22c: 0x8e22029c  lw          $v0, 0x29C($s1)
    ctx->pc = 0x1bb22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
label_1bb230:
    // 0x1bb230: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1bb234:
    if (ctx->pc == 0x1BB234u) {
        ctx->pc = 0x1BB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB230u;
        // 0x1bb234: 0x263002a8  addiu       $s0, $s1, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB238u;
        goto label_1bb238;
    }
    ctx->pc = 0x1BB230u;
    {
        const bool branch_taken_0x1bb230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB230u;
        // 0x1bb234: 0x263002a8  addiu       $s0, $s1, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb230) {
            ctx->pc = 0x1BB280u;
            goto label_1bb280;
        }
    }
    ctx->pc = 0x1BB238u;
label_1bb238:
    // 0x1bb238: 0x8ba70003  lwl         $a3, 0x3($sp)
    ctx->pc = 0x1bb238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_1bb23c:
    // 0x1bb23c: 0x9ba70000  lwr         $a3, 0x0($sp)
    ctx->pc = 0x1bb23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_1bb240:
    // 0x1bb240: 0xaba70023  swl         $a3, 0x23($sp)
    ctx->pc = 0x1bb240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb244:
    // 0x1bb244: 0xbba70020  swr         $a3, 0x20($sp)
    ctx->pc = 0x1bb244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb248:
    // 0x1bb248: 0x8ba40013  lwl         $a0, 0x13($sp)
    ctx->pc = 0x1bb248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_1bb24c:
    // 0x1bb24c: 0x9ba40010  lwr         $a0, 0x10($sp)
    ctx->pc = 0x1bb24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_1bb250:
    // 0x1bb250: 0xaba40033  swl         $a0, 0x33($sp)
    ctx->pc = 0x1bb250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb254:
    // 0x1bb254: 0xbba40030  swr         $a0, 0x30($sp)
    ctx->pc = 0x1bb254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb258:
    // 0x1bb258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bb258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bb25c:
    // 0x1bb25c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bb25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1bb260:
    // 0x1bb260: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1bb260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1bb264:
    // 0x1bb264: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bb264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1bb268:
    // 0x1bb268: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bb268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bb26c:
    // 0x1bb26c: 0x262402a0  addiu       $a0, $s1, 0x2A0
    ctx->pc = 0x1bb26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
label_1bb270:
    // 0x1bb270: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1bb270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb274:
    // 0x1bb274: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1bb274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb278:
    // 0x1bb278: 0x10000012  b           . + 4 + (0x12 << 2)
label_1bb27c:
    if (ctx->pc == 0x1BB27Cu) {
        ctx->pc = 0x1BB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB278u;
        // 0x1bb27c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB280u;
        goto label_1bb280;
    }
    ctx->pc = 0x1BB278u;
    {
        const bool branch_taken_0x1bb278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB278u;
        // 0x1bb27c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb278) {
            ctx->pc = 0x1BB2C4u;
            goto label_1bb2c4;
        }
    }
    ctx->pc = 0x1BB280u;
label_1bb280:
    // 0x1bb280: 0x8ba80013  lwl         $t0, 0x13($sp)
    ctx->pc = 0x1bb280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_1bb284:
    // 0x1bb284: 0x9ba80010  lwr         $t0, 0x10($sp)
    ctx->pc = 0x1bb284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_1bb288:
    // 0x1bb288: 0xaba80023  swl         $t0, 0x23($sp)
    ctx->pc = 0x1bb288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb28c:
    // 0x1bb28c: 0xbba80020  swr         $t0, 0x20($sp)
    ctx->pc = 0x1bb28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb290:
    // 0x1bb290: 0x8ba50003  lwl         $a1, 0x3($sp)
    ctx->pc = 0x1bb290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
label_1bb294:
    // 0x1bb294: 0x9ba50000  lwr         $a1, 0x0($sp)
    ctx->pc = 0x1bb294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
label_1bb298:
    // 0x1bb298: 0xaba50043  swl         $a1, 0x43($sp)
    ctx->pc = 0x1bb298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb29c:
    // 0x1bb29c: 0xbba50040  swr         $a1, 0x40($sp)
    ctx->pc = 0x1bb29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb2a0:
    // 0x1bb2a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bb2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bb2a4:
    // 0x1bb2a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bb2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1bb2a8:
    // 0x1bb2a8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1bb2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1bb2ac:
    // 0x1bb2ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bb2acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1bb2b0:
    // 0x1bb2b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bb2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bb2b4:
    // 0x1bb2b4: 0x262402a0  addiu       $a0, $s1, 0x2A0
    ctx->pc = 0x1bb2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
label_1bb2b8:
    // 0x1bb2b8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1bb2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb2bc:
    // 0x1bb2bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bb2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb2c0:
    // 0x1bb2c0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1bb2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1bb2c4:
    // 0x1bb2c4: 0xc62e02a4  lwc1        $f14, 0x2A4($s1)
    ctx->pc = 0x1bb2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1bb2c8:
    // 0x1bb2c8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1bb2c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1bb2cc:
    // 0x1bb2cc: 0xc06d066  jal         func_1B4198
label_1bb2d0:
    if (ctx->pc == 0x1BB2D0u) {
        ctx->pc = 0x1BB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2CCu;
        // 0x1bb2d0: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB2D4u;
        goto label_1bb2d4;
    }
    ctx->pc = 0x1BB2CCu;
    SET_GPR_U32(ctx, 31, 0x1BB2D4u);
    ctx->pc = 0x1BB2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2CCu;
    // 0x1bb2d0: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4198u, 0x1BB2CCu, 0x1BB2D4u)) {
        return;
    }
    ctx->pc = 0x1BB2D4u;
label_1bb2d4:
    // 0x1bb2d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bb2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bb2d8:
    // 0x1bb2d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bb2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb2dc:
    // 0x1bb2dc: 0xae220298  sw          $v0, 0x298($s1)
    ctx->pc = 0x1bb2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 2));
label_1bb2e0:
    // 0x1bb2e0: 0x8e26028c  lw          $a2, 0x28C($s1)
    ctx->pc = 0x1bb2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
label_1bb2e4:
    // 0x1bb2e4: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1bb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1bb2e8:
    // 0x1bb2e8: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1bb2e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1bb2ec:
    // 0x1bb2ec: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1bb2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1bb2f0:
    // 0x1bb2f0: 0x60f809  jalr        $v1
label_1bb2f4:
    if (ctx->pc == 0x1BB2F4u) {
        ctx->pc = 0x1BB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2F0u;
        // 0x1bb2f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB2F8u;
        goto label_1bb2f8;
    }
    ctx->pc = 0x1BB2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BB2F8u);
        ctx->pc = 0x1BB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2F0u;
        // 0x1bb2f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB2F0u, 0x1BB2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB2F8u;
label_1bb2f8:
    // 0x1bb2f8: 0x8e220298  lw          $v0, 0x298($s1)
    ctx->pc = 0x1bb2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_1bb2fc:
    // 0x1bb2fc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1bb300:
    if (ctx->pc == 0x1BB300u) {
        ctx->pc = 0x1BB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2FCu;
        // 0x1bb300: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB304u;
        goto label_1bb304;
    }
    ctx->pc = 0x1BB2FCu;
    {
        const bool branch_taken_0x1bb2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2FCu;
        // 0x1bb300: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2fc) {
            ctx->pc = 0x1BB364u;
            goto label_1bb364;
        }
    }
    ctx->pc = 0x1BB304u;
label_1bb304:
    // 0x1bb304: 0x8e22029c  lw          $v0, 0x29C($s1)
    ctx->pc = 0x1bb304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
label_1bb308:
    // 0x1bb308: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_1bb30c:
    if (ctx->pc == 0x1BB30Cu) {
        ctx->pc = 0x1BB30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB308u;
        // 0x1bb30c: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB310u;
        goto label_1bb310;
    }
    ctx->pc = 0x1BB308u;
    {
        const bool branch_taken_0x1bb308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb308) {
            ctx->pc = 0x1BB30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB308u;
            // 0x1bb30c: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB368u;
            goto label_1bb368;
        }
    }
    ctx->pc = 0x1BB310u;
label_1bb310:
    // 0x1bb310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb314:
    // 0x1bb314: 0xc06f7c4  jal         func_1BDF10
label_1bb318:
    if (ctx->pc == 0x1BB318u) {
        ctx->pc = 0x1BB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB314u;
        // 0x1bb318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB31Cu;
        goto label_1bb31c;
    }
    ctx->pc = 0x1BB314u;
    SET_GPR_U32(ctx, 31, 0x1BB31Cu);
    ctx->pc = 0x1BB318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB314u;
    // 0x1bb318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDF10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BDF10u, 0x1BB314u, 0x1BB31Cu)) {
        return;
    }
    ctx->pc = 0x1BB31Cu;
label_1bb31c:
    // 0x1bb31c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1bb320:
    if (ctx->pc == 0x1BB320u) {
        ctx->pc = 0x1BB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB31Cu;
        // 0x1bb320: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB324u;
        goto label_1bb324;
    }
    ctx->pc = 0x1BB31Cu;
    {
        const bool branch_taken_0x1bb31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB31Cu;
        // 0x1bb320: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb31c) {
            ctx->pc = 0x1BB364u;
            goto label_1bb364;
        }
    }
    ctx->pc = 0x1BB324u;
label_1bb324:
    // 0x1bb324: 0x460d7041  sub.s       $f1, $f14, $f13
    ctx->pc = 0x1bb324u;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
label_1bb328:
    // 0x1bb328: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1bb328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1bb32c:
    // 0x1bb32c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bb32cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1bb330:
    // 0x1bb330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bb334:
    // 0x1bb334: 0x0  nop
    ctx->pc = 0x1bb334u;
    // NOP
label_1bb338:
    // 0x1bb338: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bb338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bb33c:
    // 0x1bb33c: 0x0  nop
    ctx->pc = 0x1bb33cu;
    // NOP
label_1bb340:
    // 0x1bb340: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1bb344:
    if (ctx->pc == 0x1BB344u) {
        ctx->pc = 0x1BB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB340u;
        // 0x1bb344: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB348u;
        goto label_1bb348;
    }
    ctx->pc = 0x1BB340u;
    {
        const bool branch_taken_0x1bb340 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB340u;
        // 0x1bb344: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb340) {
            ctx->pc = 0x1BB360u;
            goto label_1bb360;
        }
    }
    ctx->pc = 0x1BB348u;
label_1bb348:
    // 0x1bb348: 0x8e26028c  lw          $a2, 0x28C($s1)
    ctx->pc = 0x1bb348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
label_1bb34c:
    // 0x1bb34c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1bb34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1bb350:
    // 0x1bb350: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1bb350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1bb354:
    // 0x1bb354: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1bb354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1bb358:
    // 0x1bb358: 0x60f809  jalr        $v1
label_1bb35c:
    if (ctx->pc == 0x1BB35Cu) {
        ctx->pc = 0x1BB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB358u;
        // 0x1bb35c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB360u;
        goto label_1bb360;
    }
    ctx->pc = 0x1BB358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BB360u);
        ctx->pc = 0x1BB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB358u;
        // 0x1bb35c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB358u, 0x1BB360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB360u;
label_1bb360:
    // 0x1bb360: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1bb360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bb364:
    // 0x1bb364: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1bb364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bb368:
    // 0x1bb368: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bb368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bb36c:
    // 0x1bb36c: 0x3e00008  jr          $ra
label_1bb370:
    if (ctx->pc == 0x1BB370u) {
        ctx->pc = 0x1BB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB36Cu;
        // 0x1bb370: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB374u;
        goto label_1bb374;
    }
    ctx->pc = 0x1BB36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB36Cu;
        // 0x1bb370: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB374u;
label_1bb374:
    // 0x1bb374: 0x0  nop
    ctx->pc = 0x1bb374u;
    // NOP
    ctx->pc = 0x1bb378u;
}
