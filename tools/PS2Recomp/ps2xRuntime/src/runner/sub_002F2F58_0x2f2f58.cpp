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

// Function: sub_002F2F58
// Address: 0x2f2f58 - 0x2f3888
void sub_002F2F58_0x2f2f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2F58_0x2f2f58");
#endif

    switch (ctx->pc) {
        case 0x2f2fa0u: goto label_2f2fa0;
        case 0x2f3010u: goto label_2f3010;
        case 0x2f3020u: goto label_2f3020;
        case 0x2f3038u: goto label_2f3038;
        case 0x2f3050u: goto label_2f3050;
        case 0x2f3078u: goto label_2f3078;
        case 0x2f3090u: goto label_2f3090;
        case 0x2f30dcu: goto label_2f30dc;
        case 0x2f31a8u: goto label_2f31a8;
        case 0x2f31bcu: goto label_2f31bc;
        case 0x2f31c8u: goto label_2f31c8;
        case 0x2f31dcu: goto label_2f31dc;
        case 0x2f31f8u: goto label_2f31f8;
        case 0x2f3278u: goto label_2f3278;
        case 0x2f3288u: goto label_2f3288;
        case 0x2f3290u: goto label_2f3290;
        case 0x2f329cu: goto label_2f329c;
        case 0x2f3300u: goto label_2f3300;
        case 0x2f3340u: goto label_2f3340;
        case 0x2f3370u: goto label_2f3370;
        case 0x2f337cu: goto label_2f337c;
        case 0x2f33a4u: goto label_2f33a4;
        case 0x2f33f8u: goto label_2f33f8;
        case 0x2f3410u: goto label_2f3410;
        case 0x2f3498u: goto label_2f3498;
        case 0x2f34b4u: goto label_2f34b4;
        case 0x2f34d0u: goto label_2f34d0;
        case 0x2f3504u: goto label_2f3504;
        case 0x2f3568u: goto label_2f3568;
        case 0x2f3590u: goto label_2f3590;
        case 0x2f35b0u: goto label_2f35b0;
        case 0x2f35c4u: goto label_2f35c4;
        case 0x2f36b8u: goto label_2f36b8;
        case 0x2f37b0u: goto label_2f37b0;
        case 0x2f37c8u: goto label_2f37c8;
        case 0x2f37dcu: goto label_2f37dc;
        case 0x2f37ecu: goto label_2f37ec;
        case 0x2f37fcu: goto label_2f37fc;
        case 0x2f3834u: goto label_2f3834;
        default: break;
    }

    ctx->pc = 0x2f2f58u;

    // 0x2f2f58: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2f2f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2f2f5c: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x2f2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2f2f60: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2f2f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2f2f64: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f2f68: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2f2f68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f6c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2f2f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2f2f70: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x2f2f70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f2f74: 0x24426340  addiu       $v0, $v0, 0x6340
    ctx->pc = 0x2f2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
    // 0x2f2f78: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2f2f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2f2f7c: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2f2f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2f2f80: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2f2f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2f2f84: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2f2f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2f2f88: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2f2f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f2f8c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2f2f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2f2f90: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2f2f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2f2f94: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2f2f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2f2f98: 0xc0bdf7a  jal         func_2F7DE8
    ctx->pc = 0x2F2F98u;
    SET_GPR_U32(ctx, 31, 0x2F2FA0u);
    ctx->pc = 0x2F2F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F98u;
    // 0x2f2f9c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7DE8u, 0x2F2F98u, 0x2F2FA0u)) {
        return;
    }
    ctx->pc = 0x2F2FA0u;
label_2f2fa0:
    // 0x2f2fa0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2FA0u;
    {
        const bool branch_taken_0x2f2fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FA0u;
        // 0x2f2fa4: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fa0) {
            ctx->pc = 0x2F2FB4u;
            goto label_2f2fb4;
        }
    }
    ctx->pc = 0x2F2FA8u;
    // 0x2f2fa8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f2fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f2fac: 0x10000229  b           . + 4 + (0x229 << 2)
    ctx->pc = 0x2F2FACu;
    {
        const bool branch_taken_0x2f2fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FACu;
        // 0x2f2fb0: 0x34420013  ori         $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fac) {
            ctx->pc = 0x2F3854u;
            goto label_2f3854;
        }
    }
    ctx->pc = 0x2F2FB4u;
label_2f2fb4:
    // 0x2f2fb4: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2f2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2f2fb8: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x2f2fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f2fbc: 0x2482b748  addiu       $v0, $a0, -0x48B8
    ctx->pc = 0x2f2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948680));
    // 0x2f2fc0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2f2fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2fc4: 0x244a0808  addiu       $t2, $v0, 0x808
    ctx->pc = 0x2f2fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 2056));
    // 0x2f2fc8: 0x3c0b006b  lui         $t3, 0x6B
    ctx->pc = 0x2f2fc8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)107 << 16));
    // 0x2f2fcc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f2fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2fd0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2f2fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f2fd4: 0xacc00894  sw          $zero, 0x894($a2)
    ctx->pc = 0x2f2fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2196), GPR_U32(ctx, 0));
    // 0x2f2fd8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f2fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2fdc: 0xace90800  sw          $t1, 0x800($a3)
    ctx->pc = 0x2f2fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2048), GPR_U32(ctx, 9));
    // 0x2f2fe0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2f2fe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2fe4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f2fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2fe8: 0xad090804  sw          $t1, 0x804($t0)
    ctx->pc = 0x2f2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 2052), GPR_U32(ctx, 9));
    // 0x2f2fec: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2f2fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2f2ff0: 0xac400890  sw          $zero, 0x890($v0)
    ctx->pc = 0x2f2ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2192), GPR_U32(ctx, 0));
    // 0x2f2ff4: 0x25690158  addiu       $t1, $t3, 0x158
    ctx->pc = 0x2f2ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 344));
    // 0x2f2ff8: 0x81260000  lb          $a2, 0x0($t1)
    ctx->pc = 0x2f2ff8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x6B0158u));
    // 0x2f2ffc: 0x81270001  lb          $a3, 0x1($t1)
    ctx->pc = 0x2f2ffcu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x6B0159u));
    // 0x2f3000: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x2f3000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f3004: 0xa0670001  sb          $a3, 0x1($v1)
    ctx->pc = 0x2f3004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f3008: 0xc0bd946  jal         func_2F6518
    ctx->pc = 0x2F3008u;
    SET_GPR_U32(ctx, 31, 0x2F3010u);
    ctx->pc = 0x2F300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3008u;
    // 0x2f300c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6518u, 0x2F3008u, 0x2F3010u)) {
        return;
    }
    ctx->pc = 0x2F3010u;
label_2f3010:
    // 0x2f3010: 0x104001fc  beqz        $v0, . + 4 + (0x1FC << 2)
    ctx->pc = 0x2F3010u;
    {
        const bool branch_taken_0x2f3010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3010) {
            ctx->pc = 0x2F3804u;
            goto label_2f3804;
        }
    }
    ctx->pc = 0x2F3018u;
    // 0x2f3018: 0xc0bd95e  jal         func_2F6578
    ctx->pc = 0x2F3018u;
    SET_GPR_U32(ctx, 31, 0x2F3020u);
    ctx->pc = 0x2F301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3018u;
    // 0x2f301c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6578u, 0x2F3018u, 0x2F3020u)) {
        return;
    }
    ctx->pc = 0x2F3020u;
label_2f3020:
    // 0x2f3020: 0x104001f8  beqz        $v0, . + 4 + (0x1F8 << 2)
    ctx->pc = 0x2F3020u;
    {
        const bool branch_taken_0x2f3020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3020u;
        // 0x2f3024: 0x3c10006b  lui         $s0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3020) {
            ctx->pc = 0x2F3804u;
            goto label_2f3804;
        }
    }
    ctx->pc = 0x2F3028u;
    // 0x2f3028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f302c: 0x26050160  addiu       $a1, $s0, 0x160
    ctx->pc = 0x2f302cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x2f3030: 0xc0c4b78  jal         func_312DE0
    ctx->pc = 0x2F3030u;
    SET_GPR_U32(ctx, 31, 0x2F3038u);
    ctx->pc = 0x2F3034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3030u;
    // 0x2f3034: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x2F3030u, 0x2F3038u)) {
        return;
    }
    ctx->pc = 0x2F3038u;
label_2f3038:
    // 0x2f3038: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F3038u;
    {
        const bool branch_taken_0x2f3038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3038u;
        // 0x2f303c: 0x264600d0  addiu       $a2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3038) {
            ctx->pc = 0x2F3080u;
            goto label_2f3080;
        }
    }
    ctx->pc = 0x2F3040u;
    // 0x2f3040: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f3040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f3044: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f3044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f3048: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x2f3048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2f304c: 0x2642014c  addiu       $v0, $s2, 0x14C
    ctx->pc = 0x2f304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 332));
label_2f3050:
    // 0x2f3050: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2f3050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2f3054: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2f3054u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2f3058: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2f3058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2f305c: 0x0  nop
    ctx->pc = 0x2f305cu;
    // NOP
    // 0x2f3060: 0x0  nop
    ctx->pc = 0x2f3060u;
    // NOP
    // 0x2f3064: 0x661fffa  bgez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F3064u;
    {
        const bool branch_taken_0x2f3064 = (GPR_S64(ctx, 19) >= 0);
        if (branch_taken_0x2f3064) {
            ctx->pc = 0x2F3050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3050;
        }
    }
    ctx->pc = 0x2F306Cu;
    // 0x2f306c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f306cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3070: 0xc0bdb92  jal         func_2F6E48
    ctx->pc = 0x2F3070u;
    SET_GPR_U32(ctx, 31, 0x2F3078u);
    ctx->pc = 0x2F3074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3070u;
    // 0x2f3074: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6E48u, 0x2F3070u, 0x2F3078u)) {
        return;
    }
    ctx->pc = 0x2F3078u;
label_2f3078:
    // 0x2f3078: 0x104001e2  beqz        $v0, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x2F3078u;
    {
        const bool branch_taken_0x2f3078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3078) {
            ctx->pc = 0x2F3804u;
            goto label_2f3804;
        }
    }
    ctx->pc = 0x2F3080u;
label_2f3080:
    // 0x2f3080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3088: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F3088u;
    SET_GPR_U32(ctx, 31, 0x2F3090u);
    ctx->pc = 0x2F308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3088u;
    // 0x2f308c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F3088u, 0x2F3090u)) {
        return;
    }
    ctx->pc = 0x2F3090u;
label_2f3090:
    // 0x2f3090: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f3090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f3094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3098: 0x26070160  addiu       $a3, $s0, 0x160
    ctx->pc = 0x2f3098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x2f309c: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x2f309cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f30a0: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x2f30a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f30a4: 0x68e3000f  ldl         $v1, 0xF($a3)
    ctx->pc = 0x2f30a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f30a8: 0x6ce30008  ldr         $v1, 0x8($a3)
    ctx->pc = 0x2f30a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f30ac: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x2f30acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f30b0: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x2f30b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f30b4: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x2f30b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f30b8: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x2f30b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f30bc: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x2f30bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f30c0: 0xb6430008  sdr         $v1, 0x8($s2)
    ctx->pc = 0x2f30c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f30c4: 0xb2460017  sdl         $a2, 0x17($s2)
    ctx->pc = 0x2f30c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f30c8: 0xb6460010  sdr         $a2, 0x10($s2)
    ctx->pc = 0x2f30c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f30cc: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2f30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2f30d0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x2f30d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x2f30d4: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x2F30D4u;
    SET_GPR_U32(ctx, 31, 0x2F30DCu);
    ctx->pc = 0x2F30D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F30D4u;
    // 0x2f30d8: 0x24a50180  addiu       $a1, $a1, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x2F30D4u, 0x2F30DCu)) {
        return;
    }
    ctx->pc = 0x2F30DCu;
label_2f30dc:
    // 0x2f30dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f30dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f30e0: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x2f30e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f30e4: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2f30e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f30e8: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x2f30e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2f30ec: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2f30ecu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f30f0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2f30f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f30f4: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x2f30f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f30f8: 0x2408002b  addiu       $t0, $zero, 0x2B
    ctx->pc = 0x2f30f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2f30fc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F30FCu;
    {
        const bool branch_taken_0x2f30fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f30fc) {
            ctx->pc = 0x2F3100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F30FCu;
            // 0x2f3100: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3104u;
            goto label_2f3104;
        }
    }
    ctx->pc = 0x2F3104u;
label_2f3104:
    // 0x2f3104: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x2f3104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f3108: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f3108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f310c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f310cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3110: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x2f3110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f3114: 0xa645002e  sh          $a1, 0x2E($s2)
    ctx->pc = 0x2f3114u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 5));
    // 0x2f3118: 0xa642002c  sh          $v0, 0x2C($s2)
    ctx->pc = 0x2f3118u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f311c: 0x3812  mflo        $a3
    ctx->pc = 0x2f311cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2f3120: 0xa647002a  sh          $a3, 0x2A($s2)
    ctx->pc = 0x2f3120u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 7));
    // 0x2f3124: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x2f3124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2f3128: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2f3128u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f312c: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x2f312cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
    // 0x2f3130: 0x9645002a  lhu         $a1, 0x2A($s2)
    ctx->pc = 0x2f3130u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x2f3134: 0x9644002c  lhu         $a0, 0x2C($s2)
    ctx->pc = 0x2f3134u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2f3138: 0xa24a0150  sb          $t2, 0x150($s2)
    ctx->pc = 0x2f3138u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 336), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f313c: 0xa2480151  sb          $t0, 0x151($s2)
    ctx->pc = 0x2f313cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 337), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f3140: 0xae490158  sw          $t1, 0x158($s2)
    ctx->pc = 0x2f3140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 9));
    // 0x2f3144: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x2f3144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x2f3148: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x2f3148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x2f314c: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x2f314cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x2f3150: 0xae400170  sw          $zero, 0x170($s2)
    ctx->pc = 0x2f3150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 0));
    // 0x2f3154: 0x3812  mflo        $a3
    ctx->pc = 0x2f3154u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2f3158: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x2f3158u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f315c: 0xae470030  sw          $a3, 0x30($s2)
    ctx->pc = 0x2f315cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 7));
    // 0x2f3160: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2f3160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f3164: 0xae460180  sw          $a2, 0x180($s2)
    ctx->pc = 0x2f3164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 6));
    // 0x2f3168: 0xae400164  sw          $zero, 0x164($s2)
    ctx->pc = 0x2f3168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 356), GPR_U32(ctx, 0));
    // 0x2f316c: 0xae400168  sw          $zero, 0x168($s2)
    ctx->pc = 0x2f316cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 360), GPR_U32(ctx, 0));
    // 0x2f3170: 0xae40016c  sw          $zero, 0x16C($s2)
    ctx->pc = 0x2f3170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 364), GPR_U32(ctx, 0));
    // 0x2f3174: 0xae460174  sw          $a2, 0x174($s2)
    ctx->pc = 0x2f3174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 6));
    // 0x2f3178: 0xae460178  sw          $a2, 0x178($s2)
    ctx->pc = 0x2f3178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 6));
    // 0x2f317c: 0xae46017c  sw          $a2, 0x17C($s2)
    ctx->pc = 0x2f317cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 6));
    // 0x2f3180: 0x2012  mflo        $a0
    ctx->pc = 0x2f3180u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2f3184: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2f3184u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f3188: 0xae44015c  sw          $a0, 0x15C($s2)
    ctx->pc = 0x2f3188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 4));
    // 0x2f318c: 0x1812  mflo        $v1
    ctx->pc = 0x2f318cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2f3190: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f3190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f3194: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x2f3194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x2f3198: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x2f3198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2f319c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F319Cu;
    {
        const bool branch_taken_0x2f319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F319Cu;
        // 0x2f31a0: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f319c) {
            ctx->pc = 0x2F31B0u;
            goto label_2f31b0;
        }
    }
    ctx->pc = 0x2F31A4u;
    // 0x2f31a4: 0x0  nop
    ctx->pc = 0x2f31a4u;
    // NOP
label_2f31a8:
    // 0x2f31a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f31ac: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2f31acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_2f31b0:
    // 0x2f31b0: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x2f31b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2f31b4: 0xc0bdb6e  jal         func_2F6DB8
    ctx->pc = 0x2F31B4u;
    SET_GPR_U32(ctx, 31, 0x2F31BCu);
    ctx->pc = 0x2F31B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F31B4u;
    // 0x2f31b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6DB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6DB8u, 0x2F31B4u, 0x2F31BCu)) {
        return;
    }
    ctx->pc = 0x2F31BCu;
label_2f31bc:
    // 0x2f31bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F31BCu;
    {
        const bool branch_taken_0x2f31bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31BCu;
        // 0x2f31c0: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31bc) {
            ctx->pc = 0x2F31A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f31a8;
        }
    }
    ctx->pc = 0x2F31C4u;
    // 0x2f31c4: 0x0  nop
    ctx->pc = 0x2f31c4u;
    // NOP
label_2f31c8:
    // 0x2f31c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f31cc: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x2f31ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x2f31d0: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x2f31d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2f31d4: 0xc0bdb6e  jal         func_2F6DB8
    ctx->pc = 0x2F31D4u;
    SET_GPR_U32(ctx, 31, 0x2F31DCu);
    ctx->pc = 0x2F31D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F31D4u;
    // 0x2f31d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6DB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6DB8u, 0x2F31D4u, 0x2F31DCu)) {
        return;
    }
    ctx->pc = 0x2F31DCu;
label_2f31dc:
    // 0x2f31dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f31dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31e0: 0x5620fff9  bnel        $s1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F31E0u;
    {
        const bool branch_taken_0x2f31e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f31e0) {
            ctx->pc = 0x2F31E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F31E0u;
            // 0x2f31e4: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F31C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f31c8;
        }
    }
    ctx->pc = 0x2F31E8u;
    // 0x2f31e8: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x2f31e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2f31ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f31ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31f0: 0xc0bdc88  jal         func_2F7220
    ctx->pc = 0x2F31F0u;
    SET_GPR_U32(ctx, 31, 0x2F31F8u);
    ctx->pc = 0x2F31F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F31F0u;
    // 0x2f31f4: 0x8e460040  lw          $a2, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7220u, 0x2F31F0u, 0x2F31F8u)) {
        return;
    }
    ctx->pc = 0x2F31F8u;
label_2f31f8:
    // 0x2f31f8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2f31f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2f31fc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f31fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3200: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2f3200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3204: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f3204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3208: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2f3208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f320c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2f320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f3210: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x2f3210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f3214: 0x246303fe  addiu       $v1, $v1, 0x3FE
    ctx->pc = 0x2f3214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1022));
    // 0x2f3218: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2f3218u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x2f321c: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x2f321cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2f3220: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x2f3220u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x2f3224: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x2f3224u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f3228: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2f3228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2f322c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2f322cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f3230: 0x24c303ff  addiu       $v1, $a2, 0x3FF
    ctx->pc = 0x2f3230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1023));
    // 0x2f3234: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x2f3234u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f3238: 0x244203fe  addiu       $v0, $v0, 0x3FE
    ctx->pc = 0x2f3238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1022));
    // 0x2f323c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x2f323cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
    // 0x2f3240: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x2f3240u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2f3244: 0xc7180b  movn        $v1, $a2, $a3
    ctx->pc = 0x2f3244u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
    // 0x2f3248: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x2f3248u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x2f324c: 0x32a83  sra         $a1, $v1, 10
    ctx->pc = 0x2f324cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 10));
    // 0x2f3250: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x2f3250u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3254: 0x2aa30021  slti        $v1, $s5, 0x21
    ctx->pc = 0x2f3254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2f3258: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3258u;
    {
        const bool branch_taken_0x2f3258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3258u;
        // 0x2f325c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3258) {
            ctx->pc = 0x2F3268u;
            goto label_2f3268;
        }
    }
    ctx->pc = 0x2F3260u;
    // 0x2f3260: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x2f3260u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f3264: 0x24142000  addiu       $s4, $zero, 0x2000
    ctx->pc = 0x2f3264u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2f3268:
    // 0x2f3268: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2f3268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2f326c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f326cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3270: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F3270u;
    SET_GPR_U32(ctx, 31, 0x2F3278u);
    ctx->pc = 0x2F3274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3270u;
    // 0x2f3274: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F3270u, 0x2F3278u)) {
        return;
    }
    ctx->pc = 0x2F3278u;
label_2f3278:
    // 0x2f3278: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x2f3278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2f327c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F327Cu;
    {
        const bool branch_taken_0x2f327c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F327Cu;
        // 0x2f3280: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f327c) {
            ctx->pc = 0x2F32D4u;
            goto label_2f32d4;
        }
    }
    ctx->pc = 0x2F3284u;
    // 0x2f3284: 0x2697ffff  addiu       $s7, $s4, -0x1
    ctx->pc = 0x2f3284u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2f3288:
    // 0x2f3288: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x2f3288u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2f328c: 0x139880  sll         $s3, $s3, 2
    ctx->pc = 0x2f328cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2f3290:
    // 0x2f3290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f3290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3294: 0xc0bdb80  jal         func_2F6E00
    ctx->pc = 0x2F3294u;
    SET_GPR_U32(ctx, 31, 0x2F329Cu);
    ctx->pc = 0x2F3298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3294u;
    // 0x2f3298: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6E00u, 0x2F3294u, 0x2F329Cu)) {
        return;
    }
    ctx->pc = 0x2F329Cu;
label_2f329c:
    // 0x2f329c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f329cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f32a0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2f32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f32a4: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x2f32a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x2f32a8: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F32A8u;
    {
        const bool branch_taken_0x2f32a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F32ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32A8u;
        // 0x2f32ac: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32a8) {
            ctx->pc = 0x2F3290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3290;
        }
    }
    ctx->pc = 0x2F32B0u;
    // 0x2f32b0: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2f32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2f32b4: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x2f32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2f32b8: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x2f32b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f32bc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2f32bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2f32c0: 0x275182a  slt         $v1, $s3, $s5
    ctx->pc = 0x2f32c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2f32c4: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2F32C4u;
    {
        const bool branch_taken_0x2f32c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32C4u;
        // 0x2f32c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32c4) {
            ctx->pc = 0x2F3288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3288;
        }
    }
    ctx->pc = 0x2F32CCu;
    // 0x2f32cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F32CCu;
    {
        const bool branch_taken_0x2f32cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32CCu;
        // 0x2f32d0: 0x24020898  addiu       $v0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32cc) {
            ctx->pc = 0x2F32DCu;
            goto label_2f32dc;
        }
    }
    ctx->pc = 0x2F32D4u;
label_2f32d4:
    // 0x2f32d4: 0x2697ffff  addiu       $s7, $s4, -0x1
    ctx->pc = 0x2f32d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2f32d8: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x2f32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
label_2f32dc:
    // 0x2f32dc: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f32e0: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x2f32e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f32e4: 0x2463b748  addiu       $v1, $v1, -0x48B8
    ctx->pc = 0x2f32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948680));
    // 0x2f32e8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f32e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f32ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f32ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f32f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f32f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f32f4: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x2f32f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f32f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f32fc: 0x244203fc  addiu       $v0, $v0, 0x3FC
    ctx->pc = 0x2f32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1020));
label_2f3300:
    // 0x2f3300: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2f3300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2f3304: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2f3304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2f3308: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2f3308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2f330c: 0x0  nop
    ctx->pc = 0x2f330cu;
    // NOP
    // 0x2f3310: 0x0  nop
    ctx->pc = 0x2f3310u;
    // NOP
    // 0x2f3314: 0x661fffa  bgez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F3314u;
    {
        const bool branch_taken_0x2f3314 = (GPR_S64(ctx, 19) >= 0);
        if (branch_taken_0x2f3314) {
            ctx->pc = 0x2F3300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3300;
        }
    }
    ctx->pc = 0x2F331Cu;
    // 0x2f331c: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x2f331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f3320: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f3320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f3324: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x2f3324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f3328: 0x2463b748  addiu       $v1, $v1, -0x48B8
    ctx->pc = 0x2f3328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948680));
    // 0x2f332c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f332cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3330: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x2f3330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f3334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3338: 0x244207fc  addiu       $v0, $v0, 0x7FC
    ctx->pc = 0x2f3338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2044));
    // 0x2f333c: 0x0  nop
    ctx->pc = 0x2f333cu;
    // NOP
label_2f3340:
    // 0x2f3340: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2f3340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2f3344: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2f3344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2f3348: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2f3348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2f334c: 0x0  nop
    ctx->pc = 0x2f334cu;
    // NOP
    // 0x2f3350: 0x0  nop
    ctx->pc = 0x2f3350u;
    // NOP
    // 0x2f3354: 0x661fffa  bgez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F3354u;
    {
        const bool branch_taken_0x2f3354 = (GPR_S64(ctx, 19) >= 0);
        if (branch_taken_0x2f3354) {
            ctx->pc = 0x2F3340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3340;
        }
    }
    ctx->pc = 0x2F335Cu;
    // 0x2f335c: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x2f335cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3360: 0x6620039  bltzl       $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F3360u;
    {
        const bool branch_taken_0x2f3360 = (GPR_S64(ctx, 19) < 0);
        if (branch_taken_0x2f3360) {
            ctx->pc = 0x2F3364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3360u;
            // 0x2f3364: 0x9644002a  lhu         $a0, 0x2A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3448u;
            goto label_2f3448;
        }
    }
    ctx->pc = 0x2F3368u;
    // 0x2f3368: 0x3c170072  lui         $s7, 0x72
    ctx->pc = 0x2f3368u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)114 << 16));
    // 0x2f336c: 0x0  nop
    ctx->pc = 0x2f336cu;
    // NOP
label_2f3370:
    // 0x2f3370: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f3370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3374: 0xc0bdb80  jal         func_2F6E00
    ctx->pc = 0x2F3374u;
    SET_GPR_U32(ctx, 31, 0x2F337Cu);
    ctx->pc = 0x2F3378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3374u;
    // 0x2f3378: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6E00u, 0x2F3374u, 0x2F337Cu)) {
        return;
    }
    ctx->pc = 0x2F337Cu;
label_2f337c:
    // 0x2f337c: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2F337Cu;
    {
        const bool branch_taken_0x2f337c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f337c) {
            ctx->pc = 0x2F3380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F337Cu;
            // 0x2f3380: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3370;
        }
    }
    ctx->pc = 0x2F3384u;
    // 0x2f3384: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x2f3384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f3388: 0x26f5bb48  addiu       $s5, $s7, -0x44B8
    ctx->pc = 0x2f3388u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949704));
    // 0x2f338c: 0x2c28818  mult        $s1, $s6, $v0
    ctx->pc = 0x2f338cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2f3390: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f3390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3394: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f3394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3398: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f3398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f339c: 0xc0bd9fc  jal         func_2F67F0
    ctx->pc = 0x2F339Cu;
    SET_GPR_U32(ctx, 31, 0x2F33A4u);
    ctx->pc = 0x2F33A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F339Cu;
    // 0x2f33a0: 0x2352821  addu        $a1, $s1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F67F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F67F0u, 0x2F339Cu, 0x2F33A4u)) {
        return;
    }
    ctx->pc = 0x2F33A4u;
label_2f33a4:
    // 0x2f33a4: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x2F33A4u;
    {
        const bool branch_taken_0x2f33a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33A4u;
        // 0x2f33a8: 0x26a5fc00  addiu       $a1, $s5, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33a4) {
            ctx->pc = 0x2F3804u;
            goto label_2f3804;
        }
    }
    ctx->pc = 0x2F33ACu;
    // 0x2f33ac: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2f33acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2f33b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f33b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2f33b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2f33b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f33bc: 0x2a830100  slti        $v1, $s4, 0x100
    ctx->pc = 0x2f33bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2f33c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F33C0u;
    {
        const bool branch_taken_0x2f33c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33C0u;
        // 0x2f33c4: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33c0) {
            ctx->pc = 0x2F33D0u;
            goto label_2f33d0;
        }
    }
    ctx->pc = 0x2F33C8u;
    // 0x2f33c8: 0x1660001a  bnez        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F33C8u;
    {
        const bool branch_taken_0x2f33c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33C8u;
        // 0x2f33cc: 0x26060001  addiu       $a2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33c8) {
            ctx->pc = 0x2F3434u;
            goto label_2f3434;
        }
    }
    ctx->pc = 0x2F33D0u;
label_2f33d0:
    // 0x2f33d0: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2f33d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2f33d4: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x2f33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x2f33d8: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x2f33d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2f33dc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2f33dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2f33e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f33e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f33e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f33e8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2f33e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f33ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f33ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f33f0: 0xc0bd9fc  jal         func_2F67F0
    ctx->pc = 0x2F33F0u;
    SET_GPR_U32(ctx, 31, 0x2F33F8u);
    ctx->pc = 0x2F33F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F33F0u;
    // 0x2f33f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F67F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F67F0u, 0x2F33F0u, 0x2F33F8u)) {
        return;
    }
    ctx->pc = 0x2F33F8u;
label_2f33f8:
    // 0x2f33f8: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x2F33F8u;
    {
        const bool branch_taken_0x2f33f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33F8u;
        // 0x2f33fc: 0x26060001  addiu       $a2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33f8) {
            ctx->pc = 0x2F3804u;
            goto label_2f3804;
        }
    }
    ctx->pc = 0x2F3400u;
    // 0x2f3400: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x2f3400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2f3404: 0x262503fc  addiu       $a1, $s1, 0x3FC
    ctx->pc = 0x2f3404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1020));
    // 0x2f3408: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f3408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f340c: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x2f340cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f3410:
    // 0x2f3410: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2f3410u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2f3414: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2f3414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2f3418: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x2f3418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x2f341c: 0x0  nop
    ctx->pc = 0x2f341cu;
    // NOP
    // 0x2f3420: 0x0  nop
    ctx->pc = 0x2f3420u;
    // NOP
    // 0x2f3424: 0x681fffa  bgez        $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F3424u;
    {
        const bool branch_taken_0x2f3424 = (GPR_S64(ctx, 20) >= 0);
        if (branch_taken_0x2f3424) {
            ctx->pc = 0x2F3410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3410;
        }
    }
    ctx->pc = 0x2F342Cu;
    // 0x2f342c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F342Cu;
    {
        const bool branch_taken_0x2f342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F342Cu;
        // 0x2f3430: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f342c) {
            ctx->pc = 0x2F3438u;
            goto label_2f3438;
        }
    }
    ctx->pc = 0x2F3434u;
label_2f3434:
    // 0x2f3434: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x2f3434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2f3438:
    // 0x2f3438: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f3438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f343c: 0x661ffcc  bgez        $s3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2F343Cu;
    {
        const bool branch_taken_0x2f343c = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x2F3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F343Cu;
        // 0x2f3440: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f343c) {
            ctx->pc = 0x2F3370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3370;
        }
    }
    ctx->pc = 0x2F3444u;
    // 0x2f3444: 0x9644002a  lhu         $a0, 0x2A($s2)
    ctx->pc = 0x2f3444u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
label_2f3448:
    // 0x2f3448: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2f3448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2f344c: 0xae500034  sw          $s0, 0x34($s2)
    ctx->pc = 0x2f344cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 16));
    // 0x2f3450: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f3450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3454: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3454u;
    {
        const bool branch_taken_0x2f3454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3454) {
            ctx->pc = 0x2F3458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3454u;
            // 0x2f3458: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F345Cu;
            goto label_2f345c;
        }
    }
    ctx->pc = 0x2F345Cu;
label_2f345c:
    // 0x2f345c: 0x9646002c  lhu         $a2, 0x2C($s2)
    ctx->pc = 0x2f345cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2f3460: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x2f3460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2f3464: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f3464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3468: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2f3468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2f346c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2f346cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f3470: 0x7065001a  div1        $zero, $v1, $a1
    ctx->pc = 0x2f3470u;
    { int32_t divisor = GPR_S32(ctx, 5); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x2f3474: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2f3474u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f3478: 0x70001812  mflo1       $v1
    ctx->pc = 0x2f3478u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
    // 0x2f347c: 0x1012  mflo        $v0
    ctx->pc = 0x2f347cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f3480: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2f3480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f3484: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2f3484u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f3488: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x2f3488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x2f348c: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F348Cu;
    {
        const bool branch_taken_0x2f348c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2F3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F348Cu;
        // 0x2f3490: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f348c) {
            ctx->pc = 0x2F3524u;
            goto label_2f3524;
        }
    }
    ctx->pc = 0x2F3494u;
    // 0x2f3494: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x2f3494u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f3498:
    // 0x2f3498: 0x16350004  bne         $s1, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3498u;
    {
        const bool branch_taken_0x2f3498 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x2F349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3498u;
        // 0x2f349c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3498) {
            ctx->pc = 0x2F34ACu;
            goto label_2f34ac;
        }
    }
    ctx->pc = 0x2F34A0u;
    // 0x2f34a0: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2f34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2f34a4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2f34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f34a8: 0xae420170  sw          $v0, 0x170($s2)
    ctx->pc = 0x2f34a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
label_2f34ac:
    // 0x2f34ac: 0xc0bdb80  jal         func_2F6E00
    ctx->pc = 0x2F34ACu;
    SET_GPR_U32(ctx, 31, 0x2F34B4u);
    ctx->pc = 0x2F34B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34ACu;
    // 0x2f34b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6E00u, 0x2F34ACu, 0x2F34B4u)) {
        return;
    }
    ctx->pc = 0x2F34B4u;
label_2f34b4:
    // 0x2f34b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f34b8: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F34B8u;
    {
        const bool branch_taken_0x2f34b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F34BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34B8u;
        // 0x2f34bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34b8) {
            ctx->pc = 0x2F34E4u;
            goto label_2f34e4;
        }
    }
    ctx->pc = 0x2F34C0u;
    // 0x2f34c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f34c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34c4: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x2f34c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2f34c8: 0xc0bc988  jal         func_2F2620
    ctx->pc = 0x2F34C8u;
    SET_GPR_U32(ctx, 31, 0x2F34D0u);
    ctx->pc = 0x2F34CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34C8u;
    // 0x2f34cc: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2620u, 0x2F34C8u, 0x2F34D0u)) {
        return;
    }
    ctx->pc = 0x2F34D0u;
label_2f34d0:
    // 0x2f34d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2f34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f34d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F34D4u;
    {
        const bool branch_taken_0x2f34d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34D4u;
        // 0x2f34d8: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34d4) {
            ctx->pc = 0x2F3510u;
            goto label_2f3510;
        }
    }
    ctx->pc = 0x2F34DCu;
    // 0x2f34dc: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x2F34DCu;
    {
        const bool branch_taken_0x2f34dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34DCu;
        // 0x2f34e0: 0xdfbe00c0  ld          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34dc) {
            ctx->pc = 0x2F385Cu;
            goto label_2f385c;
        }
    }
    ctx->pc = 0x2F34E4u;
label_2f34e4:
    // 0x2f34e4: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F34E4u;
    {
        const bool branch_taken_0x2f34e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f34e4) {
            ctx->pc = 0x2F34E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F34E4u;
            // 0x2f34e8: 0xae500034  sw          $s0, 0x34($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F34ECu;
            goto label_2f34ec;
        }
    }
    ctx->pc = 0x2F34ECu;
label_2f34ec:
    // 0x2f34ec: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x2f34ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x2f34f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f34f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f34f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34f8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2f34f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f34fc: 0xc0bc988  jal         func_2F2620
    ctx->pc = 0x2F34FCu;
    SET_GPR_U32(ctx, 31, 0x2F3504u);
    ctx->pc = 0x2F3500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34FCu;
    // 0x2f3500: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2620u, 0x2F34FCu, 0x2F3504u)) {
        return;
    }
    ctx->pc = 0x2F3504u;
label_2f3504:
    // 0x2f3504: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2f3504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3508: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2F3508u;
    {
        const bool branch_taken_0x2f3508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3508u;
        // 0x2f350c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3508) {
            ctx->pc = 0x2F3854u;
            goto label_2f3854;
        }
    }
    ctx->pc = 0x2F3510u;
label_2f3510:
    // 0x2f3510: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2f3510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2f3514: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f3514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2f3518: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2f3518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f351c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2F351Cu;
    {
        const bool branch_taken_0x2f351c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F351Cu;
        // 0x2f3520: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f351c) {
            ctx->pc = 0x2F3498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3498;
        }
    }
    ctx->pc = 0x2F3524u;
label_2f3524:
    // 0x2f3524: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x2f3524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2f3528: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F3528u;
    {
        const bool branch_taken_0x2f3528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3528u;
        // 0x2f352c: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3528) {
            ctx->pc = 0x2F3590u;
            goto label_2f3590;
        }
    }
    ctx->pc = 0x2F3530u;
    // 0x2f3530: 0x9646002c  lhu         $a2, 0x2C($s2)
    ctx->pc = 0x2f3530u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2f3534: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x2f3534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2f3538: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f3538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f353c: 0x9643002a  lhu         $v1, 0x2A($s2)
    ctx->pc = 0x2f353cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x2f3540: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f3540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3544: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2f3544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f3548: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3548u;
    {
        const bool branch_taken_0x2f3548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3548) {
            ctx->pc = 0x2F354Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3548u;
            // 0x2f354c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3550u;
            goto label_2f3550;
        }
    }
    ctx->pc = 0x2F3550u;
label_2f3550:
    // 0x2f3550: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x2f3550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2f3554: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2f3554u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f3558: 0x1012  mflo        $v0
    ctx->pc = 0x2f3558u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f355c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2f355cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2f3560: 0xc0bc9d4  jal         func_2F2750
    ctx->pc = 0x2F3560u;
    SET_GPR_U32(ctx, 31, 0x2F3568u);
    ctx->pc = 0x2F3564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3560u;
    // 0x2f3564: 0xae420038  sw          $v0, 0x38($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2750u, 0x2F3560u, 0x2F3568u)) {
        return;
    }
    ctx->pc = 0x2F3568u;
label_2f3568:
    // 0x2f3568: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2f3568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f356c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F356Cu;
    {
        const bool branch_taken_0x2f356c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F356Cu;
        // 0x2f3570: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f356c) {
            ctx->pc = 0x2F357Cu;
            goto label_2f357c;
        }
    }
    ctx->pc = 0x2F3574u;
    // 0x2f3574: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2F3574u;
    {
        const bool branch_taken_0x2f3574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3574u;
        // 0x2f3578: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3574) {
            ctx->pc = 0x2F3854u;
            goto label_2f3854;
        }
    }
    ctx->pc = 0x2F357Cu;
label_2f357c:
    // 0x2f357c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F357Cu;
    {
        const bool branch_taken_0x2f357c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F357Cu;
        // 0x2f3580: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f357c) {
            ctx->pc = 0x2F359Cu;
            goto label_2f359c;
        }
    }
    ctx->pc = 0x2F3584u;
    // 0x2f3584: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2f3584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2f3588: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2F3588u;
    SET_GPR_U32(ctx, 31, 0x2F3590u);
    ctx->pc = 0x2F358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3588u;
    // 0x2f358c: 0x24840190  addiu       $a0, $a0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2F3588u, 0x2F3590u)) {
        return;
    }
    ctx->pc = 0x2F3590u;
label_2f3590:
    // 0x2f3590: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f3590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f3594: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2F3594u;
    {
        const bool branch_taken_0x2f3594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3594u;
        // 0x2f3598: 0x34429001  ori         $v0, $v0, 0x9001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36865);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3594) {
            ctx->pc = 0x2F3854u;
            goto label_2f3854;
        }
    }
    ctx->pc = 0x2F359Cu;
label_2f359c:
    // 0x2f359c: 0x3c120072  lui         $s2, 0x72
    ctx->pc = 0x2f359cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)114 << 16));
    // 0x2f35a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f35a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35a4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f35a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f35a8: 0xc0bde18  jal         func_2F7860
    ctx->pc = 0x2F35A8u;
    SET_GPR_U32(ctx, 31, 0x2F35B0u);
    ctx->pc = 0x2F35ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35A8u;
    // 0x2f35ac: 0x2650c880  addiu       $s0, $s2, -0x3780 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7860u, 0x2F35A8u, 0x2F35B0u)) {
        return;
    }
    ctx->pc = 0x2F35B0u;
label_2f35b0:
    // 0x2f35b0: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x2f35b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f35b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f35b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f35b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35bc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F35BCu;
    SET_GPR_U32(ctx, 31, 0x2F35C4u);
    ctx->pc = 0x2F35C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35BCu;
    // 0x2f35c0: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F35BCu, 0x2F35C4u)) {
        return;
    }
    ctx->pc = 0x2F35C4u;
label_2f35c4:
    // 0x2f35c4: 0x93a30017  lbu         $v1, 0x17($sp)
    ctx->pc = 0x2f35c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 23)));
    // 0x2f35c8: 0x340e8427  ori         $t6, $zero, 0x8427
    ctx->pc = 0x2f35c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33831);
    // 0x2f35cc: 0x93ad0016  lbu         $t5, 0x16($sp)
    ctx->pc = 0x2f35ccu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x2f35d0: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2f35d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f35d4: 0x93a80015  lbu         $t0, 0x15($sp)
    ctx->pc = 0x2f35d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x2f35d8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2f35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2f35dc: 0x93a60013  lbu         $a2, 0x13($sp)
    ctx->pc = 0x2f35dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x2f35e0: 0xd4902  srl         $t1, $t5, 4
    ctx->pc = 0x2f35e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x2f35e4: 0x93a50012  lbu         $a1, 0x12($sp)
    ctx->pc = 0x2f35e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x2f35e8: 0x85102  srl         $t2, $t0, 4
    ctx->pc = 0x2f35e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x2f35ec: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x2f35ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x2f35f0: 0x65902  srl         $t3, $a2, 4
    ctx->pc = 0x2f35f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2f35f4: 0x56102  srl         $t4, $a1, 4
    ctx->pc = 0x2f35f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x2f35f8: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x2f35f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f35fc: 0x43902  srl         $a3, $a0, 4
    ctx->pc = 0x2f35fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x2f3600: 0x1314818  mult        $t1, $t1, $s1
    ctx->pc = 0x2f3600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2f3604: 0x71515018  mult1       $t2, $t2, $s1
    ctx->pc = 0x2f3604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2f3608: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2f3608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2f360c: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x2f360cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2f3610: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2f3610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2f3614: 0x71916018  mult1       $t4, $t4, $s1
    ctx->pc = 0x2f3614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2f3618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f361c: 0xf13818  mult        $a3, $a3, $s1
    ctx->pc = 0x2f361cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2f3620: 0x3108000f  andi        $t0, $t0, 0xF
    ctx->pc = 0x2f3620u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x2f3624: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x2f3624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2f3628: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2f3628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x2f362c: 0x31ad000f  andi        $t5, $t5, 0xF
    ctx->pc = 0x2f362cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x2f3630: 0xa64ec880  sh          $t6, -0x3780($s2)
    ctx->pc = 0x2f3630u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4294953088), (uint16_t)GPR_U32(ctx, 14));
    // 0x2f3634: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2f3634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2f3638: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x2f3638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x2f363c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x2f363cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2f3640: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x2f3640u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2f3644: 0x1665821  addu        $t3, $t3, $a2
    ctx->pc = 0x2f3644u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x2f3648: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x2f3648u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x2f364c: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x2f364cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x2f3650: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2f3650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2f3654: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x2f3654u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f3658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f365c: 0xa209000d  sb          $t1, 0xD($s0)
    ctx->pc = 0x2f365cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f3660: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2f3660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2f3664: 0xa20a000c  sb          $t2, 0xC($s0)
    ctx->pc = 0x2f3664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f3668: 0xa20b000b  sb          $t3, 0xB($s0)
    ctx->pc = 0x2f3668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 11));
    // 0x2f366c: 0xa20c000a  sb          $t4, 0xA($s0)
    ctx->pc = 0x2f366cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 12));
    // 0x2f3670: 0xa2070009  sb          $a3, 0x9($s0)
    ctx->pc = 0x2f3670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f3674: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x2f3674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f3678: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x2f3678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f367c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2f367cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2f3680: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2f3680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2f3684: 0x6a02000f  ldl         $v0, 0xF($s0)
    ctx->pc = 0x2f3684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f3688: 0x6e020008  ldr         $v0, 0x8($s0)
    ctx->pc = 0x2f3688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f368c: 0xb202001f  sdl         $v0, 0x1F($s0)
    ctx->pc = 0x2f368cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3690: 0xb6020018  sdr         $v0, 0x18($s0)
    ctx->pc = 0x2f3690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3694: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2f3694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2f3698: 0x24670140  addiu       $a3, $v1, 0x140
    ctx->pc = 0x2f3698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x2f369c: 0x80e90000  lb          $t1, 0x0($a3)
    ctx->pc = 0x2f369cu;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x6B0140u));
    // 0x2f36a0: 0x80e20001  lb          $v0, 0x1($a3)
    ctx->pc = 0x2f36a0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6B0141u));
    // 0x2f36a4: 0xa2090040  sb          $t1, 0x40($s0)
    ctx->pc = 0x2f36a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f36a8: 0xa2020041  sb          $v0, 0x41($s0)
    ctx->pc = 0x2f36a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f36ac: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x2f36acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x2f36b0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F36B0u;
    SET_GPR_U32(ctx, 31, 0x2F36B8u);
    ctx->pc = 0x2F36B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36B0u;
    // 0x2f36b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F36B0u, 0x2F36B8u)) {
        return;
    }
    ctx->pc = 0x2F36B8u;
label_2f36b8:
    // 0x2f36b8: 0x93a30017  lbu         $v1, 0x17($sp)
    ctx->pc = 0x2f36b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 23)));
    // 0x2f36bc: 0x340ea426  ori         $t6, $zero, 0xA426
    ctx->pc = 0x2f36bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42022);
    // 0x2f36c0: 0x93ad0016  lbu         $t5, 0x16($sp)
    ctx->pc = 0x2f36c0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x2f36c4: 0x3c0f006b  lui         $t7, 0x6B
    ctx->pc = 0x2f36c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)107 << 16));
    // 0x2f36c8: 0x93ab0015  lbu         $t3, 0x15($sp)
    ctx->pc = 0x2f36c8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x2f36cc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2f36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2f36d0: 0x93a90013  lbu         $t1, 0x13($sp)
    ctx->pc = 0x2f36d0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x2f36d4: 0xd3102  srl         $a2, $t5, 4
    ctx->pc = 0x2f36d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x2f36d8: 0x93a50012  lbu         $a1, 0x12($sp)
    ctx->pc = 0x2f36d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x2f36dc: 0xb3902  srl         $a3, $t3, 4
    ctx->pc = 0x2f36dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
    // 0x2f36e0: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x2f36e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x2f36e4: 0x95102  srl         $t2, $t1, 4
    ctx->pc = 0x2f36e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x2f36e8: 0x56102  srl         $t4, $a1, 4
    ctx->pc = 0x2f36e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x2f36ec: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x2f36ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f36f0: 0x44102  srl         $t0, $a0, 4
    ctx->pc = 0x2f36f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x2f36f4: 0xd13018  mult        $a2, $a2, $s1
    ctx->pc = 0x2f36f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2f36f8: 0x70f13818  mult1       $a3, $a3, $s1
    ctx->pc = 0x2f36f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2f36fc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2f36fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2f3700: 0x1114018  mult        $t0, $t0, $s1
    ctx->pc = 0x2f3700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f3704: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x2f3704u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x2f3708: 0x71515018  mult1       $t2, $t2, $s1
    ctx->pc = 0x2f3708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2f370c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3710: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x2f3710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2f3714: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2f3714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x2f3718: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2f3718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2f371c: 0x31ad000f  andi        $t5, $t5, 0xF
    ctx->pc = 0x2f371cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x2f3720: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x2f3720u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x2f3724: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x2f3724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2f3728: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x2f3728u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2f372c: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2f372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2f3730: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x2f3730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x2f3734: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x2f3734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x2f3738: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x2f3738u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x2f373c: 0xa206000d  sb          $a2, 0xD($s0)
    ctx->pc = 0x2f373cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f3740: 0xa207000c  sb          $a3, 0xC($s0)
    ctx->pc = 0x2f3740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f3744: 0x2645c880  addiu       $a1, $s2, -0x3780
    ctx->pc = 0x2f3744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953088));
    // 0x2f3748: 0xa60e0000  sh          $t6, 0x0($s0)
    ctx->pc = 0x2f3748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x2f374c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3750: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x2f3750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f3754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f3754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3758: 0xa20a000b  sb          $t2, 0xB($s0)
    ctx->pc = 0x2f3758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f375c: 0xa20c000a  sb          $t4, 0xA($s0)
    ctx->pc = 0x2f375cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 12));
    // 0x2f3760: 0xa2080009  sb          $t0, 0x9($s0)
    ctx->pc = 0x2f3760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f3764: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f3764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f3768: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x2f3768u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f376c: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x2f376cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3770: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2f3770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2f3774: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2f3774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2f3778: 0x6a08000f  ldl         $t0, 0xF($s0)
    ctx->pc = 0x2f3778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f377c: 0x6e080008  ldr         $t0, 0x8($s0)
    ctx->pc = 0x2f377cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f3780: 0xb208001f  sdl         $t0, 0x1F($s0)
    ctx->pc = 0x2f3780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3784: 0xb6080018  sdr         $t0, 0x18($s0)
    ctx->pc = 0x2f3784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3788: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2f3788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2f378c: 0x25e30148  addiu       $v1, $t7, 0x148
    ctx->pc = 0x2f378cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 328));
    // 0x2f3790: 0x80680000  lb          $t0, 0x0($v1)
    ctx->pc = 0x2f3790u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3794: 0x80690001  lb          $t1, 0x1($v1)
    ctx->pc = 0x2f3794u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2f3798: 0x80620002  lb          $v0, 0x2($v1)
    ctx->pc = 0x2f3798u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2f379c: 0xa2080040  sb          $t0, 0x40($s0)
    ctx->pc = 0x2f379cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f37a0: 0xa2090041  sb          $t1, 0x41($s0)
    ctx->pc = 0x2f37a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f37a4: 0xa2020042  sb          $v0, 0x42($s0)
    ctx->pc = 0x2f37a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f37a8: 0xc0bdb66  jal         func_2F6D98
    ctx->pc = 0x2F37A8u;
    SET_GPR_U32(ctx, 31, 0x2F37B0u);
    ctx->pc = 0x2F37ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F37A8u;
    // 0x2f37ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D98u, 0x2F37A8u, 0x2F37B0u)) {
        return;
    }
    ctx->pc = 0x2F37B0u;
label_2f37b0:
    // 0x2f37b0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F37B0u;
    {
        const bool branch_taken_0x2f37b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37B0u;
        // 0x2f37b4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37b0) {
            ctx->pc = 0x2F3804u;
            goto label_2f3804;
        }
    }
    ctx->pc = 0x2F37B8u;
    // 0x2f37b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f37b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f37bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f37bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f37c0: 0xc0bc988  jal         func_2F2620
    ctx->pc = 0x2F37C0u;
    SET_GPR_U32(ctx, 31, 0x2F37C8u);
    ctx->pc = 0x2F37C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F37C0u;
    // 0x2f37c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2620u, 0x2F37C0u, 0x2F37C8u)) {
        return;
    }
    ctx->pc = 0x2F37C8u;
label_2f37c8:
    // 0x2f37c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2f37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f37cc: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F37CCu;
    {
        const bool branch_taken_0x2f37cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37CCu;
        // 0x2f37d0: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37cc) {
            ctx->pc = 0x2F3858u;
            goto label_2f3858;
        }
    }
    ctx->pc = 0x2F37D4u;
    // 0x2f37d4: 0xc0bda0c  jal         func_2F6830
    ctx->pc = 0x2F37D4u;
    SET_GPR_U32(ctx, 31, 0x2F37DCu);
    ctx->pc = 0x2F37D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F37D4u;
    // 0x2f37d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6830u, 0x2F37D4u, 0x2F37DCu)) {
        return;
    }
    ctx->pc = 0x2F37DCu;
label_2f37dc:
    // 0x2f37dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F37DCu;
    {
        const bool branch_taken_0x2f37dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f37dc) {
            ctx->pc = 0x2F3804u;
            goto label_2f3804;
        }
    }
    ctx->pc = 0x2F37E4u;
    // 0x2f37e4: 0xc0bc8f2  jal         func_2F23C8
    ctx->pc = 0x2F37E4u;
    SET_GPR_U32(ctx, 31, 0x2F37ECu);
    ctx->pc = 0x2F37E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F37E4u;
    // 0x2f37e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F23C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F23C8u, 0x2F37E4u, 0x2F37ECu)) {
        return;
    }
    ctx->pc = 0x2F37ECu;
label_2f37ec:
    // 0x2f37ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F37ECu;
    {
        const bool branch_taken_0x2f37ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f37ec) {
            ctx->pc = 0x2F3804u;
            goto label_2f3804;
        }
    }
    ctx->pc = 0x2F37F4u;
    // 0x2f37f4: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x2F37F4u;
    SET_GPR_U32(ctx, 31, 0x2F37FCu);
    ctx->pc = 0x2F37F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F37F4u;
    // 0x2f37f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6690u, 0x2F37F4u, 0x2F37FCu)) {
        return;
    }
    ctx->pc = 0x2F37FCu;
label_2f37fc:
    // 0x2f37fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F37FCu;
    {
        const bool branch_taken_0x2f37fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f37fc) {
            ctx->pc = 0x2F3800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F37FCu;
            // 0x2f3800: 0x24020898  addiu       $v0, $zero, 0x898 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3810u;
            goto label_2f3810;
        }
    }
    ctx->pc = 0x2F3804u;
label_2f3804:
    // 0x2f3804: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f3804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f3808: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F3808u;
    {
        const bool branch_taken_0x2f3808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3808u;
        // 0x2f380c: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3808) {
            ctx->pc = 0x2F3854u;
            goto label_2f3854;
        }
    }
    ctx->pc = 0x2F3810u;
label_2f3810:
    // 0x2f3810: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2f3810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2f3814: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x2f3814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f3818: 0x2483b748  addiu       $v1, $a0, -0x48B8
    ctx->pc = 0x2f3818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948680));
    // 0x2f381c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f381cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3820: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f3820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3828: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f3828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f382c: 0xc0bcaf0  jal         func_2F2BC0
    ctx->pc = 0x2F382Cu;
    SET_GPR_U32(ctx, 31, 0x2F3834u);
    ctx->pc = 0x2F3830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F382Cu;
    // 0x2f3830: 0xac660888  sw          $a2, 0x888($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 2184), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2BC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2BC0u, 0x2F382Cu, 0x2F3834u)) {
        return;
    }
    ctx->pc = 0x2F3834u;
label_2f3834:
    // 0x2f3834: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f3834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f3838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f3838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f383c: 0x34639003  ori         $v1, $v1, 0x9003
    ctx->pc = 0x2f383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36867);
    // 0x2f3840: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3840u;
    {
        const bool branch_taken_0x2f3840 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3840u;
        // 0x2f3844: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3840) {
            ctx->pc = 0x2F3850u;
            goto label_2f3850;
        }
    }
    ctx->pc = 0x2F3848u;
    // 0x2f3848: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2f3848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2f384c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f384cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3850:
    // 0x2f3850: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f3850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f3854:
    // 0x2f3854: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2f3854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2f3858:
    // 0x2f3858: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2f3858u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2f385c:
    // 0x2f385c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x2f385cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f3860: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2f3860u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f3864: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2f3864u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f3868: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2f3868u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f386c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2f386cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f3870: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2f3870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f3874: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2f3874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3878: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2f3878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f387c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F387Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F387Cu;
        // 0x2f3880: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F387Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3884u;
    // 0x2f3884: 0x0  nop
    ctx->pc = 0x2f3884u;
    // NOP
    ctx->pc = 0x2f3888u;
}
