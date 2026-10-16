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

// Function: sub_001A55D8
// Address: 0x1a55d8 - 0x1a5758
void sub_001A55D8_0x1a55d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A55D8_0x1a55d8");
#endif

    ctx->pc = 0x1a55d8u;

    // 0x1a55d8: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x1a55d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a55dc: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x1a55dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a55e0: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x1a55e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a55e4: 0xc4880000  lwc1        $f8, 0x0($a0)
    ctx->pc = 0x1a55e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a55e8: 0x46043281  sub.s       $f10, $f6, $f4
    ctx->pc = 0x1a55e8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x1a55ec: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1a55ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a55f0: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x1a55f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a55f4: 0x46054241  sub.s       $f9, $f8, $f5
    ctx->pc = 0x1a55f4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[8], ctx->f[5]);
    // 0x1a55f8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1a55f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a55fc: 0x460811c1  sub.s       $f7, $f2, $f8
    ctx->pc = 0x1a55fcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x1a5600: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a5600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5604: 0x46061981  sub.s       $f6, $f3, $f6
    ctx->pc = 0x1a5604u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x1a5608: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1a5608u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1a560c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x1a560cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1a5610: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1a5610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a5614: 0x460138c2  mul.s       $f3, $f7, $f1
    ctx->pc = 0x1a5614u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x1a5618: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x1a5618u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1a561c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x1a561cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x1a5620: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x1a5620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x1a5624: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x1a5624u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1a5628: 0x46051832  c.eq.s      $f3, $f5
    ctx->pc = 0x1a5628u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a562c: 0x0  nop
    ctx->pc = 0x1a562cu;
    // NOP
    // 0x1a5630: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5630u;
    {
        const bool branch_taken_0x1a5630 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5630u;
        // 0x1a5634: 0x46010081  sub.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5630) {
            ctx->pc = 0x1A5650u;
            goto label_1a5650;
        }
    }
    ctx->pc = 0x1A5638u;
    // 0x1a5638: 0x46051032  c.eq.s      $f2, $f5
    ctx->pc = 0x1a5638u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a563c: 0x0  nop
    ctx->pc = 0x1a563cu;
    // NOP
    // 0x1a5640: 0x45010042  bc1t        . + 4 + (0x42 << 2)
    ctx->pc = 0x1A5640u;
    {
        const bool branch_taken_0x1a5640 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5640u;
        // 0x1a5644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5640) {
            ctx->pc = 0x1A574Cu;
            goto label_1a574c;
        }
    }
    ctx->pc = 0x1A5648u;
    // 0x1a5648: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5648u;
        // 0x1a564c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5650u;
label_1a5650:
    // 0x1a5650: 0x46075002  mul.s       $f0, $f10, $f7
    ctx->pc = 0x1a5650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x1a5654: 0x46064842  mul.s       $f1, $f9, $f6
    ctx->pc = 0x1a5654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x1a5658: 0x0  nop
    ctx->pc = 0x1a5658u;
    // NOP
    // 0x1a565c: 0x0  nop
    ctx->pc = 0x1a565cu;
    // NOP
    // 0x1a5660: 0x46031103  div.s       $f4, $f2, $f3
    ctx->pc = 0x1a5660u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[3]);
    // 0x1a5664: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a5664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a5668: 0x0  nop
    ctx->pc = 0x1a5668u;
    // NOP
    // 0x1a566c: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x1a566cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x1a5670: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5670u;
    {
        const bool branch_taken_0x1a5670 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5670) {
            ctx->pc = 0x1A5694u;
            goto label_1a5694;
        }
    }
    ctx->pc = 0x1A5678u;
    // 0x1a5678: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x1a5678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x1a567c: 0x46062082  mul.s       $f2, $f4, $f6
    ctx->pc = 0x1a567cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x1a5680: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x1a5680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x1a5684: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1a5684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a5688: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1a5688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a568c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a568cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a5690: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1a5690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1a5694:
    // 0x1a5694: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x1a5694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5698: 0x0  nop
    ctx->pc = 0x1a5698u;
    // NOP
    // 0x1a569c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1A569Cu;
    {
        const bool branch_taken_0x1a569c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a569c) {
            ctx->pc = 0x1A56E0u;
            goto label_1a56e0;
        }
    }
    ctx->pc = 0x1A56A4u;
    // 0x1a56a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a56a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a56a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a56a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a56ac: 0x0  nop
    ctx->pc = 0x1a56acu;
    // NOP
    // 0x1a56b0: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x1a56b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a56b4: 0x0  nop
    ctx->pc = 0x1a56b4u;
    // NOP
    // 0x1a56b8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1A56B8u;
    {
        const bool branch_taken_0x1a56b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a56b8) {
            ctx->pc = 0x1A56E0u;
            goto label_1a56e0;
        }
    }
    ctx->pc = 0x1A56C0u;
    // 0x1a56c0: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x1a56c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a56c4: 0x0  nop
    ctx->pc = 0x1a56c4u;
    // NOP
    // 0x1a56c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A56C8u;
    {
        const bool branch_taken_0x1a56c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a56c8) {
            ctx->pc = 0x1A56E0u;
            goto label_1a56e0;
        }
    }
    ctx->pc = 0x1A56D0u;
    // 0x1a56d0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1a56d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a56d4: 0x0  nop
    ctx->pc = 0x1a56d4u;
    // NOP
    // 0x1a56d8: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x1A56D8u;
    {
        const bool branch_taken_0x1a56d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56D8u;
        // 0x1a56dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56d8) {
            ctx->pc = 0x1A574Cu;
            goto label_1a574c;
        }
    }
    ctx->pc = 0x1A56E0u;
label_1a56e0:
    // 0x1a56e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a56e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a56e4: 0x0  nop
    ctx->pc = 0x1a56e4u;
    // NOP
    // 0x1a56e8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a56e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a56ec: 0x0  nop
    ctx->pc = 0x1a56ecu;
    // NOP
    // 0x1a56f0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1A56F0u;
    {
        const bool branch_taken_0x1a56f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a56f0) {
            ctx->pc = 0x1A5718u;
            goto label_1a5718;
        }
    }
    ctx->pc = 0x1A56F8u;
    // 0x1a56f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a56f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a56fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a56fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5700: 0x0  nop
    ctx->pc = 0x1a5700u;
    // NOP
    // 0x1a5704: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1a5704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5708: 0x0  nop
    ctx->pc = 0x1a5708u;
    // NOP
    // 0x1a570c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1A570Cu;
    {
        const bool branch_taken_0x1a570c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A570Cu;
        // 0x1a5710: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a570c) {
            ctx->pc = 0x1A574Cu;
            goto label_1a574c;
        }
    }
    ctx->pc = 0x1A5714u;
    // 0x1a5714: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5718:
    // 0x1a5718: 0x0  nop
    ctx->pc = 0x1a5718u;
    // NOP
    // 0x1a571c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1a571cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5720: 0x0  nop
    ctx->pc = 0x1a5720u;
    // NOP
    // 0x1a5724: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5724u;
    {
        const bool branch_taken_0x1a5724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5724u;
        // 0x1a5728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5724) {
            ctx->pc = 0x1A574Cu;
            goto label_1a574c;
        }
    }
    ctx->pc = 0x1A572Cu;
    // 0x1a572c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a572cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5730: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5734: 0x0  nop
    ctx->pc = 0x1a5734u;
    // NOP
    // 0x1a5738: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x1a5738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a573c: 0x0  nop
    ctx->pc = 0x1a573cu;
    // NOP
    // 0x1a5740: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5740u;
    {
        const bool branch_taken_0x1a5740 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5740u;
        // 0x1a5744: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5740) {
            ctx->pc = 0x1A574Cu;
            goto label_1a574c;
        }
    }
    ctx->pc = 0x1A5748u;
    // 0x1a5748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a574c:
    // 0x1a574c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A574Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A574Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5754u;
    // 0x1a5754: 0x0  nop
    ctx->pc = 0x1a5754u;
    // NOP
    ctx->pc = 0x1a5758u;
}
