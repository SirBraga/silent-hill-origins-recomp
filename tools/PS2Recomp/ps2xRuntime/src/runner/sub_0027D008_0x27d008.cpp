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

// Function: sub_0027D008
// Address: 0x27d008 - 0x27d2b8
void sub_0027D008_0x27d008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D008_0x27d008");
#endif

    switch (ctx->pc) {
        case 0x27d008u: goto label_27d008;
        case 0x27d00cu: goto label_27d00c;
        case 0x27d010u: goto label_27d010;
        case 0x27d014u: goto label_27d014;
        case 0x27d018u: goto label_27d018;
        case 0x27d01cu: goto label_27d01c;
        case 0x27d020u: goto label_27d020;
        case 0x27d024u: goto label_27d024;
        case 0x27d028u: goto label_27d028;
        case 0x27d02cu: goto label_27d02c;
        case 0x27d030u: goto label_27d030;
        case 0x27d034u: goto label_27d034;
        case 0x27d038u: goto label_27d038;
        case 0x27d03cu: goto label_27d03c;
        case 0x27d040u: goto label_27d040;
        case 0x27d044u: goto label_27d044;
        case 0x27d048u: goto label_27d048;
        case 0x27d04cu: goto label_27d04c;
        case 0x27d050u: goto label_27d050;
        case 0x27d054u: goto label_27d054;
        case 0x27d058u: goto label_27d058;
        case 0x27d05cu: goto label_27d05c;
        case 0x27d060u: goto label_27d060;
        case 0x27d064u: goto label_27d064;
        case 0x27d068u: goto label_27d068;
        case 0x27d06cu: goto label_27d06c;
        case 0x27d070u: goto label_27d070;
        case 0x27d074u: goto label_27d074;
        case 0x27d078u: goto label_27d078;
        case 0x27d07cu: goto label_27d07c;
        case 0x27d080u: goto label_27d080;
        case 0x27d084u: goto label_27d084;
        case 0x27d088u: goto label_27d088;
        case 0x27d08cu: goto label_27d08c;
        case 0x27d090u: goto label_27d090;
        case 0x27d094u: goto label_27d094;
        case 0x27d098u: goto label_27d098;
        case 0x27d09cu: goto label_27d09c;
        case 0x27d0a0u: goto label_27d0a0;
        case 0x27d0a4u: goto label_27d0a4;
        case 0x27d0a8u: goto label_27d0a8;
        case 0x27d0acu: goto label_27d0ac;
        case 0x27d0b0u: goto label_27d0b0;
        case 0x27d0b4u: goto label_27d0b4;
        case 0x27d0b8u: goto label_27d0b8;
        case 0x27d0bcu: goto label_27d0bc;
        case 0x27d0c0u: goto label_27d0c0;
        case 0x27d0c4u: goto label_27d0c4;
        case 0x27d0c8u: goto label_27d0c8;
        case 0x27d0ccu: goto label_27d0cc;
        case 0x27d0d0u: goto label_27d0d0;
        case 0x27d0d4u: goto label_27d0d4;
        case 0x27d0d8u: goto label_27d0d8;
        case 0x27d0dcu: goto label_27d0dc;
        case 0x27d0e0u: goto label_27d0e0;
        case 0x27d0e4u: goto label_27d0e4;
        case 0x27d0e8u: goto label_27d0e8;
        case 0x27d0ecu: goto label_27d0ec;
        case 0x27d0f0u: goto label_27d0f0;
        case 0x27d0f4u: goto label_27d0f4;
        case 0x27d0f8u: goto label_27d0f8;
        case 0x27d0fcu: goto label_27d0fc;
        case 0x27d100u: goto label_27d100;
        case 0x27d104u: goto label_27d104;
        case 0x27d108u: goto label_27d108;
        case 0x27d10cu: goto label_27d10c;
        case 0x27d110u: goto label_27d110;
        case 0x27d114u: goto label_27d114;
        case 0x27d118u: goto label_27d118;
        case 0x27d11cu: goto label_27d11c;
        case 0x27d120u: goto label_27d120;
        case 0x27d124u: goto label_27d124;
        case 0x27d128u: goto label_27d128;
        case 0x27d12cu: goto label_27d12c;
        case 0x27d130u: goto label_27d130;
        case 0x27d134u: goto label_27d134;
        case 0x27d138u: goto label_27d138;
        case 0x27d13cu: goto label_27d13c;
        case 0x27d140u: goto label_27d140;
        case 0x27d144u: goto label_27d144;
        case 0x27d148u: goto label_27d148;
        case 0x27d14cu: goto label_27d14c;
        case 0x27d150u: goto label_27d150;
        case 0x27d154u: goto label_27d154;
        case 0x27d158u: goto label_27d158;
        case 0x27d15cu: goto label_27d15c;
        case 0x27d160u: goto label_27d160;
        case 0x27d164u: goto label_27d164;
        case 0x27d168u: goto label_27d168;
        case 0x27d16cu: goto label_27d16c;
        case 0x27d170u: goto label_27d170;
        case 0x27d174u: goto label_27d174;
        case 0x27d178u: goto label_27d178;
        case 0x27d17cu: goto label_27d17c;
        case 0x27d180u: goto label_27d180;
        case 0x27d184u: goto label_27d184;
        case 0x27d188u: goto label_27d188;
        case 0x27d18cu: goto label_27d18c;
        case 0x27d190u: goto label_27d190;
        case 0x27d194u: goto label_27d194;
        case 0x27d198u: goto label_27d198;
        case 0x27d19cu: goto label_27d19c;
        case 0x27d1a0u: goto label_27d1a0;
        case 0x27d1a4u: goto label_27d1a4;
        case 0x27d1a8u: goto label_27d1a8;
        case 0x27d1acu: goto label_27d1ac;
        case 0x27d1b0u: goto label_27d1b0;
        case 0x27d1b4u: goto label_27d1b4;
        case 0x27d1b8u: goto label_27d1b8;
        case 0x27d1bcu: goto label_27d1bc;
        case 0x27d1c0u: goto label_27d1c0;
        case 0x27d1c4u: goto label_27d1c4;
        case 0x27d1c8u: goto label_27d1c8;
        case 0x27d1ccu: goto label_27d1cc;
        case 0x27d1d0u: goto label_27d1d0;
        case 0x27d1d4u: goto label_27d1d4;
        case 0x27d1d8u: goto label_27d1d8;
        case 0x27d1dcu: goto label_27d1dc;
        case 0x27d1e0u: goto label_27d1e0;
        case 0x27d1e4u: goto label_27d1e4;
        case 0x27d1e8u: goto label_27d1e8;
        case 0x27d1ecu: goto label_27d1ec;
        case 0x27d1f0u: goto label_27d1f0;
        case 0x27d1f4u: goto label_27d1f4;
        case 0x27d1f8u: goto label_27d1f8;
        case 0x27d1fcu: goto label_27d1fc;
        case 0x27d200u: goto label_27d200;
        case 0x27d204u: goto label_27d204;
        case 0x27d208u: goto label_27d208;
        case 0x27d20cu: goto label_27d20c;
        case 0x27d210u: goto label_27d210;
        case 0x27d214u: goto label_27d214;
        case 0x27d218u: goto label_27d218;
        case 0x27d21cu: goto label_27d21c;
        case 0x27d220u: goto label_27d220;
        case 0x27d224u: goto label_27d224;
        case 0x27d228u: goto label_27d228;
        case 0x27d22cu: goto label_27d22c;
        case 0x27d230u: goto label_27d230;
        case 0x27d234u: goto label_27d234;
        case 0x27d238u: goto label_27d238;
        case 0x27d23cu: goto label_27d23c;
        case 0x27d240u: goto label_27d240;
        case 0x27d244u: goto label_27d244;
        case 0x27d248u: goto label_27d248;
        case 0x27d24cu: goto label_27d24c;
        case 0x27d250u: goto label_27d250;
        case 0x27d254u: goto label_27d254;
        case 0x27d258u: goto label_27d258;
        case 0x27d25cu: goto label_27d25c;
        case 0x27d260u: goto label_27d260;
        case 0x27d264u: goto label_27d264;
        case 0x27d268u: goto label_27d268;
        case 0x27d26cu: goto label_27d26c;
        case 0x27d270u: goto label_27d270;
        case 0x27d274u: goto label_27d274;
        case 0x27d278u: goto label_27d278;
        case 0x27d27cu: goto label_27d27c;
        case 0x27d280u: goto label_27d280;
        case 0x27d284u: goto label_27d284;
        case 0x27d288u: goto label_27d288;
        case 0x27d28cu: goto label_27d28c;
        case 0x27d290u: goto label_27d290;
        case 0x27d294u: goto label_27d294;
        case 0x27d298u: goto label_27d298;
        case 0x27d29cu: goto label_27d29c;
        case 0x27d2a0u: goto label_27d2a0;
        case 0x27d2a4u: goto label_27d2a4;
        case 0x27d2a8u: goto label_27d2a8;
        case 0x27d2acu: goto label_27d2ac;
        case 0x27d2b0u: goto label_27d2b0;
        case 0x27d2b4u: goto label_27d2b4;
        default: break;
    }

    ctx->pc = 0x27d008u;

label_27d008:
    // 0x27d008: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x27d008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_27d00c:
    // 0x27d00c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27d00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d010:
    // 0x27d010: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x27d010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_27d014:
    // 0x27d014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27d014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d018:
    // 0x27d018: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x27d018u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27d01c:
    // 0x27d01c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x27d01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_27d020:
    // 0x27d020: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x27d020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_27d024:
    // 0x27d024: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x27d024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_27d028:
    // 0x27d028: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x27d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_27d02c:
    // 0x27d02c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x27d02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_27d030:
    // 0x27d030: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x27d030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_27d034:
    // 0x27d034: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27d034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_27d038:
    // 0x27d038: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27d038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_27d03c:
    // 0x27d03c: 0xc09270a  jal         func_249C28
label_27d040:
    if (ctx->pc == 0x27D040u) {
        ctx->pc = 0x27D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D03Cu;
        // 0x27d040: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D044u;
        goto label_27d044;
    }
    ctx->pc = 0x27D03Cu;
    SET_GPR_U32(ctx, 31, 0x27D044u);
    ctx->pc = 0x27D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D03Cu;
    // 0x27d040: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x27D03Cu, 0x27D044u)) {
        return;
    }
    ctx->pc = 0x27D044u;
label_27d044:
    // 0x27d044: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_27d048:
    if (ctx->pc == 0x27D048u) {
        ctx->pc = 0x27D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D044u;
        // 0x27d048: 0x24100024  addiu       $s0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D04Cu;
        goto label_27d04c;
    }
    ctx->pc = 0x27D044u;
    {
        const bool branch_taken_0x27d044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D044u;
        // 0x27d048: 0x24100024  addiu       $s0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d044) {
            ctx->pc = 0x27D27Cu;
            goto label_27d27c;
        }
    }
    ctx->pc = 0x27D04Cu;
label_27d04c:
    // 0x27d04c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27d04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27d050:
    // 0x27d050: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27d050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27d054:
    // 0x27d054: 0xc093546  jal         func_24D518
label_27d058:
    if (ctx->pc == 0x27D058u) {
        ctx->pc = 0x27D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D054u;
        // 0x27d058: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D05Cu;
        goto label_27d05c;
    }
    ctx->pc = 0x27D054u;
    SET_GPR_U32(ctx, 31, 0x27D05Cu);
    ctx->pc = 0x27D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D054u;
    // 0x27d058: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x27D054u, 0x27D05Cu)) {
        return;
    }
    ctx->pc = 0x27D05Cu;
label_27d05c:
    // 0x27d05c: 0x1450008a  bne         $v0, $s0, . + 4 + (0x8A << 2)
label_27d060:
    if (ctx->pc == 0x27D060u) {
        ctx->pc = 0x27D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D05Cu;
        // 0x27d060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D064u;
        goto label_27d064;
    }
    ctx->pc = 0x27D05Cu;
    {
        const bool branch_taken_0x27d05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x27D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D05Cu;
        // 0x27d060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d05c) {
            ctx->pc = 0x27D288u;
            goto label_27d288;
        }
    }
    ctx->pc = 0x27D064u;
label_27d064:
    // 0x27d064: 0x6ba2000b  ldl         $v0, 0xB($sp)
    ctx->pc = 0x27d064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_27d068:
    // 0x27d068: 0x6fa20004  ldr         $v0, 0x4($sp)
    ctx->pc = 0x27d068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27d06c:
    // 0x27d06c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x27d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_27d070:
    // 0x27d070: 0xb3a20043  sdl         $v0, 0x43($sp)
    ctx->pc = 0x27d070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d074:
    // 0x27d074: 0xb7a2003c  sdr         $v0, 0x3C($sp)
    ctx->pc = 0x27d074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d078:
    // 0x27d078: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x27d078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_27d07c:
    // 0x27d07c: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x27d07cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27d080:
    // 0x27d080: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x27d080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_27d084:
    // 0x27d084: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x27d084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_27d088:
    // 0x27d088: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x27d088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27d08c:
    // 0x27d08c: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x27d08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d090:
    // 0x27d090: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x27d090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d094:
    // 0x27d094: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x27d094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_27d098:
    // 0x27d098: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x27d098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_27d09c:
    // 0x27d09c: 0x97b00020  lhu         $s0, 0x20($sp)
    ctx->pc = 0x27d09cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_27d0a0:
    // 0x27d0a0: 0x97b3001c  lhu         $s3, 0x1C($sp)
    ctx->pc = 0x27d0a0u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 28)));
label_27d0a4:
    // 0x27d0a4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_27d0a8:
    if (ctx->pc == 0x27D0A8u) {
        ctx->pc = 0x27D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0A4u;
        // 0x27d0a8: 0x8fb20000  lw          $s2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D0ACu;
        goto label_27d0ac;
    }
    ctx->pc = 0x27D0A4u;
    {
        const bool branch_taken_0x27d0a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0A4u;
        // 0x27d0a8: 0x8fb20000  lw          $s2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0a4) {
            ctx->pc = 0x27D0B4u;
            goto label_27d0b4;
        }
    }
    ctx->pc = 0x27D0ACu;
label_27d0ac:
    // 0x27d0ac: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x27d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_27d0b0:
    // 0x27d0b0: 0x24510037  addiu       $s1, $v0, 0x37
    ctx->pc = 0x27d0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 55));
label_27d0b4:
    // 0x27d0b4: 0x32550001  andi        $s5, $s2, 0x1
    ctx->pc = 0x27d0b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_27d0b8:
    // 0x27d0b8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_27d0bc:
    if (ctx->pc == 0x27D0BCu) {
        ctx->pc = 0x27D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0B8u;
        // 0x27d0bc: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D0C0u;
        goto label_27d0c0;
    }
    ctx->pc = 0x27D0B8u;
    {
        const bool branch_taken_0x27d0b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0B8u;
        // 0x27d0bc: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0b8) {
            ctx->pc = 0x27D0C8u;
            goto label_27d0c8;
        }
    }
    ctx->pc = 0x27D0C0u;
label_27d0c0:
    // 0x27d0c0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x27d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_27d0c4:
    // 0x27d0c4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x27d0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27d0c8:
    // 0x27d0c8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x27d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_27d0cc:
    // 0x27d0cc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27d0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27d0d0:
    // 0x27d0d0: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x27d0d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27d0d4:
    // 0x27d0d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27d0d8:
    // 0x27d0d8: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x27d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_27d0dc:
    // 0x27d0dc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x27d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_27d0e0:
    // 0x27d0e0: 0x40f809  jalr        $v0
label_27d0e4:
    if (ctx->pc == 0x27D0E4u) {
        ctx->pc = 0x27D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0E0u;
        // 0x27d0e4: 0x34a5002c  ori         $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D0E8u;
        goto label_27d0e8;
    }
    ctx->pc = 0x27D0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27D0E8u);
        ctx->pc = 0x27D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0E0u;
        // 0x27d0e4: 0x34a5002c  ori         $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D0E0u, 0x27D0E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D0E8u;
label_27d0e8:
    // 0x27d0e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27d0e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d0ec:
    // 0x27d0ec: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_27d0f0:
    if (ctx->pc == 0x27D0F0u) {
        ctx->pc = 0x27D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0ECu;
        // 0x27d0f0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D0F4u;
        goto label_27d0f4;
    }
    ctx->pc = 0x27D0ECu;
    {
        const bool branch_taken_0x27d0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0ECu;
        // 0x27d0f0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0ec) {
            ctx->pc = 0x27D120u;
            goto label_27d120;
        }
    }
    ctx->pc = 0x27D0F4u;
label_27d0f4:
    // 0x27d0f4: 0x2402011d  addiu       $v0, $zero, 0x11D
    ctx->pc = 0x27d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_27d0f8:
    // 0x27d0f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27d0fc:
    // 0x27d0fc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x27d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_27d100:
    // 0x27d100: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27d100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27d104:
    // 0x27d104: 0xc092848  jal         func_24A120
label_27d108:
    if (ctx->pc == 0x27D108u) {
        ctx->pc = 0x27D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D104u;
        // 0x27d108: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D10Cu;
        goto label_27d10c;
    }
    ctx->pc = 0x27D104u;
    SET_GPR_U32(ctx, 31, 0x27D10Cu);
    ctx->pc = 0x27D108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D104u;
    // 0x27d108: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27D104u, 0x27D10Cu)) {
        return;
    }
    ctx->pc = 0x27D10Cu;
label_27d10c:
    // 0x27d10c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x27d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_27d110:
    // 0x27d110: 0xc09281a  jal         func_24A068
label_27d114:
    if (ctx->pc == 0x27D114u) {
        ctx->pc = 0x27D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D110u;
        // 0x27d114: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D118u;
        goto label_27d118;
    }
    ctx->pc = 0x27D110u;
    SET_GPR_U32(ctx, 31, 0x27D118u);
    ctx->pc = 0x27D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D110u;
    // 0x27d114: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27D110u, 0x27D118u)) {
        return;
    }
    ctx->pc = 0x27D118u;
label_27d118:
    // 0x27d118: 0x10000024  b           . + 4 + (0x24 << 2)
label_27d11c:
    if (ctx->pc == 0x27D11Cu) {
        ctx->pc = 0x27D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D118u;
        // 0x27d11c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D120u;
        goto label_27d120;
    }
    ctx->pc = 0x27D118u;
    {
        const bool branch_taken_0x27d118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D118u;
        // 0x27d11c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d118) {
            ctx->pc = 0x27D1ACu;
            goto label_27d1ac;
        }
    }
    ctx->pc = 0x27D120u;
label_27d120:
    // 0x27d120: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x27d120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
label_27d124:
    // 0x27d124: 0xa4b3001c  sh          $s3, 0x1C($a1)
    ctx->pc = 0x27d124u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 19));
label_27d128:
    // 0x27d128: 0xa4b0001e  sh          $s0, 0x1E($a1)
    ctx->pc = 0x27d128u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 16));
label_27d12c:
    // 0x27d12c: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x27d12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_27d130:
    // 0x27d130: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x27d130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_27d134:
    // 0x27d134: 0x6ba6003f  ldl         $a2, 0x3F($sp)
    ctx->pc = 0x27d134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_27d138:
    // 0x27d138: 0x6fa60038  ldr         $a2, 0x38($sp)
    ctx->pc = 0x27d138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_27d13c:
    // 0x27d13c: 0x6ba70047  ldl         $a3, 0x47($sp)
    ctx->pc = 0x27d13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_27d140:
    // 0x27d140: 0x6fa70040  ldr         $a3, 0x40($sp)
    ctx->pc = 0x27d140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_27d144:
    // 0x27d144: 0xb0a4000b  sdl         $a0, 0xB($a1)
    ctx->pc = 0x27d144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d148:
    // 0x27d148: 0xb4a40004  sdr         $a0, 0x4($a1)
    ctx->pc = 0x27d148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d14c:
    // 0x27d14c: 0xb0a60013  sdl         $a2, 0x13($a1)
    ctx->pc = 0x27d14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d150:
    // 0x27d150: 0xb4a6000c  sdr         $a2, 0xC($a1)
    ctx->pc = 0x27d150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d154:
    // 0x27d154: 0xb0a7001b  sdl         $a3, 0x1B($a1)
    ctx->pc = 0x27d154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d158:
    // 0x27d158: 0xb4a70014  sdr         $a3, 0x14($a1)
    ctx->pc = 0x27d158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d15c:
    // 0x27d15c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_27d160:
    if (ctx->pc == 0x27D160u) {
        ctx->pc = 0x27D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D15Cu;
        // 0x27d160: 0x24a30028  addiu       $v1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D164u;
        goto label_27d164;
    }
    ctx->pc = 0x27D15Cu;
    {
        const bool branch_taken_0x27d15c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D15Cu;
        // 0x27d160: 0x24a30028  addiu       $v1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d15c) {
            ctx->pc = 0x27D184u;
            goto label_27d184;
        }
    }
    ctx->pc = 0x27D164u;
label_27d164:
    // 0x27d164: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27d164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_27d168:
    // 0x27d168: 0x24a30037  addiu       $v1, $a1, 0x37
    ctx->pc = 0x27d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 55));
label_27d16c:
    // 0x27d16c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x27d16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_27d170:
    // 0x27d170: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x27d170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_27d174:
    // 0x27d174: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27d174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27d178:
    // 0x27d178: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x27d178u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_27d17c:
    // 0x27d17c: 0x10000002  b           . + 4 + (0x2 << 2)
label_27d180:
    if (ctx->pc == 0x27D180u) {
        ctx->pc = 0x27D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D17Cu;
        // 0x27d180: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D184u;
        goto label_27d184;
    }
    ctx->pc = 0x27D17Cu;
    {
        const bool branch_taken_0x27d17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D17Cu;
        // 0x27d180: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d17c) {
            ctx->pc = 0x27D188u;
            goto label_27d188;
        }
    }
    ctx->pc = 0x27D184u;
label_27d184:
    // 0x27d184: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x27d184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_27d188:
    // 0x27d188: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_27d18c:
    if (ctx->pc == 0x27D18Cu) {
        ctx->pc = 0x27D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D188u;
        // 0x27d18c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D190u;
        goto label_27d190;
    }
    ctx->pc = 0x27D188u;
    {
        const bool branch_taken_0x27d188 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D188u;
        // 0x27d18c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d188) {
            ctx->pc = 0x27D1A4u;
            goto label_27d1a4;
        }
    }
    ctx->pc = 0x27D190u;
label_27d190:
    // 0x27d190: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27d190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_27d194:
    // 0x27d194: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x27d194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_27d198:
    // 0x27d198: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27d198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27d19c:
    // 0x27d19c: 0x10000002  b           . + 4 + (0x2 << 2)
label_27d1a0:
    if (ctx->pc == 0x27D1A0u) {
        ctx->pc = 0x27D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D19Cu;
        // 0x27d1a0: 0xaca30024  sw          $v1, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D1A4u;
        goto label_27d1a4;
    }
    ctx->pc = 0x27D19Cu;
    {
        const bool branch_taken_0x27d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D19Cu;
        // 0x27d1a0: 0xaca30024  sw          $v1, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d19c) {
            ctx->pc = 0x27D1A8u;
            goto label_27d1a8;
        }
    }
    ctx->pc = 0x27D1A4u;
label_27d1a4:
    // 0x27d1a4: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x27d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_27d1a8:
    // 0x27d1a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27d1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27d1ac:
    // 0x27d1ac: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
label_27d1b0:
    if (ctx->pc == 0x27D1B0u) {
        ctx->pc = 0x27D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1ACu;
        // 0x27d1b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D1B4u;
        goto label_27d1b4;
    }
    ctx->pc = 0x27D1ACu;
    {
        const bool branch_taken_0x27d1ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1ACu;
        // 0x27d1b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1ac) {
            ctx->pc = 0x27D288u;
            goto label_27d288;
        }
    }
    ctx->pc = 0x27D1B4u;
label_27d1b4:
    // 0x27d1b4: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x27d1b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_27d1b8:
    // 0x27d1b8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_27d1bc:
    if (ctx->pc == 0x27D1BCu) {
        ctx->pc = 0x27D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1B8u;
        // 0x27d1bc: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D1C0u;
        goto label_27d1c0;
    }
    ctx->pc = 0x27D1B8u;
    {
        const bool branch_taken_0x27d1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1B8u;
        // 0x27d1bc: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1b8) {
            ctx->pc = 0x27D244u;
            goto label_27d244;
        }
    }
    ctx->pc = 0x27D1C0u;
label_27d1c0:
    // 0x27d1c0: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x27d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_27d1c4:
    // 0x27d1c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27d1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27d1c8:
    // 0x27d1c8: 0xc093546  jal         func_24D518
label_27d1cc:
    if (ctx->pc == 0x27D1CCu) {
        ctx->pc = 0x27D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1C8u;
        // 0x27d1cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D1D0u;
        goto label_27d1d0;
    }
    ctx->pc = 0x27D1C8u;
    SET_GPR_U32(ctx, 31, 0x27D1D0u);
    ctx->pc = 0x27D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D1C8u;
    // 0x27d1cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x27D1C8u, 0x27D1D0u)) {
        return;
    }
    ctx->pc = 0x27D1D0u;
label_27d1d0:
    // 0x27d1d0: 0x14500027  bne         $v0, $s0, . + 4 + (0x27 << 2)
label_27d1d4:
    if (ctx->pc == 0x27D1D4u) {
        ctx->pc = 0x27D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1D0u;
        // 0x27d1d4: 0x26e30fc8  addiu       $v1, $s7, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D1D8u;
        goto label_27d1d8;
    }
    ctx->pc = 0x27D1D0u;
    {
        const bool branch_taken_0x27d1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x27D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1D0u;
        // 0x27d1d4: 0x26e30fc8  addiu       $v1, $s7, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1d0) {
            ctx->pc = 0x27D270u;
            goto label_27d270;
        }
    }
    ctx->pc = 0x27D1D8u;
label_27d1d8:
    // 0x27d1d8: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x27d1d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_27d1dc:
    // 0x27d1dc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_27d1e0:
    if (ctx->pc == 0x27D1E0u) {
        ctx->pc = 0x27D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1DCu;
        // 0x27d1e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D1E4u;
        goto label_27d1e4;
    }
    ctx->pc = 0x27D1DCu;
    {
        const bool branch_taken_0x27d1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1DCu;
        // 0x27d1e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1dc) {
            ctx->pc = 0x27D244u;
            goto label_27d244;
        }
    }
    ctx->pc = 0x27D1E4u;
label_27d1e4:
    // 0x27d1e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27d1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d1e8:
    // 0x27d1e8: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
label_27d1ec:
    if (ctx->pc == 0x27D1ECu) {
        ctx->pc = 0x27D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1E8u;
        // 0x27d1ec: 0x30a40003  andi        $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D1F0u;
        goto label_27d1f0;
    }
    ctx->pc = 0x27D1E8u;
    {
        const bool branch_taken_0x27d1e8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x27D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1E8u;
        // 0x27d1ec: 0x30a40003  andi        $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1e8) {
            ctx->pc = 0x27D214u;
            goto label_27d214;
        }
    }
    ctx->pc = 0x27D1F0u;
label_27d1f0:
    // 0x27d1f0: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_27d1f4:
    if (ctx->pc == 0x27D1F4u) {
        ctx->pc = 0x27D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1F0u;
        // 0x27d1f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D1F8u;
        goto label_27d1f8;
    }
    ctx->pc = 0x27D1F0u;
    {
        const bool branch_taken_0x27d1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d1f0) {
            ctx->pc = 0x27D1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D1F0u;
            // 0x27d1f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D228u;
            goto label_27d228;
        }
    }
    ctx->pc = 0x27D1F8u;
label_27d1f8:
    // 0x27d1f8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x27d1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_27d1fc:
    // 0x27d1fc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_27d200:
    if (ctx->pc == 0x27D200u) {
        ctx->pc = 0x27D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1FCu;
        // 0x27d200: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D204u;
        goto label_27d204;
    }
    ctx->pc = 0x27D1FCu;
    {
        const bool branch_taken_0x27d1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d1fc) {
            ctx->pc = 0x27D200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D1FCu;
            // 0x27d200: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D218u;
            goto label_27d218;
        }
    }
    ctx->pc = 0x27D204u;
label_27d204:
    // 0x27d204: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x27d204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_27d208:
    // 0x27d208: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_27d20c:
    if (ctx->pc == 0x27D20Cu) {
        ctx->pc = 0x27D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D208u;
        // 0x27d20c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D210u;
        goto label_27d210;
    }
    ctx->pc = 0x27D208u;
    {
        const bool branch_taken_0x27d208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d208) {
            ctx->pc = 0x27D20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D208u;
            // 0x27d20c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D210u;
            goto label_27d210;
        }
    }
    ctx->pc = 0x27D210u;
label_27d210:
    // 0x27d210: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27d214:
    // 0x27d214: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27d214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27d218:
    // 0x27d218: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x27d218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27d21c:
    // 0x27d21c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_27d220:
    if (ctx->pc == 0x27D220u) {
        ctx->pc = 0x27D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D21Cu;
        // 0x27d220: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D224u;
        goto label_27d224;
    }
    ctx->pc = 0x27D21Cu;
    {
        const bool branch_taken_0x27d21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d21c) {
            ctx->pc = 0x27D220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D21Cu;
            // 0x27d220: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D248u;
            goto label_27d248;
        }
    }
    ctx->pc = 0x27D224u;
label_27d224:
    // 0x27d224: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x27d224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_27d228:
    // 0x27d228: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x27d228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27d22c:
    // 0x27d22c: 0x0  nop
    ctx->pc = 0x27d22cu;
    // NOP
label_27d230:
    // 0x27d230: 0x0  nop
    ctx->pc = 0x27d230u;
    // NOP
label_27d234:
    // 0x27d234: 0x0  nop
    ctx->pc = 0x27d234u;
    // NOP
label_27d238:
    // 0x27d238: 0x0  nop
    ctx->pc = 0x27d238u;
    // NOP
label_27d23c:
    // 0x27d23c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_27d240:
    if (ctx->pc == 0x27D240u) {
        ctx->pc = 0x27D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D23Cu;
        // 0x27d240: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D244u;
        goto label_27d244;
    }
    ctx->pc = 0x27D23Cu;
    {
        const bool branch_taken_0x27d23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d23c) {
            ctx->pc = 0x27D240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D23Cu;
            // 0x27d240: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d228;
        }
    }
    ctx->pc = 0x27D244u;
label_27d244:
    // 0x27d244: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27d248:
    // 0x27d248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27d248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27d24c:
    // 0x27d24c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_27d250:
    if (ctx->pc == 0x27D250u) {
        ctx->pc = 0x27D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D24Cu;
        // 0x27d250: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D254u;
        goto label_27d254;
    }
    ctx->pc = 0x27D24Cu;
    {
        const bool branch_taken_0x27d24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D24Cu;
        // 0x27d250: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d24c) {
            ctx->pc = 0x27D284u;
            goto label_27d284;
        }
    }
    ctx->pc = 0x27D254u;
label_27d254:
    // 0x27d254: 0x9626001c  lhu         $a2, 0x1C($s1)
    ctx->pc = 0x27d254u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_27d258:
    // 0x27d258: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x27d258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_27d25c:
    // 0x27d25c: 0xc092796  jal         func_249E58
label_27d260:
    if (ctx->pc == 0x27D260u) {
        ctx->pc = 0x27D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D25Cu;
        // 0x27d260: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D264u;
        goto label_27d264;
    }
    ctx->pc = 0x27D25Cu;
    SET_GPR_U32(ctx, 31, 0x27D264u);
    ctx->pc = 0x27D260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D25Cu;
    // 0x27d260: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x27D25Cu, 0x27D264u)) {
        return;
    }
    ctx->pc = 0x27D264u;
label_27d264:
    // 0x27d264: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_27d268:
    if (ctx->pc == 0x27D268u) {
        ctx->pc = 0x27D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D264u;
        // 0x27d268: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D26Cu;
        goto label_27d26c;
    }
    ctx->pc = 0x27D264u;
    {
        const bool branch_taken_0x27d264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d264) {
            ctx->pc = 0x27D268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D264u;
            // 0x27d268: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D288u;
            goto label_27d288;
        }
    }
    ctx->pc = 0x27D26Cu;
label_27d26c:
    // 0x27d26c: 0x26e30fc8  addiu       $v1, $s7, 0xFC8
    ctx->pc = 0x27d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_27d270:
    // 0x27d270: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x27d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_27d274:
    // 0x27d274: 0x40f809  jalr        $v0
label_27d278:
    if (ctx->pc == 0x27D278u) {
        ctx->pc = 0x27D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D274u;
        // 0x27d278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D27Cu;
        goto label_27d27c;
    }
    ctx->pc = 0x27D274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27D27Cu);
        ctx->pc = 0x27D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D274u;
        // 0x27d278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D274u, 0x27D27Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D27Cu;
label_27d27c:
    // 0x27d27c: 0x10000002  b           . + 4 + (0x2 << 2)
label_27d280:
    if (ctx->pc == 0x27D280u) {
        ctx->pc = 0x27D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D27Cu;
        // 0x27d280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D284u;
        goto label_27d284;
    }
    ctx->pc = 0x27D27Cu;
    {
        const bool branch_taken_0x27d27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D27Cu;
        // 0x27d280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d27c) {
            ctx->pc = 0x27D288u;
            goto label_27d288;
        }
    }
    ctx->pc = 0x27D284u;
label_27d284:
    // 0x27d284: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27d284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27d288:
    // 0x27d288: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x27d288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_27d28c:
    // 0x27d28c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x27d28cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_27d290:
    // 0x27d290: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x27d290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_27d294:
    // 0x27d294: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x27d294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_27d298:
    // 0x27d298: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x27d298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27d29c:
    // 0x27d29c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x27d29cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27d2a0:
    // 0x27d2a0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x27d2a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27d2a4:
    // 0x27d2a4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27d2a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27d2a8:
    // 0x27d2a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27d2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_27d2ac:
    // 0x27d2ac: 0x3e00008  jr          $ra
label_27d2b0:
    if (ctx->pc == 0x27D2B0u) {
        ctx->pc = 0x27D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2ACu;
        // 0x27d2b0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D2B4u;
        goto label_27d2b4;
    }
    ctx->pc = 0x27D2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2ACu;
        // 0x27d2b0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D2B4u;
label_27d2b4:
    // 0x27d2b4: 0x0  nop
    ctx->pc = 0x27d2b4u;
    // NOP
    ctx->pc = 0x27d2b8u;
}
