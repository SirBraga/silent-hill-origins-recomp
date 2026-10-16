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

// Function: sub_001C3228
// Address: 0x1c3228 - 0x1c33d0
void sub_001C3228_0x1c3228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3228_0x1c3228");
#endif

    switch (ctx->pc) {
        case 0x1c3278u: goto label_1c3278;
        case 0x1c329cu: goto label_1c329c;
        case 0x1c32a4u: goto label_1c32a4;
        case 0x1c331cu: goto label_1c331c;
        case 0x1c3324u: goto label_1c3324;
        case 0x1c3338u: goto label_1c3338;
        case 0x1c3358u: goto label_1c3358;
        case 0x1c336cu: goto label_1c336c;
        default: break;
    }

    ctx->pc = 0x1c3228u;

    // 0x1c3228: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c3228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c322c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1c322cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1c3230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3234: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1c3234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1c3238: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1c3238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1c323c: 0x26350298  addiu       $s5, $s1, 0x298
    ctx->pc = 0x1c323cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 664));
    // 0x1c3240: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1c3240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1c3244: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1c3244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3248: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c3248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c324c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c324cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3250: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1c3250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1c3254: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c3254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3258: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1c3258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1c325c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1c325cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3260: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1c3260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1c3264: 0x263702c0  addiu       $s7, $s1, 0x2C0
    ctx->pc = 0x1c3264u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x1c3268: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1c3268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1c326c: 0x263e0290  addiu       $fp, $s1, 0x290
    ctx->pc = 0x1c326cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x1c3270: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3274: 0x0  nop
    ctx->pc = 0x1c3274u;
    // NOP
label_1c3278:
    // 0x1c3278: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x1c3278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c327c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C327Cu;
    {
        const bool branch_taken_0x1c327c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C327Cu;
        // 0x1c3280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c327c) {
            ctx->pc = 0x1C32F4u;
            goto label_1c32f4;
        }
    }
    ctx->pc = 0x1C3284u;
    // 0x1c3284: 0xae00fffc  sw          $zero, -0x4($s0)
    ctx->pc = 0x1c3284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 0));
    // 0x1c3288: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c3288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c328c: 0xc620026c  lwc1        $f0, 0x26C($s1)
    ctx->pc = 0x1c328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3290: 0xae160028  sw          $s6, 0x28($s0)
    ctx->pc = 0x1c3290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 22));
    // 0x1c3294: 0xc070e0e  jal         func_1C3838
    ctx->pc = 0x1C3294u;
    SET_GPR_U32(ctx, 31, 0x1C329Cu);
    ctx->pc = 0x1C3298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3294u;
    // 0x1c3298: 0xe600fff8  swc1        $f0, -0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C3838u, 0x1C3294u, 0x1C329Cu)) {
        return;
    }
    ctx->pc = 0x1C329Cu;
label_1c329c:
    // 0x1c329c: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1C329Cu;
    SET_GPR_U32(ctx, 31, 0x1C32A4u);
    ctx->pc = 0x1C32A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C329Cu;
    // 0x1c32a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1C329Cu, 0x1C32A4u)) {
        return;
    }
    ctx->pc = 0x1C32A4u;
label_1c32a4:
    // 0x1c32a4: 0x2662fff9  addiu       $v0, $s3, -0x7
    ctx->pc = 0x1c32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967289));
    // 0x1c32a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c32a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c32ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C32ACu;
    {
        const bool branch_taken_0x1c32ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32ACu;
        // 0x1c32b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32ac) {
            ctx->pc = 0x1C32C0u;
            goto label_1c32c0;
        }
    }
    ctx->pc = 0x1C32B4u;
    // 0x1c32b4: 0x26230298  addiu       $v1, $s1, 0x298
    ctx->pc = 0x1c32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 664));
    // 0x1c32b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C32B8u;
    {
        const bool branch_taken_0x1c32b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32B8u;
        // 0x1c32bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32b8) {
            ctx->pc = 0x1C32E4u;
            goto label_1c32e4;
        }
    }
    ctx->pc = 0x1C32C0u;
label_1c32c0:
    // 0x1c32c0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c32c4: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C32C4u;
    {
        const bool branch_taken_0x1c32c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32C4u;
        // 0x1c32c8: 0x2b41021  addu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32c4) {
            ctx->pc = 0x1C32DCu;
            goto label_1c32dc;
        }
    }
    ctx->pc = 0x1C32CCu;
    // 0x1c32cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c32d0: 0x26230298  addiu       $v1, $s1, 0x298
    ctx->pc = 0x1c32d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 664));
    // 0x1c32d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C32D4u;
    {
        const bool branch_taken_0x1c32d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32D4u;
        // 0x1c32d8: 0xae2203d0  sw          $v0, 0x3D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32d4) {
            ctx->pc = 0x1C32E4u;
            goto label_1c32e4;
        }
    }
    ctx->pc = 0x1C32DCu;
label_1c32dc:
    // 0x1c32dc: 0x26230298  addiu       $v1, $s1, 0x298
    ctx->pc = 0x1c32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 664));
    // 0x1c32e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c32e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1c32e4:
    // 0x1c32e4: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x1c32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c32e8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c32e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1c32ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C32ECu;
    {
        const bool branch_taken_0x1c32ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32ECu;
        // 0x1c32f0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32ec) {
            ctx->pc = 0x1C332Cu;
            goto label_1c332c;
        }
    }
    ctx->pc = 0x1C32F4u;
label_1c32f4:
    // 0x1c32f4: 0x2a62000d  slti        $v0, $s3, 0xD
    ctx->pc = 0x1c32f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1c32f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C32F8u;
    {
        const bool branch_taken_0x1c32f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32F8u;
        // 0x1c32fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32f8) {
            ctx->pc = 0x1C3340u;
            goto label_1c3340;
        }
    }
    ctx->pc = 0x1C3300u;
    // 0x1c3300: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x1c3300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
    // 0x1c3304: 0xae00fffc  sw          $zero, -0x4($s0)
    ctx->pc = 0x1c3304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 0));
    // 0x1c3308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c330c: 0xc620026c  lwc1        $f0, 0x26C($s1)
    ctx->pc = 0x1c330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3310: 0xae160028  sw          $s6, 0x28($s0)
    ctx->pc = 0x1c3310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 22));
    // 0x1c3314: 0xc070e0e  jal         func_1C3838
    ctx->pc = 0x1C3314u;
    SET_GPR_U32(ctx, 31, 0x1C331Cu);
    ctx->pc = 0x1C3318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3314u;
    // 0x1c3318: 0xe600fff8  swc1        $f0, -0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C3838u, 0x1C3314u, 0x1C331Cu)) {
        return;
    }
    ctx->pc = 0x1C331Cu;
label_1c331c:
    // 0x1c331c: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1C331Cu;
    SET_GPR_U32(ctx, 31, 0x1C3324u);
    ctx->pc = 0x1C3320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C331Cu;
    // 0x1c3320: 0x26640003  addiu       $a0, $s3, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1C331Cu, 0x1C3324u)) {
        return;
    }
    ctx->pc = 0x1C3324u;
label_1c3324:
    // 0x1c3324: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1c3324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3328: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c3328u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1c332c:
    // 0x1c332c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3330: 0xc070cf4  jal         func_1C33D0
    ctx->pc = 0x1C3330u;
    SET_GPR_U32(ctx, 31, 0x1C3338u);
    ctx->pc = 0x1C3334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3330u;
    // 0x1c3334: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C33D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C33D0u, 0x1C3330u, 0x1C3338u)) {
        return;
    }
    ctx->pc = 0x1C3338u;
label_1c3338:
    // 0x1c3338: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C3338u;
    {
        const bool branch_taken_0x1c3338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3338u;
        // 0x1c333c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3338) {
            ctx->pc = 0x1C338Cu;
            goto label_1c338c;
        }
    }
    ctx->pc = 0x1C3340u;
label_1c3340:
    // 0x1c3340: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c3340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3344: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3348: 0xae12fffc  sw          $s2, -0x4($s0)
    ctx->pc = 0x1c3348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 18));
    // 0x1c334c: 0x2664fff3  addiu       $a0, $s3, -0xD
    ctx->pc = 0x1c334cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967283));
    // 0x1c3350: 0xc0601c8  jal         func_180720
    ctx->pc = 0x1C3350u;
    SET_GPR_U32(ctx, 31, 0x1C3358u);
    ctx->pc = 0x1C3354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3350u;
    // 0x1c3354: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180720u, 0x1C3350u, 0x1C3358u)) {
        return;
    }
    ctx->pc = 0x1C3358u;
label_1c3358:
    // 0x1c3358: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3358u;
    {
        const bool branch_taken_0x1c3358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3358u;
        // 0x1c335c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3358) {
            ctx->pc = 0x1C3378u;
            goto label_1c3378;
        }
    }
    ctx->pc = 0x1C3360u;
    // 0x1c3360: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x1c3360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x1c3364: 0xc070e0e  jal         func_1C3838
    ctx->pc = 0x1C3364u;
    SET_GPR_U32(ctx, 31, 0x1C336Cu);
    ctx->pc = 0x1C3368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3364u;
    // 0x1c3368: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C3838u, 0x1C3364u, 0x1C336Cu)) {
        return;
    }
    ctx->pc = 0x1C336Cu;
label_1c336c:
    // 0x1c336c: 0xc6200280  lwc1        $f0, 0x280($s1)
    ctx->pc = 0x1c336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3370: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3370u;
    {
        const bool branch_taken_0x1c3370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3370u;
        // 0x1c3374: 0xe600fff8  swc1        $f0, -0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3370) {
            ctx->pc = 0x1C3388u;
            goto label_1c3388;
        }
    }
    ctx->pc = 0x1C3378u;
label_1c3378:
    // 0x1c3378: 0x2f41021  addu        $v0, $s7, $s4
    ctx->pc = 0x1c3378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x1c337c: 0x3d41821  addu        $v1, $fp, $s4
    ctx->pc = 0x1c337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x1c3380: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c3380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1c3384: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c3384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1c3388:
    // 0x1c3388: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c3388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c338c:
    // 0x1c338c: 0x26940034  addiu       $s4, $s4, 0x34
    ctx->pc = 0x1c338cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
    // 0x1c3390: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x1c3390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1c3394: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1C3394u;
    {
        const bool branch_taken_0x1c3394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3394u;
        // 0x1c3398: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3394) {
            ctx->pc = 0x1C3278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3278;
        }
    }
    ctx->pc = 0x1C339Cu;
    // 0x1c339c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1c339cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c33a0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1c33a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c33a4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1c33a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c33a8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1c33a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c33ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c33acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c33b0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1c33b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c33b4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1c33b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c33b8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1c33b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c33bc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1c33bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c33c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c33c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c33c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C33C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C33C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33C4u;
        // 0x1c33c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C33C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C33CCu;
    // 0x1c33cc: 0x0  nop
    ctx->pc = 0x1c33ccu;
    // NOP
    ctx->pc = 0x1c33d0u;
}
